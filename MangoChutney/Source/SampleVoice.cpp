/*
 ==============================================================================
 
 SampleVoice.cpp
 Created: 28 Apr 2013 8:47:29pm
 Author:  Alex Gustafson
 
 ==============================================================================
 */

#include "SampleVoice.h"


DDSamplerSound::DDSamplerSound (const String& name_,
                                AudioFormatReader& source,
                                const BigInteger& midiNotes_,
                                const int midiNoteForNormalPitch,
                                const double attackTimeSecs,
                                const double releaseTimeSecs,
                                const double maxSampleLengthSeconds)
: name (name_),
midiNotes (midiNotes_),
midiRootNote (midiNoteForNormalPitch)
{
    sourceSampleRate = source.sampleRate;
    
    if (sourceSampleRate <= 0 || source.lengthInSamples <= 0)
    {
        length = 0;
        attackSamples = 0;
        releaseSamples = 0;
    }
    else
    {
        length = jmin ((int) source.lengthInSamples,
                       (int) (maxSampleLengthSeconds * sourceSampleRate));
        
        data = new AudioSampleBuffer (jmin (2, (int) source.numChannels), length + 4);
        
        source.read (data, 0, length + 4, 0, true, true);
        
        attackSamples = roundToInt (attackTimeSecs * sourceSampleRate);
        releaseSamples = roundToInt (releaseTimeSecs * sourceSampleRate);
    }
}

DDSamplerSound::DDSamplerSound (const String& name_,
                                File& sourceAudioFile,
                                const BigInteger& midiNotes_,
                                const int midiNoteForNormalPitch,
                                const double attackTimeSecs,
                                const double releaseTimeSecs,
                                const double maxSampleLengthSeconds)
: name (name_),
midiNotes (midiNotes_),
midiRootNote (midiNoteForNormalPitch)
{
    WavAudioFormat wavFormat;
    ScopedPointer<MemoryMappedAudioFormatReader> source ( wavFormat.createMemoryMappedReader(sourceAudioFile));
    source->mapEntireFile();
    sourceSampleRate = source->sampleRate;

    
    if (sourceSampleRate <= 0 || source->lengthInSamples <= 0)
    {
        length = 0;
        attackSamples = 0;
        releaseSamples = 0;
    }
    else
    {
        length = jmin ((int) source->lengthInSamples,
                       (int) (maxSampleLengthSeconds * sourceSampleRate));
        
        data = new AudioSampleBuffer (jmin (2, (int) source->numChannels), length + 4);
        
        source->read (data, 0, length + 4, 0, true, true);
        
        attackSamples = roundToInt (attackTimeSecs * sourceSampleRate);
        releaseSamples = roundToInt (releaseTimeSecs * sourceSampleRate);
    }
}

DDSamplerSound::~DDSamplerSound()
{
}

bool DDSamplerSound::appliesToNote (const int midiNoteNumber)
{
    return midiNotes [midiNoteNumber];
}

bool DDSamplerSound::appliesToChannel (const int /*midiChannel*/)
{
    return true;
}

void DDSamplerSound::setupSound(const String& name_,
                                AudioFormatReader& source,
                                const BigInteger& midiNotes_,
                                const int midiNoteForNormalPitch,
                                const double attackTimeSecs,
                                const double releaseTimeSecs,
                                const double maxSampleLengthSeconds)
{
    sourceSampleRate = source.sampleRate;
    
    if (sourceSampleRate <= 0 || source.lengthInSamples <= 0)
    {
        length = 0;
        attackSamples = 0;
        releaseSamples = 0;
    }
    else
    {
        length = jmin ((int) source.lengthInSamples,
                       (int) (maxSampleLengthSeconds * sourceSampleRate));
        
        data = new AudioSampleBuffer (jmin (2, (int) source.numChannels), length + 4);
        
        source.read (data, 0, length + 4, 0, true, true);
        
        attackSamples = roundToInt (attackTimeSecs * sourceSampleRate);
        releaseSamples = roundToInt (releaseTimeSecs * sourceSampleRate);
    }
}

void DDSamplerSound::setSourceFile(const juce::File file)
{
    sourceAudioFile = file;
    WavAudioFormat wavFormat;
    ScopedPointer<MemoryMappedAudioFormatReader> source ( wavFormat.createMemoryMappedReader(sourceAudioFile));
    source->mapEntireFile();
    sourceSampleRate = source->sampleRate;
    
    if (sourceSampleRate <= 0 || source->lengthInSamples <= 0)
    {
        length = 0;
        attackSamples = 0;
        releaseSamples = 0;
    }
    else
    {
        length = (int) source->lengthInSamples;
        data = new AudioSampleBuffer (jmin (2, (int) source->numChannels), length + 4);
        source->read (data, 0, length + 4, 0, true, true);
        
    }
    
}



//==============================================================================
DDSamplerVoice::DDSamplerVoice()
: pitchRatio (0.0),
sourceSamplePosition (0.0),
lgain (0.0f),
rgain (0.0f),
isInAttack (false),
isInRelease (false)
{
}

DDSamplerVoice::~DDSamplerVoice()
{
}

bool DDSamplerVoice::canPlaySound (SynthesiserSound* sound)
{
    return dynamic_cast <const DDSamplerSound*> (sound) != nullptr;
}

void DDSamplerVoice::startNote (const int midiNoteNumber,
                                const float velocity,
                                SynthesiserSound* s,
                                const int /*currentPitchWheelPosition*/)
{
    if (const DDSamplerSound* const sound = dynamic_cast <const DDSamplerSound*> (s))
    {
        pitchRatio = pow (2.0, (midiNoteNumber - sound->midiRootNote) / 12.0)
        * sound->sourceSampleRate / getSampleRate();
        
        sourceSamplePosition = 0.0;
        lgain = velocity;
        rgain = velocity;
        
        isInAttack = (sound->attackSamples > 0);
        isInRelease = false;
        
        if (isInAttack)
        {
            attackReleaseLevel = 0.0f;
            attackDelta = (float) (pitchRatio / sound->attackSamples);
        }
        else
        {
            attackReleaseLevel = 1.0f;
            attackDelta = 0.0f;
        }
        
        if (sound->releaseSamples > 0)
            releaseDelta = (float) (-pitchRatio / sound->releaseSamples);
        else
            releaseDelta = 0.0f;
    }
    else
    {
        jassertfalse; // this object can only play SamplerSounds!
    }
}

void DDSamplerVoice::stopNote (const bool allowTailOff)
{
    if (allowTailOff)
    {
        isInAttack = false;
        isInRelease = true;
    }
    else
    {
        clearCurrentNote();
    }
}

void DDSamplerVoice::pitchWheelMoved (const int /*newValue*/)
{
}

void DDSamplerVoice::controllerMoved (const int /*controllerNumber*/,
                                      const int /*newValue*/)
{
}

//==============================================================================
void DDSamplerVoice::renderNextBlock (AudioSampleBuffer& outputBuffer, int startSample, int numSamples)
{
    if (const DDSamplerSound* const playingSound = static_cast <DDSamplerSound*> (getCurrentlyPlayingSound().get()))
    {
        const float* const inL = playingSound->data->getSampleData (0, 0);
        const float* const inR = playingSound->data->getNumChannels() > 1
        ? playingSound->data->getSampleData (1, 0) : nullptr;
        
        float* outL = outputBuffer.getSampleData (0, startSample);
        float* outR = outputBuffer.getNumChannels() > 1 ? outputBuffer.getSampleData (1, startSample) : nullptr;
        
        while (--numSamples >= 0)
        {
            const int pos = (int) sourceSamplePosition;
            const float alpha = (float) (sourceSamplePosition - pos);
            const float invAlpha = 1.0f - alpha;
            
            // just using a very simple linear interpolation here..
            float l = (inL [pos] * invAlpha + inL [pos + 1] * alpha);
            float r = (inR != nullptr) ? (inR [pos] * invAlpha + inR [pos + 1] * alpha)
            : l;
            
            l *= lgain;
            r *= rgain;
            
            if (isInAttack)
            {
                l *= attackReleaseLevel;
                r *= attackReleaseLevel;
                
                attackReleaseLevel += attackDelta;
                
                if (attackReleaseLevel >= 1.0f)
                {
                    attackReleaseLevel = 1.0f;
                    isInAttack = false;
                }
            }
            else if (isInRelease)
            {
                l *= attackReleaseLevel;
                r *= attackReleaseLevel;
                
                attackReleaseLevel += releaseDelta;
                
                if (attackReleaseLevel <= 0.0f)
                {
                    stopNote (false);
                    break;
                }
            }
            
            if (outR != nullptr)
            {
                *outL++ += l;
                *outR++ += r;
            }
            else
            {
                *outL++ += (l + r) * 0.5f;
            }
            
            sourceSamplePosition += pitchRatio;
            
            if (sourceSamplePosition > playingSound->length)
            {
                stopNote (false);
                break;
            }
        }
    }
}
