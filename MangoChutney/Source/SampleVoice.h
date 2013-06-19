/*
  ==============================================================================

    SampleVoice.h
    Created: 28 Apr 2013 8:47:29pm
    Author:  Alex Gustafson

  ==============================================================================
*/

#ifndef __SAMPLEVOICE_H_84CED749__
#define __SAMPLEVOICE_H_84CED749__

#include "JuceHeader.h"

class DDSamplerSound    : public SynthesiserSound
{
public:
    //==============================================================================
    /** Creates a sampled sound from an audio reader.
     
     This will attempt to load the audio from the source into memory and store
     it in this object.
     
     @param name         a name for the sample
     @param source       the audio to load. This object can be safely deleted by the
     caller after this constructor returns
     @param midiNotes    the set of midi keys that this sound should be played on. This
     is used by the SynthesiserSound::appliesToNote() method
     @param midiNoteForNormalPitch   the midi note at which the sample should be played
     with its natural rate. All other notes will be pitched
     up or down relative to this one
     @param attackTimeSecs   the attack (fade-in) time, in seconds
     @param releaseTimeSecs  the decay (fade-out) time, in seconds
     @param maxSampleLengthSeconds   a maximum length of audio to read from the audio
     source, in seconds
     */
    DDSamplerSound (const String& name,
                  AudioFormatReader& source,
                  const BigInteger& midiNotes,
                  int midiNoteForNormalPitch,
                  double attackTimeSecs,
                  double releaseTimeSecs,
                  double maxSampleLengthSeconds);
    
    DDSamplerSound (const String& name_,
                    File& sourceAudioFile,
                    const BigInteger& midiNotes_,
                    const int midiNoteForNormalPitch,
                    const double attackTimeSecs,
                    const double releaseTimeSecs,
                    const double maxSampleLengthSeconds);
    
    /** Destructor. */
    ~DDSamplerSound();
    
    //==============================================================================
    /** Returns the sample's name */
    const String& getName() const                           { return name; }
    
    /** Returns the audio sample data.
     This could be 0 if there was a problem loading it.
     */
    AudioSampleBuffer* getAudioData() const                 { return data; }
    void setupSound(const String& name,
                    AudioFormatReader& source,
                    const BigInteger& midiNotes,
                    int midiNoteForNormalPitch,
                    double attackTimeSecs,
                    double releaseTimeSecs,
                    double maxSampleLengthSeconds);
    void setSourceFile(const juce::File file);
    
    //==============================================================================
    bool appliesToNote (const int midiNoteNumber);
    bool appliesToChannel (const int midiChannel);
    

    
private:
    //==============================================================================
    friend class DDSamplerVoice;
    AudioFormatManager formatManager;
    String name;
    ScopedPointer <AudioSampleBuffer> data;
    double sourceSampleRate;
    BigInteger midiNotes;
    int length, attackSamples, releaseSamples;
    int midiRootNote;
    File sourceAudioFile;
    
    JUCE_LEAK_DETECTOR (SamplerSound)
};


//==============================================================================
/**
 A subclass of SynthesiserVoice that can play a SamplerSound.
 
 To use it, create a Synthesiser, add some SamplerVoice objects to it, then
 give it some SampledSound objects to play.
 
 @see SamplerSound, Synthesiser, SynthesiserVoice
 */
class DDSamplerVoice    : public SynthesiserVoice
{
public:
    //==============================================================================
    /** Creates a SamplerVoice.
     */
    DDSamplerVoice();
    
    /** Destructor. */
    ~DDSamplerVoice();
    
    
    //==============================================================================
    bool canPlaySound (SynthesiserSound* sound);
    
    void startNote (const int midiNoteNumber,
                    const float velocity,
                    SynthesiserSound* sound,
                    const int currentPitchWheelPosition);
    
    void stopNote (const bool allowTailOff);
    
    void pitchWheelMoved (const int newValue);
    void controllerMoved (const int controllerNumber,
                          const int newValue);
    
    void renderNextBlock (AudioSampleBuffer& outputBuffer, int startSample, int numSamples);
    
    
    
private:
    //==============================================================================
    double pitchRatio;
    double sourceSamplePosition;
    float lgain, rgain, attackReleaseLevel, attackDelta, releaseDelta;
    bool isInAttack, isInRelease;
    
    JUCE_LEAK_DETECTOR (SamplerVoice)
};



#endif  // __SAMPLEVOICE_H_84CED749__
