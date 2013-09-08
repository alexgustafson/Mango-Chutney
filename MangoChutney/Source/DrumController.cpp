/*
  ==============================================================================

    DrumController.cpp
    Created: 28 Apr 2013 2:34:19pm
    Author:  Alexander Gustafson

  ==============================================================================
*/

#include "DrumController.h"

DrumController* DrumController::instance = nullptr;

DrumController* DrumController::getInstance()
{
    if (instance == nullptr)
    {
        instance = new DrumController();
    }
    
    return instance;
}

DrumController::DrumController() noexcept
{
    deviceManager.initialise (2, 2, 0, true, String::empty, 0);
    synthAudioSource = new SynthAudioSource (keyboardState);
    drumSettings = ValueTree("drumSettings");
    loadDefaultSettings();
    audioSourcePlayer.setSource (synthAudioSource);
    deviceManager.addAudioCallback (&audioSourcePlayer);
    deviceManager.addMidiInputCallback (String::empty, &(synthAudioSource->midiCollector));
    
    lastSelectedPad = 1;
    sequencer = Sequencer::getInstance();
    EventDispatch::getInstance()->addEventListener((EventListener*)this);
    mode = Nomode;
    DrumController::instance = this;
}

DrumController::~DrumController()
{

    audioSourcePlayer.setSource (0);
    deviceManager.removeMidiInputCallback (String::empty, &(synthAudioSource->midiCollector));
    deviceManager.removeAudioCallback (&audioSourcePlayer);
    synthAudioSource = nullptr;
    sequencer = nullptr;
    masterReference.clear();
}

void DrumController::addPad(DrumPad* drumPad)
{
    pads[drumPad->getPadNr()] = drumPad;

}


void DrumController::toggleSequencerPlayStop(Button* button)
{
    if (sequencer->getState() == isStopped) {
        sequencer->setState(shouldPlay);
        button->setToggleState(true, false);
    }else
    {
        sequencer->setState(shouldStop);
        button->setToggleState(false, false);
    }

}

void DrumController::setFileForActivePad(const File file )
{
    synthAudioSource->setSampleForSound(lastSelectedPad, file);

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
    DBG(drumSettings.toXmlString());
    for (int i = 0; i < 16; i++) {
        
        String parameter;
        parameter << "pad" << i;
        
        ValueTree padParameters = drumSettings.getChildWithName(parameter);
        
        if (padParameters.hasProperty("audioFilePath"))
        {
            File audioFile(padParameters.getProperty("audioFilePath"));
            synthAudioSource->setSampleForSound(i, audioFile);
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

}

void DrumController::setMode(DrumMode newMode, Button* button)
{
    if (newMode == mode) {
        newMode = Nomode;
        button->setToggleState(false, false);
    }
    mode = newMode;
    
    if (mode == Nomode) {

        for (int i = 0; i < 16; i++) {
            pads[i]->fadePad();
        }
        startTimer(60);

    }else if (mode == Selectmode)
    {
        for (int i = 0; i < 16; i++) {
            if(i == lastSelectedPad)
            {
                pads[i]->makeActive();
            }else
            {
                pads[i]->fadePad();
            }
        }
    }else if (mode == Patternmode)
    {
        
    }else if (mode == Stepmode)
    {
        for (int i = 0; i < 16; i++) {
            
            if (sequencer->pattern.tracks[lastSelectedPad].notes[i] > 0.0)
            {
                pads[i]->makeActive();
            }else
            {
                pads[i]->fadePad();
            }
            
        }
        startTimer(60);
    }
}


void DrumController::padTouched(DrumPad* drumPad, float xValue, float yValue)
{
    if (mode == Nomode) {
        
        keyboardState.noteOn(1, drumPad->getPadNr(), yValue);
        drumPad->drawHit();
        
    }else if(mode == Selectmode)
    {
        keyboardState.noteOn(1, drumPad->getPadNr(), yValue);
        pads[lastSelectedPad]->fadePad();
        drumPad->makeActive();
        lastSelectedPad = drumPad->getPadNr();
        
    }else if(mode == Stepmode)
    {
            if(sequencer->pattern.tracks[lastSelectedPad].notes[drumPad->getPadNr()] > 0.0)
            {
                sequencer->pattern.tracks[lastSelectedPad].notes[drumPad->getPadNr()] = 0.0;
            }else{
                sequencer->pattern.tracks[lastSelectedPad].notes[drumPad->getPadNr()] = xValue;
            }
    }
}


void DrumController::timerCallback()
{
    if (mode == Stepmode) {
        for (int i = 0; i < 16; i++) {
            
            if (sequencer->pattern.tracks[lastSelectedPad].notes[i] > 0.0) {
                pads[i]->makeActive();
            }else{
                pads[i]->fadePad();
            }
        }
        pads[sequencer->beatCount]->drawHit();
    }else if (mode == Nomode) {
        
        if (sequencer->getState() != isPlaying)
        {
            stopTimer();
            return;
        }
        
        for (int i = 0; i < 16; i++) {
            if (sequencer->pattern.tracks[i].notes[sequencer->beatCount] > 0.0) {
                pads[i]->makeActive();
            }else{
                pads[i]->fadePad();
            }
        }
        
    }
}




