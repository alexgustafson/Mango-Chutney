/*
 ==============================================================================
 
 Sequencer.h
 Created: 30 May 2013 12:20:14am
 Author:  Alex Gustafson
 
 ==============================================================================
 */

#ifndef __SEQUENCER_H_3100F9F2__
#define __SEQUENCER_H_3100F9F2__

#include "JuceHeader.h"
#include "MangoEventDispatch.h"


class Sequencer : public EventListener
{
public:
    enum SequencerState {
        
        isStopped,
        shouldStop,
        shouldPlay,
        isPlaying,
        shouldPause,
        isPaused
        
    };
    
    struct Track
    {
        float notes[16];
    };
    
    struct Pattern
    {
        Track tracks[16];
    };
    
    struct Song
    {
        Pattern patterns[16];
    };
    
    Sequencer()
    {
        sequecerSettings = ValueTree("sequencerData");
        beatCount = 0;
        setTempo(120.0);
        for(int s = 0; s < 16; s++)
        {
            for(int i = 0; i < 16; i++)
            {
                for(int j = 0; j < 16; j++)
                {
                    song.patterns[s].tracks[i].notes[j] = 0.0f;
                    
                }
            }
        }
        activePattern = 0;
        activeTrack = 0;
        pattern = song.patterns[activePattern];
        track = pattern.tracks[activeTrack];
        loadDefaultSettings();
        EventDispatch::getInstance()->addEventListener((EventListener*)this);
        state = isStopped;
        
    };
    
    ~Sequencer()
    {
        saveDefaultSettings();
    }
    
    
    void setState(SequencerState newState);
    SequencerState getState() { return state; };
    void setTempo(int newTempo);
    void setPattern(int patternNr);
    void setTrack(int trackNr);
    int getActivePatternNr();
    
    void saveDefaultSettings();
    void loadDefaultSettings();
    void loadSettings(File &settingsFile);
    void saveSettings(File &settingsFile);
    
    void eventListenerCallback (const String &message, void* payload);
    
    int beatCount;
    int activePattern;
    int activeTrack;
    float samplesPerBeat;
    float tempo;
    
    Pattern pattern;
    Track track;
    Song song;
    

    
    juce_DeclareSingleton (Sequencer, false)
    
private:
    
    
    SequencerState state;
    
    void stopping();
    void starting();
    void pausing();
    
    ValueTree sequecerSettings;
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (Sequencer)
    
};




#endif  // __SEQUENCER_H_3100F9F2__
