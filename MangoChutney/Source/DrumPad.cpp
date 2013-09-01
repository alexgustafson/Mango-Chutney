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

#include "DrumPad.h"


//[MiscUserDefs] You can add your own user definitions and misc code here...
//[/MiscUserDefs]

//==============================================================================
DrumPad::DrumPad ()
{

    //[UserPreSize]
    //[/UserPreSize]

    setSize (600, 400);


    //[Constructor] You can add your own custom stuff here..
    //[/Constructor]
}

DrumPad::~DrumPad()
{
    //[Destructor_pre]. You can add your own custom destruction code here..
    //[/Destructor_pre]



    //[Destructor]. You can add your own custom destruction code here..
    //[/Destructor]
}

//==============================================================================
void DrumPad::paint (Graphics& g)
{
    //[UserPrePaint] Add your own custom painting code here..
    //[/UserPrePaint]

    g.setGradientFill (ColourGradient (Colour (0xff43709c),
                                       72.0f, 56.0f,
                                       Colour (0xff24517d),
                                       240.0f, 376.0f,
                                       false));
    g.fillRoundedRectangle (static_cast<float> (proportionOfWidth (0.0251f)), static_cast<float> (proportionOfHeight (0.0190f)), static_cast<float> (proportionOfWidth (0.9553f)), static_cast<float> (proportionOfHeight (0.9598f)), 5.500f);

    g.setColour (Colour (0xffaaaaaa));
    g.drawRoundedRectangle (static_cast<float> (proportionOfWidth (0.0251f)), static_cast<float> (proportionOfHeight (0.0190f)), static_cast<float> (proportionOfWidth (0.9553f)), static_cast<float> (proportionOfHeight (0.9598f)), 5.500f, 0.900f);

    //[UserPaint] Add your own custom painting code here..
    //[/UserPaint]
}

void DrumPad::resized()
{
    //[UserResized] Add your own custom resize handling here..
    //[/UserResized]
}

void DrumPad::mouseMove (const MouseEvent& e)
{
    //[UserCode_mouseMove] -- Add your code here...
    //[/UserCode_mouseMove]
}

void DrumPad::mouseEnter (const MouseEvent& e)
{
    //[UserCode_mouseEnter] -- Add your code here...
    //[/UserCode_mouseEnter]
}

void DrumPad::mouseExit (const MouseEvent& e)
{
    //[UserCode_mouseExit] -- Add your code here...
    //[/UserCode_mouseExit]
}

void DrumPad::mouseDown (const MouseEvent& e)
{
    //[UserCode_mouseDown] -- Add your code here...

    EventDispatch::getInstance()->sendEventMessage(EventDispatch::MSG_PAD_DOWN_EVENT,
                                                   new PadDownEvent(padNr, e.x, getHeight() - e.y));

    //[/UserCode_mouseDown]
}

void DrumPad::mouseDrag (const MouseEvent& e)
{
    //[UserCode_mouseDrag] -- Add your code here...
    //[/UserCode_mouseDrag]
}

void DrumPad::mouseUp (const MouseEvent& e)
{
    //[UserCode_mouseUp] -- Add your code here...
    //[/UserCode_mouseUp]
}



//[MiscUserCode] You can add your own definitions of your custom methods or any other code here...
void DrumPad::setPadNr(int id)
{
    padNr = id;
}

int DrumPad::getPadNr()
{
    return padNr;
}
//[/MiscUserCode]


//==============================================================================
#if 0
/*  -- Introjucer information section --

    This is where the Introjucer stores the metadata that describe this GUI layout, so
    make changes in here at your peril!

BEGIN_JUCER_METADATA

<JUCER_COMPONENT documentType="Component" className="DrumPad" componentName=""
                 parentClasses="public Component" constructorParams="" variableInitialisers=""
                 snapPixels="8" snapActive="1" snapShown="1" overlayOpacity="0.330000013"
                 fixedSize="0" initialWidth="600" initialHeight="400">
  <METHODS>
    <METHOD name="mouseDown (const MouseEvent&amp; e)"/>
    <METHOD name="mouseExit (const MouseEvent&amp; e)"/>
    <METHOD name="mouseEnter (const MouseEvent&amp; e)"/>
    <METHOD name="mouseMove (const MouseEvent&amp; e)"/>
    <METHOD name="mouseDrag (const MouseEvent&amp; e)"/>
    <METHOD name="mouseUp (const MouseEvent&amp; e)"/>
  </METHODS>
  <BACKGROUND backgroundColour="6d6d6d">
    <ROUNDRECT pos="2.514% 1.903% 95.531% 95.983%" cornerSize="5.5" fill="linear: 72 56, 240 376, 0=ff43709c, 1=ff24517d"
               hasStroke="1" stroke="0.899999976, mitered, butt" strokeColour="solid: ffaaaaaa"/>
  </BACKGROUND>
</JUCER_COMPONENT>

END_JUCER_METADATA
*/
#endif


//[EndFile] You can add extra defines here...
//[/EndFile]
