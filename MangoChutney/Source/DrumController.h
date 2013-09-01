/*
  ==============================================================================

    DrumController.h
    Created: 28 Apr 2013 2:34:19pm
    Author:  Alexander Gustafson

  ==============================================================================
*/

#ifndef __DRUMCONTROLLER_H_18E8E14C__
#define __DRUMCONTROLLER_H_18E8E14C__

#include "JuceHeader.h"
#include "AudioEngine.h"
#include "MangoEventDispatch.h"

enum DrumMode { Selectmode, Playmode, Stepmode, Patternmode };

class DrumController : public EventListener,
                        public  Timer
{
public:
    
    DrumController ();
    ~DrumController ();

    void setFileForActivePad(const File file );
    void toggleSequencerPlayStop();
    void saveDefaultSettings();
    void loadDefaultSettings();
    void loadSettings(File &settingsFile);
    void saveSettings(File &settingsFile);
    void timerCallback();
    
    void eventListenerCallback (const String &message, void* payload);
    
private:
    AudioDeviceManager deviceManager;
    MidiKeyboardState keyboardState;
    AudioSourcePlayer audioSourcePlayer;
    ScopedPointer<SynthAudioSource> synthAudioSource;
    ValueTree drumSettings;
    
    int lastSelectedPad;
    DrumMode mode;
    
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (DrumController)
    
};


#endif  // __DRUMCONTROLLER_H_18E8E14C__
