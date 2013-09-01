/*
  ==============================================================================

    MangoEventDispatch.h
    Created: 28 Aug 2013 9:00:50pm
    Author:  Alex Gustafson

  ==============================================================================
*/

#ifndef __MANGOEVENTDISPATCH_H_A77CA285__
#define __MANGOEVENTDISPATCH_H_A77CA285__

#include "JuceHeader.h"

class EventListener
{
public:
    /** Destructor. */
    virtual ~EventListener()  {}
    
    /** Overridden by your subclass to receive the callback.
     
     @param message  the string that was specified when the event was triggered
     by a call to ActionBroadcaster::sendActionMessage()
     */
    virtual void eventListenerCallback (const String& message, void* payload) = 0;
};

class PadDownEvent
{
public:
    PadDownEvent(int padNr, float xValue, float yValue){
        _padNr = padNr;
        _xValue = xValue;
        _yValue = yValue;
    }
int _padNr;
float _xValue;
float _yValue;

};

class PadUpdateEvent
{
public:
    PadUpdateEvent(int padNr, int state){
        _padNr = padNr;
        _state = state;

    }
    int _padNr;
    int _state;

    
};



class EventDispatch
{
public:
    static EventDispatch* getInstance();

    ~EventDispatch();
    
    void eventListenerCallback (const String &message, void* payload);
    void sendEventMessage (const String& message, void* payload);
    void addEventListener (EventListener* listener);
    
    static String MSG_CLOSE_SETTINGS_VIEW;
    static String MSG_OPEN_AUDIO_FILE_SELECTOR;
    static String MSG_CLOSE_AUDIO_FILE_SELECTOR;
    static String MSG_PAD_DOWN_EVENT;
    static String MSG_UPDATE_PAD_STATE;
    
private:
    
    static EventDispatch* instance;
    EventDispatch() noexcept;
    
    SortedSet <EventListener*> eventListeners;
    
    //JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (EventDispatch)

    
};


#endif  // __MANGOEVENTDISPATCH_H_A77CA285__
