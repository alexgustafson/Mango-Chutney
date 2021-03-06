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
enum SequencerState {
    
    isStopped,
    shouldStop,
    shouldPlay,
    isPlaying,
    shouldPause,
    isPaused
    
};

class Sequencer
{
public:
    
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
        pattern = song.patterns[activePattern];
        
    };
    
    void setState(SequencerState newState);
    SequencerState getState() { return state; };
    void setTempo(int newTempo);
    void setPattern(int patternNr);
    
    int beatCount;
    int activePattern;
    float samplesPerBeat;
    float tempo;
    
    Pattern pattern;
    Song song;
    
    juce_DeclareSingleton (Sequencer, false)
    
private:
    
    
    SequencerState state;
    
    void stopping();
    void starting();
    void pausing();
    
    
};




#endif  // __SEQUENCER_H_3100F9F2__
