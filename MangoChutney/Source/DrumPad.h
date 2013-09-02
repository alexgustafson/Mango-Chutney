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
    void timerCallback();
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
    int padNr;
    Colour normalColor = Colour((0xff43709c));
    Colour selectedColor = Colour((0xfff0f8ff));
    Colour playedColor = Colour((0xfff0f8ff));
    Colour stepColor = Colour((0xfff0f8ff));
    Colour padColor = Colour((0xff43709c));

    class DrumPadAnimator : public Thread
    {
    public:
        DrumPadAnimator(const String &threadName, DrumPad& p) : Thread(threadName), parent(p)
        {

        };

        void run()
        {
            while(countDown > 0.0f){
                countDown = countDown - 0.01f;
                parent.padColor = parent.normalColor.interpolatedWith(parent.selectedColor, 1.0 - countDown);
                parent.repaint();
                wait(100);
            }

            countDown = 1.0f;
            parent.padColor = parent.normalColor;

        };

        float countDown = 1.0f;
    private:
        DrumPad& parent;

    };

    float countDown;

    //[/UserVariables]

    //==============================================================================


    //==============================================================================
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (DrumPad)
};

//[EndFile] You can add extra defines here...
//[/EndFile]

#endif   // __JUCE_HEADER_15BB60FFDF7BEC8E__
