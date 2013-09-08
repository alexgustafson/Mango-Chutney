/*
  ==============================================================================

    Sequencer.cpp
    Created: 30 May 2013 12:20:14am
    Author:  Alex Gustafson

  ==============================================================================
*/

#include "Sequencer.h"


juce_ImplementSingleton (Sequencer)

void Sequencer::setState(SequencerState newState)
{
    
    switch (newState) {
        case shouldStop:
            stopping();
            break;
            
        case shouldPause:
            pausing();
            break;
            
        case shouldPlay:
            starting();
            break;
            
        default:
            break;
    }
    
    
}

void Sequencer::stopping()
{
    state = isStopped;
    beatCount = 0;
}

void Sequencer::starting()
{
    state = isPlaying;
}

void Sequencer::pausing()
{
    state = isPaused;
}

void Sequencer::setTempo(int newTempo)
{
    tempo = newTempo;
    samplesPerBeat =  (1.0 / (tempo * 4)) * 60.0 * 44100.0;

}

void Sequencer::setPattern(int patternNr)
{
    song.patterns[activePattern] = pattern;
    pattern = song.patterns[patternNr];
    activePattern = patternNr;
}

void Sequencer::setTrack(int trackNr)
{
    song.patterns[activePattern].tracks[activeTrack] = track;
    track = song.patterns[activePattern].tracks[trackNr];
    activeTrack = trackNr;
    
}

void Sequencer::saveDefaultSettings()
{

    File dataFile(juce::File::getSpecialLocation(juce::File::SpecialLocationType::userApplicationDataDirectory).getParentDirectory().getChildFile("Library/seqSettings.data"));
    saveSettings(dataFile);
}

void Sequencer::loadDefaultSettings()
{
    File dataFile(juce::File::getSpecialLocation(juce::File::SpecialLocationType::userApplicationDataDirectory).getParentDirectory().getChildFile("Library/seqSettings.data"));
    loadSettings(dataFile);
}

void Sequencer::loadSettings(File &settingsFile)
{
    if (!settingsFile.exists()) {
        return;
    }
    FileInputStream is(settingsFile);
    sequecerSettings =   ValueTree::readFromStream(is);
        
    String parameter;
    parameter << "song";
    
    ValueTree songData = sequecerSettings.getChildWithName(parameter);
    
    setTempo(songData.getProperty("tempo"));
    activePattern = songData.getProperty("activePattern");
    
    for (int i = 0; i < songData.getNumChildren(); i++) {
        
        ValueTree patternData = songData.getChild(i);
        
        int patternNumber = patternData.getProperty("patternNumber");
        
        for (int j = 0; j < patternData.getNumChildren(); j++)
        {
            ValueTree trackData = patternData.getChild(j);
            int trackNumber = trackData.getProperty("trackNumber");
            
            for(int k = 0; k < trackData.getNumChildren();k++)
            {
                ValueTree noteData = trackData.getChild(k);
                int stepNumber = noteData.getProperty("stepNumber");
                song.patterns[patternNumber].tracks[trackNumber].notes[stepNumber] = noteData.getProperty("velocity");
                
            }
        }
    }
    pattern = song.patterns[activePattern];
}

void Sequencer::saveSettings(File &settingsFile)
{
    setTrack(0);
    setPattern(0);
    
    settingsFile.deleteFile();
    
    String parameter;
    parameter << "song";
    
    ValueTree songData = sequecerSettings.getOrCreateChildWithName(parameter, nullptr);
    songData.removeAllChildren(nullptr);
    songData.setProperty("tempo", tempo, nullptr);
    songData.setProperty("activePattern", activePattern, nullptr);
    
    for(int s = 0; s < 16; s++)
    {
        for(int i = 0; i < 16; i++)
        {
            for(int j = 0; j < 16; j++)
            {
                if (song.patterns[s].tracks[i].notes[j] > 0.0f) {
                    
                    String patternId, trackID, stepID;
                    patternId << "pattern_" << s;
                    trackID << "track_" << i;
                    stepID << "step_" << j;
                    ValueTree patternData = songData.getOrCreateChildWithName(patternId, nullptr);
                    ValueTree trackData = patternData.getOrCreateChildWithName(trackID, nullptr);
                    ValueTree stepData = trackData.getOrCreateChildWithName(stepID, nullptr);
                    
                    patternData.setProperty("patternNumber", s, nullptr);
                    trackData.setProperty("trackNumber", i, nullptr);
                    stepData.setProperty("stepNumber",j, nullptr);
                    stepData.setProperty("velocity",song.patterns[s].tracks[i].notes[j], nullptr);
                    
                }
                
            }
        }
    }
    
    FileOutputStream os(settingsFile);
    sequecerSettings.writeToStream(os);
    
}

void Sequencer::eventListenerCallback (const String &message, void* payload)
{
    if( message.equalsIgnoreCase(EventDispatch::MSG_UPDATE_GUI_MODE) )
    {
        if(((ModeUpdateEvent*)payload)->_mode == ModeUpdateEvent::mode::playmode)
        {
            if (state == SequencerState::isPlaying) {
                setState(SequencerState::shouldStop);
            }else
            {
                setState(SequencerState::shouldPlay);
            }
        }
    }
}