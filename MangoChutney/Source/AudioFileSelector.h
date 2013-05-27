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

#ifndef __JUCE_HEADER_9364B6CD8FE12072__
#define __JUCE_HEADER_9364B6CD8FE12072__

//[Headers]     -- You can add your own extra header files here --
#include "JuceHeader.h"
#include "AudioFileSelectorListener.h"
//[/Headers]



//==============================================================================
/**
                                                                    //[Comments]
    An auto-generated component, created by the Introjucer.

    Describe your class and how it works here!
                                                                    //[/Comments]
*/
class AudioFileSelector  : public Component,
                           public FileBrowserListener,
                           public ButtonListener
{
public:
    //==============================================================================
    AudioFileSelector (int flags_, const File& initialFileOrDirectory, const FileFilter* fileFilter_, FilePreviewComponent* previewComp_);
    ~AudioFileSelector();

    //==============================================================================
    //[UserMethods]     -- You can add your own custom methods in this section.

    void selectionChanged() ;
    void fileClicked (const File& file, const MouseEvent& e) ;
    void fileDoubleClicked (const File& file) ;
    void browserRootChanged (const File& newRoot) ;

    void setListener (AudioFileSelectorListener* listener);

    //[/UserMethods]

    void paint (Graphics& g);
    void resized();
    void buttonClicked (Button* buttonThatWasClicked);



private:
    //[UserVariables]   -- You can add your own custom variables in this section.
    AudioFileSelectorListener *listener;
    File selectedFile;
    bool fileIsSelected;
    //[/UserVariables]

    //==============================================================================
    ScopedPointer<TextButton> selectButton;
    ScopedPointer<TextButton> cancelButton;
    ScopedPointer<FileBrowserComponent> fileBrowser;


    //==============================================================================
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (AudioFileSelector)
};

//[EndFile] You can add extra defines here...

//[/EndFile]

#endif   // __JUCE_HEADER_9364B6CD8FE12072__
