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

#ifndef __JUCE_HEADER_7164303A7BDA4ED1__
#define __JUCE_HEADER_7164303A7BDA4ED1__

//[Headers]     -- You can add your own extra header files here --
#include "JuceHeader.h"
#include "DrumController.h"
//[/Headers]



//==============================================================================
/**
                                                                    //[Comments]
    An auto-generated component, created by the Introjucer.

    Describe your class and how it works here!
                                                                    //[/Comments]
*/
class PadField  : public Component,
                  public ButtonListener
{
public:
    //==============================================================================
    PadField ();
    ~PadField();

    //==============================================================================
    //[UserMethods]     -- You can add your own custom methods in this section.
    void addDrumController(DrumController* drumcontroller);
    void buttonStateChanged(juce::Button *button);
    //[/UserMethods]

    void paint (Graphics& g);
    void resized();
    void buttonClicked (Button* buttonThatWasClicked);

    // Binary resources:
    static const char* pad_off_png;
    static const int pad_off_pngSize;
    static const char* pad_light_png;
    static const int pad_light_pngSize;


private:
    //[UserVariables]   -- You can add your own custom variables in this section.
    DrumController* mainDrumController;
    //[/UserVariables]

    //==============================================================================
    ScopedPointer<ImageButton> pad1;
    ScopedPointer<ImageButton> pad2;
    ScopedPointer<ImageButton> pad3;
    ScopedPointer<ImageButton> pad4;
    ScopedPointer<ImageButton> pad5;
    ScopedPointer<ImageButton> pad6;
    ScopedPointer<ImageButton> pad7;
    ScopedPointer<ImageButton> pad8;
    ScopedPointer<ImageButton> pad9;
    ScopedPointer<ImageButton> pad10;
    ScopedPointer<ImageButton> pad11;
    ScopedPointer<ImageButton> pad12;
    ScopedPointer<ImageButton> pad13;
    ScopedPointer<ImageButton> pad14;
    ScopedPointer<ImageButton> pad15;
    ScopedPointer<ImageButton> pad16;


    //==============================================================================
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (PadField)
};

//[EndFile] You can add extra defines here...
//[/EndFile]

#endif   // __JUCE_HEADER_7164303A7BDA4ED1__
