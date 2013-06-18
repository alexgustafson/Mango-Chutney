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