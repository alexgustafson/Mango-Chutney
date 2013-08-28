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


class EventDispatch : public ActionBroadcaster, ActionListener
{
public:
    EventDispatch()
    {
    }
    ~EventDispatch()
    {
        // this ensures that no dangling pointers are left when the
        // singleton is deleted.
    }
    
    void    actionListenerCallback (const String &message);
    
};



#endif  // __MANGOEVENTDISPATCH_H_A77CA285__
