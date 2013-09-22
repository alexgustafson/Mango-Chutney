/*
  ==============================================================================

  This is an automatically generated GUI class created by the Introjucer!

  Be careful when adding custom code to these files, as only the code within
  the "//[xyz]" and "//[/xyz]" sections will be retained when the file is loaded
  and re-saved.

  Created with Introjucer version: 3.1.0

  ------------------------------------------------------------------------------

  The Introjucer is part of the JUCE library - "Jules' Utility Class Extensions"
  Copyright 2004-13 by Raw Material Software Ltd.

  ==============================================================================
*/

#ifndef __JUCE_HEADER_15BB60FFDF7BEC8E__
#define __JUCE_HEADER_15BB60FFDF7BEC8E__

//[Headers]     -- You can add your own extra header files here --
#include "JuceHeader.h"
#include "MangoEventDispatch.h"
#include "DrumController.h"

class DrumController;
//[/Headers]



//==============================================================================
/**
                                                                    //[Comments]
    An auto-generated component, created by the Introjucer.

    Describe your class and how it works here!
                                                                    //[/Comments]
*/
class DrumPad  : public Component,
                 public EventListener,
                 public Timer
{
public:
    //==============================================================================
    DrumPad ();
    ~DrumPad();

    //==============================================================================
    //[UserMethods]     -- You can add your own custom methods in this section.
    void eventListenerCallback (const String &message, void* payload);

    void setPadNr(int id);
    int getPadNr();
    void drawHit();
    void fadePad();
    void timerCallback();
    void makeActive();
    void setHadSampleLoaded(bool sampleLoaded);
    //[/UserMethods]

    void paint (Graphics& g);
    void resized();
    void mouseMove (const MouseEvent& e);
    void mouseEnter (const MouseEvent& e);
    void mouseExit (const MouseEvent& e);
    void mouseDown (const MouseEvent& e);
    void mouseDrag (const MouseEvent& e);
    void mouseUp (const MouseEvent& e);



private:
    //[UserVariables]   -- You can add your own custom variables in this section.
    WeakReference<DrumController> drumController;
    int padNr;
    Colour normalColor;
    Colour selectedColor;
    Colour playedColor;
    Colour stepColor;
    Colour padColor;
    Colour currentColor;

    float countDown;

    bool hasSampleLoaded;

    //[/UserVariables]

    //==============================================================================


    //==============================================================================
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (DrumPad)
};

//[EndFile] You can add extra defines here...
//[/EndFile]

#endif   // __JUCE_HEADER_15BB60FFDF7BEC8E__
