/*
  ==============================================================================

    DrumController.cpp
    Created: 28 Apr 2013 2:34:19pm
    Author:  Alexander Gustafson

  ==============================================================================
*/

#include "DrumController.h"

DrumController::DrumController()
{
    deviceManager.initialise (2, 2, 0, true, String::empty, 0);
    synthAudioSource = new SynthAudioSource (keyboardState);
    audioSourcePlayer.setSource (synthAudioSource);
    deviceManager.addAudioCallback (&audioSourcePlayer);
    deviceManager.addMidiInputCallback (String::empty, &(synthAudioSource->midiCollector));
}

DrumController::~DrumController()
{
    audioSourcePlayer.setSource (0);
    deviceManager.removeMidiInputCallback (String::empty, &(synthAudioSource->midiCollector));
    deviceManager.removeAudioCallback (&audioSourcePlayer);
    synthAudioSource = nullptr;
}

void DrumController::buttonClicked(juce::Button *buttonClicked)
{
    synthAudioSource->setSampleForSoundSound(2, nil);
    
}

void DrumController::buttonStateChanged(juce::Button *buttonWhichStateChanged)
{
    if (buttonWhichStateChanged->isDown()) {

        if (buttonWhichStateChanged->getName() == "pad1") {
            keyboardState.noteOn(1, 1, 1.0);
        }else if (buttonWhichStateChanged->getName() == "pad2")
        {
            keyboardState.noteOn(1, 2, 1.0);

        }else if (buttonWhichStateChanged->getName() == "pad3")
        {
            keyboardState.noteOn(1, 3, 1.0);
            
        }else if (buttonWhichStateChanged->getName() == "pad4")
        {
            keyboardState.noteOn(1, 4, 1.0);
            
        }else if (buttonWhichStateChanged->getName() == "pad5")
        {
            keyboardState.noteOn(1, 5, 1.0);
            
        }else if (buttonWhichStateChanged->getName() == "pad6")
        {
            keyboardState.noteOn(1, 6, 1.0);
            
        }else if (buttonWhichStateChanged->getName() == "pad7")
        {
            keyboardState.noteOn(1, 7, 1.0);
            
        }else if (buttonWhichStateChanged->getName() == "pad8")
        {
            keyboardState.noteOn(1, 8, 1.0);
            
        }else if (buttonWhichStateChanged->getName() == "pad9")
        {
            keyboardState.noteOn(1,9, 1.0);
            
        }else if (buttonWhichStateChanged->getName() == "pad10")
        {
            keyboardState.noteOn(1, 10, 1.0);
            
        }else if (buttonWhichStateChanged->getName() == "pad11")
        {
            keyboardState.noteOn(1, 11, 1.0);
            
        }else if (buttonWhichStateChanged->getName() == "pad12")
        {
            keyboardState.noteOn(1, 12, 1.0);
            
        }else if (buttonWhichStateChanged->getName() == "pad13")
        {
            keyboardState.noteOn(1, 13, 1.0);
            
        }else if (buttonWhichStateChanged->getName() == "pad14")
        {
            keyboardState.noteOn(1, 14, 1.0);
            
        }else if (buttonWhichStateChanged->getName() == "pad15")
        {
            keyboardState.noteOn(1, 15, 1.0);
            
        }else if (buttonWhichStateChanged->getName() == "pad16")
        {
            keyboardState.noteOn(1, 16, 1.0);
            
        }
        

    }
    
    
}


