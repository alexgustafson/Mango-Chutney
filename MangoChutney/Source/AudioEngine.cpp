/*
  ==============================================================================

    AudioEngine.cpp
    Created: 28 Apr 2013 2:33:52pm
    Author:  Alexander Gustafson

  ==============================================================================
*/

#include "AudioEngine.h"
#include "drumSamples.h"

// This is an audio source that streams the output of our demo synth.

    SynthAudioSource::SynthAudioSource (MidiKeyboardState& keyboardState_)
    : keyboardState (keyboardState_)
    {
        // add some voices to our synth, to play the sounds..
        for (int i = 16; --i >= 0;)
        {
            synth.addVoice (new SamplerVoice());    // and these ones play the sampled sounds
        }
        
        setUsingSampledSound();
        
    }
    
    void SynthAudioSource::setUsingSampledSound()
    {
        synth.clearSounds();
        
        WavAudioFormat wavFormat;
        
        ScopedPointer<AudioFormatReader> audioReader (wavFormat.createReaderFor (new MemoryInputStream (drumSamples::wa_808tape_clap_01_clean_wav,
                                                                                                        drumSamples::wa_808tape_clap_01_clean_wavSize,
                                                                                                        false),
                                                                                 true));
        
        BigInteger notes;
        notes.setRange (1, 1, true);
        
        synth.addSound (new SamplerSound ("clap",
                                          *audioReader,
                                          notes,
                                          1,   // root midi note
                                          0.01,  // attack time
                                          0.3,  // release time
                                          10.0  // maximum sample length
                                          ));
        
        
        notes.setRange (2, 1, true);
        ScopedPointer<AudioFormatReader> audioReader2 (wavFormat.createReaderFor (new MemoryInputStream (drumSamples::wa_808tape_kick_17_clean_wav,
                                                                                                         drumSamples::wa_808tape_kick_17_clean_wavSize,
                                                                                                         false),
                                                                                  true));
        synth.addSound(new SamplerSound ("bass drum", *audioReader2, notes,2,0.01,0.3,10.0));
        
        
        notes.setRange (3, 1, true);
        ScopedPointer<AudioFormatReader> audioReader3 (wavFormat.createReaderFor (new MemoryInputStream (drumSamples::wa_808tape_snare_02_clean_wav,
                                                                                                         drumSamples::wa_808tape_snare_02_clean_wavSize,
                                                                                                         false),
                                                                                  true));
        synth.addSound(new SamplerSound ("bass drum", *audioReader3, notes,3,0.01,0.3,10.0));
        
        notes.setRange (4, 1, true);
        ScopedPointer<AudioFormatReader> audioReader4 (wavFormat.createReaderFor (new MemoryInputStream (drumSamples::wa_808tape_closedhat_01_clean_wav,
                                                                                                         drumSamples::wa_808tape_closedhat_01_clean_wavSize,
                                                                                                         false),
                                                                                  true));
        synth.addSound(new SamplerSound ("bass drum", *audioReader4, notes,4,0.01,0.3,10.0));
        notes.setRange (5, 1, true);
        ScopedPointer<AudioFormatReader> audioReader5 (wavFormat.createReaderFor (new MemoryInputStream (drumSamples::wa_808tape_rim_01_sat_wav,
                                                                                                         drumSamples::wa_808tape_rim_01_sat_wavSize,
                                                                                                         false),
                                                                                  true));
        synth.addSound(new SamplerSound ("bass drum", *audioReader5, notes,5,0.01,0.3,10.0));
        
        
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
        
        // pass these messages to the keyboard state so that it can update the component
        // to show on-screen which keys are being pressed on the physical midi keyboard.
        // This call will also add midi messages to the buffer which were generated by
        // the mouse-clicking on the on-screen keyboard.
        keyboardState.processNextMidiBuffer (incomingMidi, 0, bufferToFill.numSamples, true);
        
        // and now get the synth to process the midi events and generate its output.
        synth.renderNextBlock (*bufferToFill.buffer, incomingMidi, 0, bufferToFill.numSamples);
    }
