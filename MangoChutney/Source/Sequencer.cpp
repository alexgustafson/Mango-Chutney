/*
  ==============================================================================

    Sequencer.cpp
    Created: 30 May 2013 12:20:14am
    Author:  Alex Gustafson

  ==============================================================================
*/

#include "Sequencer.h"


juce_ImplementSingleton (Sequencer)

void Sequencer::setState(Sequencer::SequencerState newState)
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
}

void Sequencer::starting()
{
    state = isPlaying;
}

void Sequencer::pausing()
{
    state = isPaused;
}