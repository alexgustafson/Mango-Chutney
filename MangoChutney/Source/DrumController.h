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
#include "Sequencer.h"
#include "DrumPad.h"

class DrumPad;


class DrumController : public EventListener,
                        public  Timer
{
public:
    enum DrumMode { Selectmode, Nomode, Stepmode, Patternmode };
    
    static DrumController* getInstance();
    
    ~DrumController ();

    void setFileForActivePad(const File file );
    void toggleSequencerPlayStop(Button* button);
    void saveDefaultSettings();
    void loadDefaultSettings();
    void loadSettings(File &settingsFile);
    void saveSettings(File &settingsFile);
    void timerCallback();
    void addPad(DrumPad* drumPad);
    void setMode(DrumMode newMode, Button* button);
    void padTouched(DrumPad* drumPad, float xValue, float yValue);
    
    void eventListenerCallback (const String &message, void* payload);
    File getSampleFileForActivePad();
    
private:
    static DrumController* instance;
    
    DrumController() noexcept;
    
    AudioDeviceManager deviceManager;
    MidiKeyboardState keyboardState;
    AudioSourcePlayer audioSourcePlayer;
    ScopedPointer<SynthAudioSource> synthAudioSource;
    ValueTree drumSettings;
    ScopedPointer<Sequencer> sequencer;
    DrumPad* pads[16];
    
    int lastSelectedPad;
    int lastBeat;
    DrumMode mode;
    
    WeakReference<DrumController>::Master masterReference;
    friend class WeakReference<DrumController>;
    
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (DrumController)
    
};






#endif  // __DRUMCONTROLLER_H_18E8E14C__
