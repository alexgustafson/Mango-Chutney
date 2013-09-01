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

#include "SampleSettingsComponent.h"


//[MiscUserDefs] You can add your own user definitions and misc code here...
//[/MiscUserDefs]

//==============================================================================
SampleSettingsComponent::SampleSettingsComponent ()
{
    addAndMakeVisible (textEditor = new TextEditor ("new text editor"));
    textEditor->setMultiLine (false);
    textEditor->setReturnKeyStartsNewLine (false);
    textEditor->setReadOnly (false);
    textEditor->setScrollbarsShown (true);
    textEditor->setCaretVisible (true);
    textEditor->setPopupMenuEnabled (true);
    textEditor->setText (String::empty);

    addAndMakeVisible (loadSampleButton = new TextButton ("load sample Button"));
    loadSampleButton->setButtonText ("load sample");
    loadSampleButton->addListener (this);

    addAndMakeVisible (waveComponent = new Component());
    waveComponent->setName ("waveform viewer");

    addAndMakeVisible (envelopeComponent = new Component());
    envelopeComponent->setName ("envelope viewer");

    addAndMakeVisible (attackSlider = new Slider ("Attack Slider"));
    attackSlider->setRange (0, 10, 0);
    attackSlider->setSliderStyle (Slider::Rotary);
    attackSlider->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    attackSlider->addListener (this);

    addAndMakeVisible (decaySlider = new Slider ("decay slider"));
    decaySlider->setRange (0, 10, 0);
    decaySlider->setSliderStyle (Slider::Rotary);
    decaySlider->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    decaySlider->addListener (this);

    addAndMakeVisible (sustainSlider = new Slider ("sustain slider"));
    sustainSlider->setRange (0, 10, 0);
    sustainSlider->setSliderStyle (Slider::Rotary);
    sustainSlider->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    sustainSlider->addListener (this);

    addAndMakeVisible (releaseSlider = new Slider ("release slider"));
    releaseSlider->setRange (0, 10, 0);
    releaseSlider->setSliderStyle (Slider::Rotary);
    releaseSlider->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    releaseSlider->addListener (this);

    addAndMakeVisible (label = new Label ("new label",
                                          "attack"));
    label->setFont (Font (15.00f, Font::plain));
    label->setJustificationType (Justification::centredLeft);
    label->setEditable (false, false, false);
    label->setColour (TextEditor::textColourId, Colours::black);
    label->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (label2 = new Label ("new label",
                                           "decay"));
    label2->setFont (Font (15.00f, Font::plain));
    label2->setJustificationType (Justification::centredLeft);
    label2->setEditable (false, false, false);
    label2->setColour (TextEditor::textColourId, Colours::black);
    label2->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (label3 = new Label ("new label",
                                           "sustain"));
    label3->setFont (Font (15.00f, Font::plain));
    label3->setJustificationType (Justification::centredLeft);
    label3->setEditable (false, false, false);
    label3->setColour (TextEditor::textColourId, Colours::black);
    label3->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (label4 = new Label ("new label",
                                           "release"));
    label4->setFont (Font (15.00f, Font::plain));
    label4->setJustificationType (Justification::centredLeft);
    label4->setEditable (false, false, false);
    label4->setColour (TextEditor::textColourId, Colours::black);
    label4->setColour (TextEditor::backgroundColourId, Colour (0x00000000));


    //[UserPreSize]
    //[/UserPreSize]

    setSize (600, 400);


    //[Constructor] You can add your own custom stuff here..
    //[/Constructor]
}

SampleSettingsComponent::~SampleSettingsComponent()
{
    //[Destructor_pre]. You can add your own custom destruction code here..
    //[/Destructor_pre]

    textEditor = nullptr;
    loadSampleButton = nullptr;
    waveComponent = nullptr;
    envelopeComponent = nullptr;
    attackSlider = nullptr;
    decaySlider = nullptr;
    sustainSlider = nullptr;
    releaseSlider = nullptr;
    label = nullptr;
    label2 = nullptr;
    label3 = nullptr;
    label4 = nullptr;


    //[Destructor]. You can add your own custom destruction code here..
    //[/Destructor]
}

//==============================================================================
void SampleSettingsComponent::paint (Graphics& g)
{
    //[UserPrePaint] Add your own custom painting code here..
    //[/UserPrePaint]

    g.fillAll (Colour (0xffaeaeae));

    //[UserPaint] Add your own custom painting code here..
    //[/UserPaint]
}

void SampleSettingsComponent::resized()
{
    textEditor->setBounds ((8) + 96, 8, getWidth() - 116, 24);
    loadSampleButton->setBounds (8, 8, 87, 24);
    waveComponent->setBounds (8, 40, proportionOfWidth (0.9441f), proportionOfHeight (0.3002f));
    envelopeComponent->setBounds (8, (40) + (proportionOfHeight (0.3002f)) - -6, proportionOfWidth (0.9441f), proportionOfHeight (0.3002f));
    attackSlider->setBounds (8, ((40) + (proportionOfHeight (0.3002f)) - -6) + (proportionOfHeight (0.3002f)) - -10, 56, 48);
    decaySlider->setBounds (64, ((40) + (proportionOfHeight (0.3002f)) - -6) + (proportionOfHeight (0.3002f)) - -10, 56, 48);
    sustainSlider->setBounds (120, ((40) + (proportionOfHeight (0.3002f)) - -6) + (proportionOfHeight (0.3002f)) - -10, 56, 48);
    releaseSlider->setBounds (176, ((40) + (proportionOfHeight (0.3002f)) - -6) + (proportionOfHeight (0.3002f)) - -10, 56, 48);
    label->setBounds ((8) + (56) / 2 - ((48) / 2), (((40) + (proportionOfHeight (0.3002f)) - -6) + (proportionOfHeight (0.3002f)) - -10) + (48), 48, 24);
    label2->setBounds ((64) + (56) / 2 - ((48) / 2), (((40) + (proportionOfHeight (0.3002f)) - -6) + (proportionOfHeight (0.3002f)) - -10) + (48), 48, 24);
    label3->setBounds ((120) + (56) / 2 - ((56) / 2), (((40) + (proportionOfHeight (0.3002f)) - -6) + (proportionOfHeight (0.3002f)) - -10) + (48), 56, 24);
    label4->setBounds ((176) + (56) / 2 - ((56) / 2), (((40) + (proportionOfHeight (0.3002f)) - -6) + (proportionOfHeight (0.3002f)) - -10) + (48), 56, 24);
    //[UserResized] Add your own custom resize handling here..
    //[/UserResized]
}

void SampleSettingsComponent::buttonClicked (Button* buttonThatWasClicked)
{
    //[UserbuttonClicked_Pre]
    //[/UserbuttonClicked_Pre]

    if (buttonThatWasClicked == loadSampleButton)
    {
        //[UserButtonCode_loadSampleButton] -- add your button handler code here..
        EventDispatch::getInstance()->sendEventMessage(EventDispatch::MSG_OPEN_AUDIO_FILE_SELECTOR, nullptr);
        //[/UserButtonCode_loadSampleButton]
    }

    //[UserbuttonClicked_Post]
    //[/UserbuttonClicked_Post]
}

void SampleSettingsComponent::sliderValueChanged (Slider* sliderThatWasMoved)
{
    //[UsersliderValueChanged_Pre]
    //[/UsersliderValueChanged_Pre]

    if (sliderThatWasMoved == attackSlider)
    {
        //[UserSliderCode_attackSlider] -- add your slider handling code here..
        //[/UserSliderCode_attackSlider]
    }
    else if (sliderThatWasMoved == decaySlider)
    {
        //[UserSliderCode_decaySlider] -- add your slider handling code here..
        //[/UserSliderCode_decaySlider]
    }
    else if (sliderThatWasMoved == sustainSlider)
    {
        //[UserSliderCode_sustainSlider] -- add your slider handling code here..
        //[/UserSliderCode_sustainSlider]
    }
    else if (sliderThatWasMoved == releaseSlider)
    {
        //[UserSliderCode_releaseSlider] -- add your slider handling code here..
        //[/UserSliderCode_releaseSlider]
    }

    //[UsersliderValueChanged_Post]
    //[/UsersliderValueChanged_Post]
}



//[MiscUserCode] You can add your own definitions of your custom methods or any other code here...
//[/MiscUserCode]


//==============================================================================
#if 0
/*  -- Introjucer information section --

    This is where the Introjucer stores the metadata that describe this GUI layout, so
    make changes in here at your peril!

BEGIN_JUCER_METADATA

<JUCER_COMPONENT documentType="Component" className="SampleSettingsComponent"
                 componentName="" parentClasses="public Component" constructorParams=""
                 variableInitialisers="" snapPixels="8" snapActive="1" snapShown="1"
                 overlayOpacity="0.330000013" fixedSize="0" initialWidth="600"
                 initialHeight="400">
  <BACKGROUND backgroundColour="ffaeaeae"/>
  <TEXTEDITOR name="new text editor" id="cd908df7e69b2437" memberName="textEditor"
              virtualName="" explicitFocusOrder="0" pos="96 8 116M 24" posRelativeX="52b45f0363840a9a"
              initialText="" multiline="0" retKeyStartsLine="0" readonly="0"
              scrollbars="1" caret="1" popupmenu="1"/>
  <TEXTBUTTON name="load sample Button" id="52b45f0363840a9a" memberName="loadSampleButton"
              virtualName="" explicitFocusOrder="0" pos="8 8 87 24" buttonText="load sample"
              connectedEdges="0" needsCallback="1" radioGroupId="0"/>
  <GENERICCOMPONENT name="waveform viewer" id="43c696956c040673" memberName="waveComponent"
                    virtualName="" explicitFocusOrder="0" pos="8 40 94.413% 30.021%"
                    class="Component" params=""/>
  <GENERICCOMPONENT name="envelope viewer" id="c8a20ff7bccda56" memberName="envelopeComponent"
                    virtualName="" explicitFocusOrder="0" pos="8 -6R 94.413% 30.021%"
                    posRelativeY="43c696956c040673" class="Component" params=""/>
  <SLIDER name="Attack Slider" id="742b63db24f445f5" memberName="attackSlider"
          virtualName="" explicitFocusOrder="0" pos="8 -10R 56 48" posRelativeY="c8a20ff7bccda56"
          min="0" max="10" int="0" style="Rotary" textBoxPos="NoTextBox"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1"/>
  <SLIDER name="decay slider" id="659f83a93e7988ba" memberName="decaySlider"
          virtualName="" explicitFocusOrder="0" pos="64 -10R 56 48" posRelativeY="c8a20ff7bccda56"
          min="0" max="10" int="0" style="Rotary" textBoxPos="NoTextBox"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1"/>
  <SLIDER name="sustain slider" id="43e696184d7ab5eb" memberName="sustainSlider"
          virtualName="" explicitFocusOrder="0" pos="120 -10R 56 48" posRelativeY="c8a20ff7bccda56"
          min="0" max="10" int="0" style="Rotary" textBoxPos="NoTextBox"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1"/>
  <SLIDER name="release slider" id="fe11ba517376fa5c" memberName="releaseSlider"
          virtualName="" explicitFocusOrder="0" pos="176 -10R 56 48" posRelativeY="c8a20ff7bccda56"
          min="0" max="10" int="0" style="Rotary" textBoxPos="NoTextBox"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1"/>
  <LABEL name="new label" id="a4e71c7ff8507a3a" memberName="label" virtualName=""
         explicitFocusOrder="0" pos="0Cc 0R 48 24" posRelativeX="742b63db24f445f5"
         posRelativeY="742b63db24f445f5" edTextCol="ff000000" edBkgCol="0"
         labelText="attack" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15"
         bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="aab897958b696d4f" memberName="label2" virtualName=""
         explicitFocusOrder="0" pos="0Cc 0R 48 24" posRelativeX="659f83a93e7988ba"
         posRelativeY="659f83a93e7988ba" posRelativeW="659f83a93e7988ba"
         edTextCol="ff000000" edBkgCol="0" labelText="decay" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="5341486edbde0cf2" memberName="label3" virtualName=""
         explicitFocusOrder="0" pos="0Cc 0R 56 24" posRelativeX="43e696184d7ab5eb"
         posRelativeY="43e696184d7ab5eb" posRelativeW="659f83a93e7988ba"
         edTextCol="ff000000" edBkgCol="0" labelText="sustain" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="8df117b73741327c" memberName="label4" virtualName=""
         explicitFocusOrder="0" pos="0Cc 0R 56 24" posRelativeX="fe11ba517376fa5c"
         posRelativeY="fe11ba517376fa5c" posRelativeW="659f83a93e7988ba"
         edTextCol="ff000000" edBkgCol="0" labelText="release" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="33"/>
</JUCER_COMPONENT>

END_JUCER_METADATA
*/
#endif


//[EndFile] You can add extra defines here...
//[/EndFile]
