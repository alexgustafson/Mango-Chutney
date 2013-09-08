/*
 ==============================================================================
 
 AudioEngine.cpp
 Created: 28 Apr 2013 2:33:52pm
 Author:  Alexander Gustafson
 
 ==============================================================================
 */

#include "AudioEngine.h"




// This is an audio source that streams the output of our demo synth.

SynthAudioSource::SynthAudioSource (MidiKeyboardState& keyboardState_)
: keyboardState (keyboardState_)
{
    sequencer = Sequencer::getInstance();
    // add some voices to our synth, to play the sounds..
    for (int i = 16; --i >= 0;)
    {
        synth.addVoice (new DDSamplerVoice());    // and these ones play the sampled sounds
    }
    
    setUsingSampledSound();
    
    sampleCounter = 0;
    
}

void SynthAudioSource::setUsingSampledSound()
{
    synth.clearSounds();
    
    
    
}

void SynthAudioSource::prepareToPlay (int /*samplesPerBlockExpected*/, double sampleRate)
{
    midiCollector.reset (sampleRate);
    synth.setCurrentPlaybackSampleRate (sampleRate);
}

void SynthAudioSource::releaseResources()
{
}

void SynthAudioSource::getNextAudioBlock (const AudioSourceChannelInfo& bufferToFill)
{
    // the synth always adds its output to the audio buffer, so we have to clear it
    // first..
    bufferToFill.clearActiveBufferRegion();
    
    // fill a midi buffer with incoming messages from the midi input.
    MidiBuffer incomingMidi;
    midiCollector.removeNextBlockOfMessages (incomingMidi, bufferToFill.numSamples);
    
    if (sequencer->getState() == isPlaying) {
        
        for (int i = 0; i < bufferToFill.numSamples; i++) {
            sampleCounter++;
            
            if (sampleCounter > sequencer->samplesPerBeat) {
                sampleCounter = 0;
                
                for (int j = 0; j < 16; j++)
                {
                    if (sequencer->pattern.tracks[j].notes[sequencer->beatCount] > 0.01f) {
                        incomingMidi.addEvent( MidiMessage::noteOn(1, j, 1.0f), i);
                    }
                }
                
                sequencer->beatCount++ ;
                if (sequencer->beatCount > 15) {
                    sequencer->beatCount = 0;
                    
                }
            }
            
        }
    }else{
        sampleCounter = 1;
    }
    
    // pass these messages to the keyboard state so that it can update the component
    // to show on-screen which keys are being pressed on the physical midi keyboard.
    // This call will also add midi messages to the buffer which were generated by
    // the mouse-clicking on the on-screen keyboard.
    keyboardState.processNextMidiBuffer (incomingMidi, 0, bufferToFill.numSamples, true);
    
    // and now get the synth to process the midi events and generate its output.
    synth.renderNextBlock (*bufferToFill.buffer, incomingMidi, 0, bufferToFill.numSamples);
}

void SynthAudioSource::setSampleForSound(int index, File soundFile)
{
    
    DDSamplerSound *sound = (DDSamplerSound *)synth.getSound(index);
    
    if (!sound) {
        BigInteger notes;
        notes.setRange (index, 1, true);
        synth.addSound(new DDSamplerSound("name", soundFile, notes, index, 0.01, 0.01, 10.0));
        
    }else
    {
        sound->setSourceFile(soundFile);
        
    }
}


