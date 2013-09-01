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

#include "DrumPad.h"


//==============================================================================
/**
                                                                    //[Comments]
 An auto-generated component, created by the Introjucer.

 Describe your class and how it works here!
                                                                    //[/Comments]
*/
class PadField  : public Component
{
public:
    //==============================================================================
    PadField ();
    ~PadField();

    //==============================================================================
    //[UserMethods]     -- You can add your own custom methods in this section.
    void buttonStateChanged(juce::Button *button);
    //[/UserMethods]

    void paint (Graphics& g);
    void resized();

    // Binary resources:
    static const char* pad_notlit_png;
    static const int pad_notlit_pngSize;
    static const char* pad_lit_png;
    static const int pad_lit_pngSize;


private:
    //[UserVariables]   -- You can add your own custom variables in this section.

    OwnedArray<DrumPad> pads;

    //[/UserVariables]

    //==============================================================================
    ScopedPointer<DrumPad> pad1;
    ScopedPointer<DrumPad> pad2;
    ScopedPointer<DrumPad> pad3;
    ScopedPointer<DrumPad> pad4;
    ScopedPointer<DrumPad> pad5;
    ScopedPointer<DrumPad> pad6;
    ScopedPointer<DrumPad> pad7;
    ScopedPointer<DrumPad> pad8;
    ScopedPointer<DrumPad> pad9;
    ScopedPointer<DrumPad> pad10;
    ScopedPointer<DrumPad> pad11;
    ScopedPointer<DrumPad> pad12;
    ScopedPointer<DrumPad> pad13;
    ScopedPointer<DrumPad> pad14;
    ScopedPointer<DrumPad> pad15;
    ScopedPointer<DrumPad> pad16;


    //==============================================================================
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (PadField)
};

//[EndFile] You can add extra defines here...
//[/EndFile]

#endif   // __JUCE_HEADER_7164303A7BDA4ED1__
