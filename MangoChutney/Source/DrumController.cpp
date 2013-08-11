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
    drumSettings = ValueTree("drumSettings");
    loadDefaultSettings();
    audioSourcePlayer.setSource (synthAudioSource);
    deviceManager.addAudioCallback (&audioSourcePlayer);
    deviceManager.addMidiInputCallback (String::empty, &(synthAudioSource->midiCollector));
    
    lastSelectedPad = 1;
}

DrumController::~DrumController()
{
    drumSettings.removeAllChildren(nullptr);
    audioSourcePlayer.setSource (0);
    deviceManager.removeMidiInputCallback (String::empty, &(synthAudioSource->midiCollector));
    deviceManager.removeAudioCallback (&audioSourcePlayer);
    synthAudioSource = nullptr;
}



void DrumController::toggleSequencerPlayStop()
{
    synthAudioSource->toggleStartStop();
}

void DrumController::setFileForActivePad(const File file )
{
    synthAudioSource->setSampleForSound(lastSelectedPad - 1, file);

    String nodeName;
    nodeName << "pad" << lastSelectedPad;
    Identifier nodeIdentifier(nodeName);
    
    ValueTree padParameters = drumSettings.getOrCreateChildWithName(nodeIdentifier, nullptr);
    padParameters.setProperty("audioFilePath", file.getFullPathName(), nullptr);
    saveDefaultSettings();
    
}

void DrumController::buttonClicked(juce::Button *buttonClicked)
{
    
}


void DrumController::buttonStateChanged(juce::Button *buttonWhichStateChanged)
{


        if (buttonWhichStateChanged->getName() == "pad1") {
            lastSelectedPad = 1;
            keyboardState.noteOn(1, 1, 1.0);
        }else if (buttonWhichStateChanged->getName() == "pad2")
        {
            lastSelectedPad = 2;
            keyboardState.noteOn(1, 2, 1.0);

        }else if (buttonWhichStateChanged->getName() == "pad3")
        {
            lastSelectedPad = 3;
            keyboardState.noteOn(1, 3, 1.0);
            
        }else if (buttonWhichStateChanged->getName() == "pad4")
        {
            lastSelectedPad = 4;
            keyboardState.noteOn(1, 4, 1.0);
            
        }else if (buttonWhichStateChanged->getName() == "pad5")
        {
            lastSelectedPad = 5;
            keyboardState.noteOn(1, 5, 1.0);
            
        }else if (buttonWhichStateChanged->getName() == "pad6")
        {
            lastSelectedPad = 6;
            keyboardState.noteOn(1, 6, 1.0);
            
        }else if (buttonWhichStateChanged->getName() == "pad7")
        {
            lastSelectedPad = 7;
            keyboardState.noteOn(1, 7, 1.0);
            
        }else if (buttonWhichStateChanged->getName() == "pad8")
        {
            lastSelectedPad = 8;
            keyboardState.noteOn(1, 8, 1.0);
            
        }else if (buttonWhichStateChanged->getName() == "pad9")
        {
            lastSelectedPad = 9;
            keyboardState.noteOn(1,9, 1.0);
            
        }else if (buttonWhichStateChanged->getName() == "pad10")
        {
            lastSelectedPad = 10;
            keyboardState.noteOn(1, 10, 1.0);
            
        }else if (buttonWhichStateChanged->getName() == "pad11")
        {
            lastSelectedPad = 11;
            keyboardState.noteOn(1, 11, 1.0);
            
        }else if (buttonWhichStateChanged->getName() == "pad12")
        {
            lastSelectedPad = 12;
            keyboardState.noteOn(1, 12, 1.0);
            
        }else if (buttonWhichStateChanged->getName() == "pad13")
        {
            lastSelectedPad = 13;
            keyboardState.noteOn(1, 13, 1.0);
            
        }else if (buttonWhichStateChanged->getName() == "pad14")
        {
            lastSelectedPad = 14;
            keyboardState.noteOn(1, 14, 1.0);
            
        }else if (buttonWhichStateChanged->getName() == "pad15")
        {
            lastSelectedPad = 15;
            keyboardState.noteOn(1, 15, 1.0);
            
        }else if (buttonWhichStateChanged->getName() == "pad16")
        {
            lastSelectedPad = 16;
            keyboardState.noteOn(1, 16, 1.0);
            
        }
}

void DrumController::saveDefaultSettings()
{
    File dataFile(juce::File::getSpecialLocation(juce::File::SpecialLocationType::userApplicationDataDirectory).getParentDirectory().getChildFile("Library/padSettings.data"));
    saveSettings(dataFile);
}

void DrumController::loadDefaultSettings()
{
    File dataFile(juce::File::getSpecialLocation(juce::File::SpecialLocationType::userApplicationDataDirectory).getParentDirectory().getChildFile("Library/padSettings.data"));
    loadSettings(dataFile);
}

void DrumController::loadSettings(File &settingsFile)
{
    if (!settingsFile.exists()) {
        return;
    }
    
    FileInputStream is(settingsFile);
    drumSettings =   ValueTree::readFromStream(is);
    
    for (int i = 1; i < 17; i++) {
        
        String parameter;
        parameter << "pad" << i;
        
        ValueTree padParameters = drumSettings.getChildWithName(parameter);
        
        if (padParameters.hasProperty("audioFilePath"))
        {
            File audioFile(padParameters.getProperty("audioFilePath"));
            synthAudioSource->setSampleForSound(i - 1, audioFile);
        }
    }
        
}

void DrumController::saveSettings(File &settingsFile)
{
    settingsFile.deleteFile();
    FileOutputStream os(settingsFile);
    drumSettings.writeToStream(os);

}


