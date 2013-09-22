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
    
    audioSourcePlayer.setSource (synthAudioSource);
    deviceManager.addAudioCallback (&audioSourcePlayer);
    deviceManager.addMidiInputCallback (String::empty, &(synthAudioSource->midiCollector));
    
    lastSelectedPad = 1;
    lastBeat = 16;
    sequencer = Sequencer::getInstance();
    EventDispatch::getInstance()->addEventListener((EventListener*)this);
    mode = Nomode;
    DrumController::instance = this;
    loadDefaultSettings();
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
    if (sequencer->getState() == Sequencer::isStopped) {
        sequencer->setState(Sequencer::shouldPlay);
        button->setToggleState(true, false);
    }else
    {
        sequencer->setState(Sequencer::shouldStop);
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

    
    juce::File theDocumentDirectory = File::getSpecialLocation(File::userDocumentsDirectory);
    juce::File dataFile;
    #if JUCE_IOS
     dataFile = File::getSpecialLocation(File::currentApplicationFile).getSiblingFile("Documents").getChildFile("Library/padSettings.data");
    #endif
    
    #if JUCE_ANDROID
     dataFile = theDocumentDirectory.getChildFile("/storage/sdcard0").getChildFile("padSettings.data");
    #endif
                  
    #if JUCE_OSX
    dataFile = juce::File::getSpecialLocation(juce::File::SpecialLocationType::userApplicationDataDirectory).getParentDirectory().getChildFile("Library/padSettings.data");
    #endif
    
    
    saveSettings(dataFile);
}

void DrumController::loadDefaultSettings()
{

    
    juce::File theDocumentDirectory = File::getSpecialLocation(File::userDocumentsDirectory);
    File dataFile;
    #if JUCE_IOS
     dataFile(File::getSpecialLocation(File::currentApplicationFile).getSiblingFile("Documents").getChildFile("Library/padSettings.data"));
    #endif
    
    #if JUCE_ANDROID
     dataFile = theDocumentDirectory.getChildFile("/storage/sdcard0").getChildFile("padSettings.data");
    #endif
                  
    #if JUCE_OSX
                   dataFile(juce::File::getSpecialLocation(juce::File::SpecialLocationType::userApplicationDataDirectory).getParentDirectory().getChildFile("Library/padSettings.data"));
    #endif
    
    
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
        for (int i = 0; i < 16; i++) {
            if (sequencer->activePattern == i) {
                pads[i]->makeActive();
            }else{
                pads[i]->fadePad();
            }
        }
        stopTimer();
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
                sequencer->pattern.tracks[lastSelectedPad].notes[drumPad->getPadNr()] = yValue;
            }
    }else if(mode == Patternmode)
    {
        pads[sequencer->getActivePatternNr()]->fadePad();
        sequencer->setPattern(drumPad->getPadNr());
        pads[sequencer->getActivePatternNr()]->makeActive();
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
        
        if (sequencer->beatCount == lastBeat)
        {
            return;
        }
        
        lastBeat = sequencer->beatCount;
        
        if (sequencer->getState() != Sequencer::isPlaying)
        {
            stopTimer();
            return;
        }
        
        for (int i = 0; i < 16; i++) {
            if (sequencer->pattern.tracks[i].notes[sequencer->beatCount] > 0.0) {
                pads[i]->drawHit();
            }else{
                //pads[i]->fadePad();
            }
        }
    }
}

File DrumController::getSampleFileForActivePad()
{
    return synthAudioSource->getSampleFileForSound(lastSelectedPad);
}



