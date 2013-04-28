/*
  ==============================================================================

    DrumController.h
    Created: 28 Apr 2013 2:34:19pm
    Author:  Alexander Gustafson

  ==============================================================================
*/

#ifndef __DRUMCONTROLLER_H_18E8E14C__
#define __DRUMCONTROLLER_H_18E8E14C__

#include "JuceHeader.h"
#include "AudioEngine.h"

class DrumController : public ButtonListener {
public:
    
    DrumController ();
    ~DrumController ();

    void buttonClicked(juce::Button *buttonClicked);
    void buttonStateChanged(juce::Button *buttonWhichStateChanged);
private:
    AudioDeviceManager deviceManager;
    MidiKeyboardState keyboardState;
    AudioSourcePlayer audioSourcePlayer;
    ScopedPointer<SynthAudioSource> synthAudioSource;
    
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (DrumController)
    
};


#endif  // __DRUMCONTROLLER_H_18E8E14C__
