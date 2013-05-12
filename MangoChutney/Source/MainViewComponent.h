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
#include "AudioEngine.h"
#include "DrumController.h"
//[/Headers]

#include "PadFieldComponent.h"


//==============================================================================
/**
                                                                    //[Comments]
    An auto-generated component, created by the Introjucer.

    Describe your class and how it works here!
                                                                    //[/Comments]
*/
class MainViewComponent  : public Component,
                           public ButtonListener,
                            public FileBrowserListener
{
public:
    //==============================================================================
    MainViewComponent ();
    ~MainViewComponent();

    //==============================================================================
    //[UserMethods]     -- You can add your own custom methods in this section.
    void buttonStateChanged (Button* buttonThatChanged);
    ScopedPointer<DrumController> drumController;
    
    void selectionChanged();
    void fileClicked (const File& file, const MouseEvent& e);
    void fileDoubleClicked (const File& file);
    void browserRootChanged (const File& newRoot);
    
    //[/UserMethods]

    void paint (Graphics& g);
    void resized();
    void buttonClicked (Button* buttonThatWasClicked);

    // Binary resources:
    static const char* pad_off_png;
    static const int pad_off_pngSize;
    static const char* pad_light_png;
    static const int pad_light_pngSize;
    static const char* background_png;
    static const int background_pngSize;
    static const char* pushbutton_off_png;
    static const int pushbutton_off_pngSize;
    static const char* pushbutton_on_png;
    static const int pushbutton_on_pngSize;
    static const char* label_03_png;
    static const int label_03_pngSize;


private:
    //[UserVariables]   -- You can add your own custom variables in this section.
    ScopedPointer<FileBrowserComponent> fileBrowser;
    //[/UserVariables]

    //==============================================================================
    ScopedPointer<ImageButton> setupButton;
    ScopedPointer<ImageButton> stepButton;
    ScopedPointer<ImageButton> playButton;
    ScopedPointer<PadField> component;
    Image cachedImage_background_png_1;
    Image cachedImage_label_03_png;


    //==============================================================================
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (MainViewComponent)
};

//[EndFile] You can add extra defines here...
//[/EndFile]

#endif   // __JUCE_HEADER_16D92098AB691ACA__
