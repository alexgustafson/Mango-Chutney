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
    
    
    enum SequencerState {
      
        isStopped,
        shouldStop,
        shouldPlay,
        isPlaying,
        shouldPause,
        isPaused
        
    };
    
    Sequencer()
    {
        beatCount = 0;
        for(int i = 0; i < 16; i++)
        {
            for(int j = 0; j < 16; j++)
            {
                pattern.tracks[i].notes[j] = 0.0f;
                
            }
            pattern.tracks[i].notes[i] = 0.5f;
        }
    };
    
    void setState(SequencerState newState);
    SequencerState getState() { return state; };
    
    int beatCount = 0;
    float tempo = 120;
    
    Pattern pattern;
    
    juce_DeclareSingleton (Sequencer, false)
    
private:
    
    
    SequencerState state;
    
    void stopping();
    void starting();
    void pausing();

    
};




#endif  // __SEQUENCER_H_3100F9F2__
