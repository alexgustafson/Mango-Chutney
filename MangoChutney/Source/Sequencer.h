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
    Sequencer() { state = isStopped; };
    
    enum SequencerState {
      
        isStopped,
        shouldStop,
        shouldPlay,
        isPlaying,
        shouldPause,
        isPaused
        
    };
    
    void setState(SequencerState newState);
    SequencerState getState() { return state; };
    
private:
    SequencerState state;
    
    void stopping();
    void starting();
    void pausing();
    
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (Sequencer)
};




#endif  // __SEQUENCER_H_3100F9F2__
