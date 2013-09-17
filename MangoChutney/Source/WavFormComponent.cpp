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

//[Headers] You can add your own extra header files here...
//[/Headers]

#include "WavFormComponent.h"


//[MiscUserDefs] You can add your own user definitions and misc code here...
//[/MiscUserDefs]

//==============================================================================
WaveFormComponent::WaveFormComponent (AudioFormatManager& formatManager)
    : thumbnailCache (5),
      thumbnail (512, formatManager, thumbnailCache)
{

    //[UserPreSize]
    //[/UserPreSize]

    setSize (600, 400);


    //[Constructor] You can add your own custom stuff here..
    //[/Constructor]
}

WaveFormComponent::~WaveFormComponent()
{
    //[Destructor_pre]. You can add your own custom destruction code here..
    //[/Destructor_pre]



    //[Destructor]. You can add your own custom destruction code here..
    //[/Destructor]
}

//==============================================================================
void WaveFormComponent::paint (Graphics& g)
{
    //[UserPrePaint] Add your own custom painting code here..
    //[/UserPrePaint]

    g.fillAll (Colours::grey);

    //[UserPaint] Add your own custom painting code here..
    if (thumbnail.getTotalLength() > 0)
    {
        g.setColour(Colours::orange);
        thumbnail.drawChannels (g, getLocalBounds().reduced (2),
                                startTime, endTime, 1.0f);
    }
    else
    {
        g.setFont (14.0f);
        g.drawFittedText ("(No audio file selected)", getLocalBounds(), Justification::centred, 2);
    }
    //[/UserPaint]
}

void WaveFormComponent::resized()
{
    //[UserResized] Add your own custom resize handling here..
    //[/UserResized]
}

void WaveFormComponent::mouseDrag (const MouseEvent& e)
{
    //[UserCode_mouseDrag] -- Add your code here...

    double window = endTime - startTime;
    double diff = (double)(e.x - e.getMouseDownX())/10000.0;
    startTime = startTime - diff;
    endTime = startTime + window;
    if (startTime <= 0) startTime = 0;
    if (endTime >= thumbnail.getTotalLength()) endTime = thumbnail.getTotalLength();
    repaint();

    //[/UserCode_mouseDrag]
}

void WaveFormComponent::mouseWheelMove (const MouseEvent& e, const MouseWheelDetails& wheel)
{
    //[UserCode_mouseWheelMove] -- Add your code here...
    startTime = startTime + wheel.deltaY;
    endTime = endTime - wheel.deltaY;
    if (startTime < 0) {
        startTime = 0;
    }
    if (endTime > thumbnail.getTotalLength())
    {
        endTime = thumbnail.getTotalLength();
    }
    repaint();
    //[/UserCode_mouseWheelMove]
}



//[MiscUserCode] You can add your own definitions of your custom methods or any other code here...
void WaveFormComponent::setFile (const File& file)
{
    if (! file.isDirectory())
    {
        thumbnail.setSource (new FileInputSource (file));
        startTime = 0;
        endTime = thumbnail.getTotalLength();
        startTimer (1000 / 40);
    }else {
        thumbnail.clear();
    }
}

void WaveFormComponent::timerCallback()
{

}

void WaveFormComponent::changeListenerCallback (ChangeBroadcaster*)
{
    // this method is called by the thumbnail when it has changed, so we should repaint it..
    repaint();
}

void WaveFormComponent::mouseMagnify(const juce::MouseEvent &event, float scaleFactor)
{
    if (thumbnail.getTotalLength() == 0) return;
    double window = endTime - startTime;
    double center = startTime + (window / 2.0);
    
    if (scaleFactor < 1.0) {
        if (startTime <= 0 && endTime >= thumbnail.getTotalLength()) {
            return;
        }
        window = window * scaleFactor;
        startTime = center - (window/2);
        endTime = startTime + window;
        
    }
    
    if (startTime <= 0) startTime = 0;
    if (endTime >= thumbnail.getTotalLength()) endTime = thumbnail.getTotalLength();
    repaint();
}


//[/MiscUserCode]


//==============================================================================
#if 0
/*  -- Introjucer information section --

    This is where the Introjucer stores the metadata that describe this GUI layout, so
    make changes in here at your peril!

BEGIN_JUCER_METADATA

<JUCER_COMPONENT documentType="Component" className="WaveFormComponent" componentName=""
                 parentClasses="public Component, public ChangeListener, public Timer"
                 constructorParams="AudioFormatManager&amp; formatManager" variableInitialisers="thumbnailCache (5),&#10;thumbnail (512, formatManager, thumbnailCache)"
                 snapPixels="8" snapActive="1" snapShown="1" overlayOpacity="0.330"
                 fixedSize="0" initialWidth="600" initialHeight="400">
  <METHODS>
    <METHOD name="mouseWheelMove (const MouseEvent&amp; e, const MouseWheelDetails&amp; wheel)"/>
    <METHOD name="mouseDrag (const MouseEvent&amp; e)"/>
  </METHODS>
  <BACKGROUND backgroundColour="ff808080"/>
</JUCER_COMPONENT>

END_JUCER_METADATA
*/
#endif


//[EndFile] You can add extra defines here...
//[/EndFile]
