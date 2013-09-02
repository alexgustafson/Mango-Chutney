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
    
    EventDispatch::getInstance()->addEventListener((EventListener*)this);
    mode = DrumMode::Playmode;
}

DrumController::~DrumController()
{
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
    drumSettings.removeAllChildren(nullptr);
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

void DrumController::eventListenerCallback (const String &message, void* payload)
{
    if (message.equalsIgnoreCase(EventDispatch::MSG_PAD_DOWN_EVENT)) {
        
        if (mode == DrumMode::Playmode) {
            
            lastSelectedPad = ((PadDownEvent *)(payload))->_padNr;
            keyboardState.noteOn(1, lastSelectedPad, 1.0);
            
            PadUpdateEvent* padUpdateEvent = new PadUpdateEvent(lastSelectedPad, PadUpdateEvent::padAction::musicTap, ((PadDownEvent *)(payload))->_xValue, ((PadDownEvent *)(payload))->_yValue);
            
            EventDispatch::getInstance()->sendEventMessage(EventDispatch::MSG_UPDATE_PAD_STATE, padUpdateEvent);

        }
    }
}

void DrumController::timerCallback()
{
    

    
}
