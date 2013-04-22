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

#ifndef __JUCE_HEADER_16D92098AB691ACA__
#define __JUCE_HEADER_16D92098AB691ACA__

//[Headers]     -- You can add your own extra header files here --
#include "JuceHeader.h"
//[/Headers]



//==============================================================================
/**
                                                                    //[Comments]
    An auto-generated component, created by the Introjucer.

    Describe your class and how it works here!
                                                                    //[/Comments]
*/
class MainViewComponent  : public Component,
                           public ComboBoxListener,
                           public ButtonListener
{
public:
    //==============================================================================
    MainViewComponent ();
    ~MainViewComponent();

    //==============================================================================
    //[UserMethods]     -- You can add your own custom methods in this section.
    //[/UserMethods]

    void paint (Graphics& g);
    void resized();
    void comboBoxChanged (ComboBox* comboBoxThatHasChanged);
    void buttonClicked (Button* buttonThatWasClicked);

    // Binary resources:
    static const char* pad2_png;
    static const int pad2_pngSize;
    static const char* pad_png;
    static const int pad_pngSize;


private:
    //[UserVariables]   -- You can add your own custom variables in this section.
    //[/UserVariables]

    //==============================================================================
    ScopedPointer<ComboBox> comboBox;
    ScopedPointer<ImageButton> imageButton;
    ScopedPointer<ImageButton> imageButton2;
    ScopedPointer<ImageButton> imageButton3;
    ScopedPointer<ImageButton> imageButton4;


    //==============================================================================
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (MainViewComponent)
};

//[EndFile] You can add extra defines here...
//[/EndFile]

#endif   // __JUCE_HEADER_16D92098AB691ACA__
