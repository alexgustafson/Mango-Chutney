/*
  ==============================================================================

    MangoEventDispatch.cpp
    Created: 28 Aug 2013 9:00:50pm
    Author:  Alex Gustafson

  ==============================================================================
*/

#include "MangoEventDispatch.h"

EventDispatch::EventDispatch() noexcept{


    
}

String EventDispatch::MSG_CLOSE_SETTINGS_VIEW = "closes settings view";
String EventDispatch::MSG_OPEN_AUDIO_FILE_SELECTOR = "open audio file selector";
String EventDispatch::MSG_CLOSE_AUDIO_FILE_SELECTOR = "close audio file selector view";
String EventDispatch::MSG_PAD_DOWN_EVENT = "pad down event detected";
String EventDispatch::MSG_UPDATE_PAD_STATE = "update pad state";

EventDispatch* EventDispatch::instance = nullptr;

EventDispatch* EventDispatch::getInstance()
{
    if (instance == nullptr)
    {
        instance = new EventDispatch();
    }
    
    return instance;
}

EventDispatch::~EventDispatch()
{
    instance = nullptr;
}

void EventDispatch::addEventListener (EventListener* listener)
{
    
    if (listener != nullptr)
        eventListeners.add (listener);
}

void EventDispatch::eventListenerCallback (const String &message, void* payload)
{
    sendEventMessage(message, payload);
}

void EventDispatch::sendEventMessage (const String& message, void* payload)
{
    
    for (int i = eventListeners.size(); --i >= 0;)
    {
        (eventListeners.getUnchecked(i))->eventListenerCallback(message, payload);
    }
}