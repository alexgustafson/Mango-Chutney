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

#include "SettingsViewComponent.h"


//[MiscUserDefs] You can add your own user definitions and misc code here...
//[/MiscUserDefs]

//==============================================================================
SettingsViewComponent::SettingsViewComponent ()
{
    addAndMakeVisible (sampleEditButton = new TextButton ("sample"));
    sampleEditButton->addListener (this);

    addAndMakeVisible (synthEditButton = new TextButton ("synth"));
    synthEditButton->addListener (this);

    addAndMakeVisible (settingsPanel = new Component());
    settingsPanel->setName ("settings Panel");

    addAndMakeVisible (closeButton = new TextButton ("close"));
    closeButton->addListener (this);


    //[UserPreSize]
    //[/UserPreSize]

    setSize (600, 400);


    //[Constructor] You can add your own custom stuff here..
    settingsPanel->addAndMakeVisible(sampleSettingsPanel = new SampleSettingsComponent());
    //[/Constructor]
}

SettingsViewComponent::~SettingsViewComponent()
{
    //[Destructor_pre]. You can add your own custom destruction code here..
    //[/Destructor_pre]

    sampleEditButton = nullptr;
    synthEditButton = nullptr;
    settingsPanel = nullptr;
    closeButton = nullptr;


    //[Destructor]. You can add your own custom destruction code here..
    //[/Destructor]
}

//==============================================================================
void SettingsViewComponent::paint (Graphics& g)
{
    //[UserPrePaint] Add your own custom painting code here..
    //[/UserPrePaint]

    g.fillAll (Colours::white);

    //[UserPaint] Add your own custom painting code here..
    //[/UserPaint]
}

void SettingsViewComponent::resized()
{
    sampleEditButton->setBounds (8, 8, proportionOfWidth (0.2989f), 24);
    synthEditButton->setBounds (getWidth() - 131 - proportionOfWidth (0.2989f), 8, proportionOfWidth (0.2989f), 24);
    settingsPanel->setBounds (8, 40, proportionOfWidth (0.9553f), getHeight() - 48);
    closeButton->setBounds (getWidth() - 11 - proportionOfWidth (0.1648f), 8, proportionOfWidth (0.1648f), 24);
    //[UserResized] Add your own custom resize handling here..
    //[/UserResized]
}

void SettingsViewComponent::buttonClicked (Button* buttonThatWasClicked)
{
    //[UserbuttonClicked_Pre]
    //[/UserbuttonClicked_Pre]

    if (buttonThatWasClicked == sampleEditButton)
    {
        //[UserButtonCode_sampleEditButton] -- add your button handler code here..
        //[/UserButtonCode_sampleEditButton]
    }
    else if (buttonThatWasClicked == synthEditButton)
    {
        //[UserButtonCode_synthEditButton] -- add your button handler code here..
        //[/UserButtonCode_synthEditButton]
    }
    else if (buttonThatWasClicked == closeButton)
    {
        //[UserButtonCode_closeButton] -- add your button handler code here..
        EventDispatch::getInstance()->sendEventMessage(EventDispatch::MSG_CLOSE_SETTINGS_VIEW, nullptr);
        //[/UserButtonCode_closeButton]
    }

    //[UserbuttonClicked_Post]
    //[/UserbuttonClicked_Post]
}



//[MiscUserCode] You can add your own definitions of your custom methods or any other code here...
//[/MiscUserCode]


//==============================================================================
#if 0
/*  -- Introjucer information section --

    This is where the Introjucer stores the metadata that describe this GUI layout, so
    make changes in here at your peril!

BEGIN_JUCER_METADATA

<JUCER_COMPONENT documentType="Component" className="SettingsViewComponent" componentName=""
                 parentClasses="public Component" constructorParams="" variableInitialisers=""
                 snapPixels="8" snapActive="1" snapShown="1" overlayOpacity="0.330000013"
                 fixedSize="0" initialWidth="600" initialHeight="400">
  <BACKGROUND backgroundColour="ffffffff"/>
  <TEXTBUTTON name="sample" id="642cbf5145044ea2" memberName="sampleEditButton"
              virtualName="" explicitFocusOrder="0" pos="8 8 29.888% 24" buttonText="sample"
              connectedEdges="0" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="synth" id="31074264ebafac06" memberName="synthEditButton"
              virtualName="" explicitFocusOrder="0" pos="131Rr 8 29.888% 24"
              buttonText="synth" connectedEdges="0" needsCallback="1" radioGroupId="0"/>
  <GENERICCOMPONENT name="settings Panel" id="3a7bd44a7282c59a" memberName="settingsPanel"
                    virtualName="" explicitFocusOrder="0" pos="8 40 95.531% 48M"
                    class="Component" params=""/>
  <TEXTBUTTON name="close" id="53d871920df8b5f8" memberName="closeButton" virtualName=""
              explicitFocusOrder="0" pos="11Rr 8 16.48% 24" buttonText="close"
              connectedEdges="0" needsCallback="1" radioGroupId="0"/>
</JUCER_COMPONENT>

END_JUCER_METADATA
*/
#endif


//[EndFile] You can add extra defines here...
//[/EndFile]
