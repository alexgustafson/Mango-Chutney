/*
  ==============================================================================

    AudioEngine.h
    Created: 28 Apr 2013 2:33:52pm
    Author:  Alexander Gustafson

  ==============================================================================
*/

#ifndef __AUDIOENGINE_H_BE6F93C2__
#define __AUDIOENGINE_H_BE6F93C2__

#include "JuceHeader.h"
#include "drumSamples.h"
#include "SampleVoice.h"

class SynthAudioSource  : public AudioSource
{
public:
    //==============================================================================
    // this collects real-time midi messages from the midi input device, and
    // turns them into blocks that we can process in our audio callback
    MidiMessageCollector midiCollector;
    
    // this represents the state of which keys on our on-screen keyboard are held
    // down. When the mouse is clicked on the keyboard component, this object also
    // generates midi messages for this, which we can pass on to our synth.
    MidiKeyboardState& keyboardState;
    
    // the synth itself!
    Synthesiser synth;
    
    //==============================================================================
    SynthAudioSource (MidiKeyboardState& keyboardState);
    
    void setUsingSampledSound();
    void prepareToPlay (int /*samplesPerBlockExpected*/, double sampleRate);
    void releaseResources();
    void getNextAudioBlock (const AudioSourceChannelInfo& bufferToFill);
    void setSampleForSoundSound(int index, AudioFormatReader* newSampleReader);
    
    
private:
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (SynthAudioSource)
};

#endif  // __AUDIOENGINE_H_BE6F93C2__
