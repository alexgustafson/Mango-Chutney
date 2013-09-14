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

#ifndef __JUCE_HEADER_D02DDEFF55EFA3FB__
#define __JUCE_HEADER_D02DDEFF55EFA3FB__

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
class WaveFormComponent  : public Component,
                           public ChangeListener,
                           public Timer
{
public:
    //==============================================================================
    WaveFormComponent (AudioFormatManager& formatManager);
    ~WaveFormComponent();

    //==============================================================================
    //[UserMethods]     -- You can add your own custom methods in this section.
    void setFile (const File& file);
    void timerCallback();
    void changeListenerCallback (ChangeBroadcaster*);
    //[/UserMethods]

    void paint (Graphics& g);
    void resized();
    void mouseWheelMove (const MouseEvent& e, const MouseWheelDetails& wheel);



private:
    //[UserVariables]   -- You can add your own custom variables in this section.
    AudioThumbnailCache thumbnailCache;
    AudioThumbnail thumbnail;
    double startTime, endTime;
    

    DrawableRectangle currentPositionMarker;

    float timeToX (const double time) const
    {
        return getWidth() * (float) ((time - startTime) / (endTime - startTime));
    }

    double xToTime (const float x) const
    {
        return (x / getWidth()) * (endTime - startTime) + startTime;
    }
    //[/UserVariables]

    //==============================================================================


    //==============================================================================
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (WaveFormComponent)
};

//[EndFile] You can add extra defines here...
//[/EndFile]

#endif   // __JUCE_HEADER_D02DDEFF55EFA3FB__
