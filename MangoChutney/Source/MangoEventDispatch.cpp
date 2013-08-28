/*
  ==============================================================================

    MangoEventDispatch.cpp
    Created: 28 Aug 2013 9:00:50pm
    Author:  Alex Gustafson

  ==============================================================================
*/

#include "MangoEventDispatch.h"

void EventDispatch::actionListenerCallback (const String &message)
{
    sendActionMessage(message);

}