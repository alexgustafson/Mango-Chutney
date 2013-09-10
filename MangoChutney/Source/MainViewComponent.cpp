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

#include "MainViewComponent.h"


//[MiscUserDefs] You can add your own user definitions and misc code here...
//[/MiscUserDefs]

//==============================================================================
MainViewComponent::MainViewComponent ()
{
    addAndMakeVisible (setupButton = new ImageButton ("new button"));
    setupButton->setRadioGroupId (34566);
    setupButton->addListener (this);

    setupButton->setImages (false, true, true,
                            ImageCache::getFromMemory (buttonOff_png, buttonOff_pngSize), 0.999f, Colour (0x00000000),
                            Image(), 1.000f, Colour (0x00000000),
                            ImageCache::getFromMemory (buttonOn_png, buttonOn_pngSize), 1.000f, Colour (0x00000000));
    addAndMakeVisible (selectButton = new ImageButton ("select button"));
    selectButton->setButtonText ("new button");
    selectButton->setRadioGroupId (34567);
    selectButton->addListener (this);

    selectButton->setImages (false, true, true,
                             ImageCache::getFromMemory (buttonOff_png, buttonOff_pngSize), 1.000f, Colour (0x00000000),
                             Image(), 1.000f, Colour (0x00000000),
                             ImageCache::getFromMemory (buttonOn_png, buttonOn_pngSize), 1.000f, Colour (0x00000000));
    addAndMakeVisible (playButton = new ImageButton ("play button"));
    playButton->setButtonText ("new button");
    playButton->setRadioGroupId (33000);
    playButton->addListener (this);

    playButton->setImages (false, true, true,
                           ImageCache::getFromMemory (buttonOff_png, buttonOff_pngSize), 1.000f, Colour (0x00000000),
                           Image(), 1.000f, Colour (0x00000000),
                           ImageCache::getFromMemory (buttonOn_png, buttonOn_pngSize), 1.000f, Colour (0x00000000));
    addAndMakeVisible (component = new PadField());
    addAndMakeVisible (stepButton = new ImageButton ("step button"));
    stepButton->setButtonText ("new button");
    stepButton->setRadioGroupId (34567);
    stepButton->addListener (this);

    stepButton->setImages (false, true, true,
                           ImageCache::getFromMemory (buttonOff_png, buttonOff_pngSize), 1.000f, Colour (0x00000000),
                           Image(), 1.000f, Colour (0x00000000),
                           ImageCache::getFromMemory (buttonOn_png, buttonOn_pngSize), 1.000f, Colour (0x00000000));
    addAndMakeVisible (tempoSlider = new Slider ("tempo slider"));
    tempoSlider->setRange (50, 220, 0.2);
    tempoSlider->setSliderStyle (Slider::Rotary);
    tempoSlider->setTextBoxStyle (Slider::TextBoxBelow, true, 60, 20);
    tempoSlider->setColour (Slider::backgroundColourId, Colour (0xff070000));
    tempoSlider->setColour (Slider::thumbColourId, Colour (0xc700004f));
    tempoSlider->setColour (Slider::trackColourId, Colour (0xff230000));
    tempoSlider->setColour (Slider::rotarySliderFillColourId, Colours::burlywood);
    tempoSlider->setColour (Slider::rotarySliderOutlineColourId, Colour (0x82fdfdfd));
    tempoSlider->setColour (Slider::textBoxTextColourId, Colours::red);
    tempoSlider->setColour (Slider::textBoxBackgroundColourId, Colour (0xff0a0707));
    tempoSlider->addListener (this);

    addAndMakeVisible (label = new Label ("new label",
                                          "load"));
    label->setFont (Font (13.00f, Font::plain));
    label->setJustificationType (Justification::centred);
    label->setEditable (false, false, false);
    label->setColour (Label::textColourId, Colour (0xffadadad));
    label->setColour (TextEditor::textColourId, Colours::black);
    label->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (label2 = new Label ("new label",
                                           "select"));
    label2->setFont (Font (12.80f, Font::plain));
    label2->setJustificationType (Justification::centred);
    label2->setEditable (false, false, false);
    label2->setColour (Label::textColourId, Colour (0xffadadad));
    label2->setColour (TextEditor::textColourId, Colours::black);
    label2->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (label3 = new Label ("new label",
                                           "play"));
    label3->setFont (Font (13.00f, Font::plain));
    label3->setJustificationType (Justification::centred);
    label3->setEditable (false, false, false);
    label3->setColour (Label::textColourId, Colour (0xffadadad));
    label3->setColour (TextEditor::textColourId, Colours::black);
    label3->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (label4 = new Label ("new label",
                                           "step"));
    label4->setFont (Font (13.00f, Font::plain));
    label4->setJustificationType (Justification::centred);
    label4->setEditable (false, false, false);
    label4->setColour (Label::textColourId, Colour (0xffadadad));
    label4->setColour (TextEditor::textColourId, Colours::black);
    label4->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (patternButton = new ImageButton ("patternbutton"));
    patternButton->setButtonText ("new button");
    patternButton->setRadioGroupId (34567);
    patternButton->addListener (this);

    patternButton->setImages (false, true, true,
                              ImageCache::getFromMemory (buttonOff_png, buttonOff_pngSize), 1.000f, Colour (0x00000000),
                              Image(), 1.000f, Colour (0x00000000),
                              ImageCache::getFromMemory (buttonOn_png, buttonOn_pngSize), 1.000f, Colour (0x00000000));
    addAndMakeVisible (label5 = new Label ("new label",
                                           "pattern"));
    label5->setFont (Font (13.00f, Font::plain));
    label5->setJustificationType (Justification::centred);
    label5->setEditable (false, false, false);
    label5->setColour (Label::textColourId, Colour (0xffadadad));
    label5->setColour (TextEditor::textColourId, Colours::black);
    label5->setColour (TextEditor::backgroundColourId, Colour (0x00000000));


    //[UserPreSize]
    //[/UserPreSize]

    setSize (600, 300);


    //[Constructor] You can add your own custom stuff here..

    sequencer = Sequencer::getInstance();
    tempoSlider->setValue(sequencer->tempo);
    drumController = DrumController::getInstance();
    setSize (getParentWidth(), getParentHeight());

    selectButton->setClickingTogglesState(true);
    playButton->setClickingTogglesState(true);
    setupButton->setClickingTogglesState(false);
    stepButton->setClickingTogglesState(true);
    patternButton->setClickingTogglesState(true);

    EventDispatch::getInstance()->addEventListener((EventListener*)this);

    //[/Constructor]
}

MainViewComponent::~MainViewComponent()
{
    //[Destructor_pre]. You can add your own custom destruction code here..
    //[/Destructor_pre]

    setupButton = nullptr;
    selectButton = nullptr;
    playButton = nullptr;
    component = nullptr;
    stepButton = nullptr;
    tempoSlider = nullptr;
    label = nullptr;
    label2 = nullptr;
    label3 = nullptr;
    label4 = nullptr;
    patternButton = nullptr;
    label5 = nullptr;


    //[Destructor]. You can add your own custom destruction code here..
    drumController = nullptr;
    fileBrowser = nullptr;
    //[/Destructor]
}

//==============================================================================
void MainViewComponent::paint (Graphics& g)
{
    //[UserPrePaint] Add your own custom painting code here..
    //[/UserPrePaint]

    g.fillAll (Colour (0xff373940));

    //[UserPaint] Add your own custom painting code here..
    //[/UserPaint]
}

void MainViewComponent::resized()
{
    setupButton->setBounds (16, 8, proportionOfWidth (0.1243f), proportionOfHeight (0.1369f));
    selectButton->setBounds (((16) + (proportionOfWidth (0.1243f))) + (proportionOfWidth (0.1243f)), 8, proportionOfWidth (0.1243f), proportionOfHeight (0.1369f));
    playButton->setBounds ((16) + (proportionOfWidth (0.1243f)), 8, proportionOfWidth (0.1243f), proportionOfHeight (0.1369f));
    component->setBounds (24, 152, 290, 290);
    stepButton->setBounds ((((16) + (proportionOfWidth (0.1243f))) + (proportionOfWidth (0.1243f))) + (proportionOfWidth (0.1243f)), 8, proportionOfWidth (0.1243f), proportionOfHeight (0.1369f));
    tempoSlider->setBounds (getWidth() - 107, 8, 96, 80);
    label->setBounds ((16) + (proportionOfWidth (0.1243f)) / 2 - ((40) / 2), (8) + (proportionOfHeight (0.1369f)) - 8, 40, 24);
    label2->setBounds ((((16) + (proportionOfWidth (0.1243f))) + (proportionOfWidth (0.1243f))) + (proportionOfWidth (0.1243f)) / 2 - ((40) / 2), (8) + (proportionOfHeight (0.1369f)) - 8, 40, 24);
    label3->setBounds (((16) + (proportionOfWidth (0.1243f))) + (proportionOfWidth (0.1243f)) / 2 - ((40) / 2), (8) + (proportionOfHeight (0.1369f)) - 8, 40, 24);
    label4->setBounds (((((16) + (proportionOfWidth (0.1243f))) + (proportionOfWidth (0.1243f))) + (proportionOfWidth (0.1243f))) + (proportionOfWidth (0.1243f)) / 2 - ((40) / 2), (8) + (proportionOfHeight (0.1369f)) - 8, 40, 24);
    patternButton->setBounds (((((16) + (proportionOfWidth (0.1243f))) + (proportionOfWidth (0.1243f))) + (proportionOfWidth (0.1243f))) + (proportionOfWidth (0.1243f)), 8, proportionOfWidth (0.1243f), proportionOfHeight (0.1369f));
    label5->setBounds ((((((16) + (proportionOfWidth (0.1243f))) + (proportionOfWidth (0.1243f))) + (proportionOfWidth (0.1243f))) + (proportionOfWidth (0.1243f))) + (proportionOfWidth (0.1243f)) / 2 - ((48) / 2), (8) + (proportionOfHeight (0.1369f)) - 8, 48, 24);
    //[UserResized] Add your own custom resize handling here..
    if(getHeight() > getWidth())
    {
        //portrait 4 x 4
        component->setBounds (16, getHeight() - getWidth(), getWidth() - 32, getWidth() - 8 );
    }else
    {
        //landscape 2 x 8
        component->setBounds(16, getHeight() - (int)(getWidth() / 4),getWidth() - 32, ((int)getWidth() / 4) - 16) ;
    }

    if (fileBrowser) {
        fileBrowser->setBounds(0, 0, getWidth(), getHeight());
    }

    //[/UserResized]
}

void MainViewComponent::buttonClicked (Button* buttonThatWasClicked)
{
    //[UserbuttonClicked_Pre]
    //[/UserbuttonClicked_Pre]

    if (buttonThatWasClicked == setupButton)
    {
        //[UserButtonCode_setupButton] -- add your button handler code here..
        if(!settingsComponent)
        {
            settingsComponent = new SettingsViewComponent();
        }
        File file = drumController->getSampleFileForActivePad();
        if (file.exists()) {
            settingsComponent->setSelectedAudioFile(file);
        }
        
        
        
        addAndMakeVisible(settingsComponent);
        settingsComponent->setTopLeftPosition(0, 0);
        settingsComponent->setSize(getWidth(), getHeight());

        //[/UserButtonCode_setupButton]
    }
    else if (buttonThatWasClicked == selectButton)
    {
        //[UserButtonCode_selectButton] -- add your button handler code here..
        drumController->setMode(Selectmode, buttonThatWasClicked);

        //[/UserButtonCode_selectButton]
    }
    else if (buttonThatWasClicked == playButton)
    {
        //[UserButtonCode_playButton] -- add your button handler code here..

        drumController->toggleSequencerPlayStop(buttonThatWasClicked);
        //[/UserButtonCode_playButton]
    }
    else if (buttonThatWasClicked == stepButton)
    {
        //[UserButtonCode_stepButton] -- add your button handler code here..
        drumController->setMode(Stepmode, buttonThatWasClicked);
        //[/UserButtonCode_stepButton]
    }
    else if (buttonThatWasClicked == patternButton)
    {
        //[UserButtonCode_patternButton] -- add your button handler code here..
        drumController->setMode(Patternmode, buttonThatWasClicked);
        //[/UserButtonCode_patternButton]
    }

    //[UserbuttonClicked_Post]
    //[/UserbuttonClicked_Post]
}

void MainViewComponent::sliderValueChanged (Slider* sliderThatWasMoved)
{
    //[UsersliderValueChanged_Pre]
    //[/UsersliderValueChanged_Pre]

    if (sliderThatWasMoved == tempoSlider)
    {
        //[UserSliderCode_tempoSlider] -- add your slider handling code here..
        sequencer->setTempo(tempoSlider->getValue())  ;
        //[/UserSliderCode_tempoSlider]
    }

    //[UsersliderValueChanged_Post]
    //[/UsersliderValueChanged_Post]
}



//[MiscUserCode] You can add your own definitions of your custom methods or any other code here...
void MainViewComponent::buttonStateChanged(Button * buttonThatChanged)
{



}

// FileBrowserListener Implementation //
void MainViewComponent::selectionChanged()
{

}

void MainViewComponent::fileClicked(const juce::File &file, const juce::MouseEvent &e)
{
    removeChildComponent(fileBrowser);
    settingsComponent->setSelectedAudioFile(file);
    drumController->setFileForActivePad(file);
}

void MainViewComponent::fileDoubleClicked (const File& file)
{

}

void MainViewComponent::browserRootChanged (const File& newRoot)
{

}

void MainViewComponent::fileSelected(const juce::File &file)
{
    settingsComponent->setSelectedAudioFile(file);
    drumController->setFileForActivePad(file);
    removeChildComponent(fileBrowser);
}

void MainViewComponent::selectionCanceled()
{
    removeChildComponent(fileBrowser);
}

void MainViewComponent::eventListenerCallback (const String &message, void* payload)
{
    if( message.equalsIgnoreCase(EventDispatch::MSG_CLOSE_SETTINGS_VIEW) )
    {
        removeChildComponent(settingsComponent);

    }else if(message.equalsIgnoreCase(EventDispatch::MSG_OPEN_AUDIO_FILE_SELECTOR) )
    {
        if(!fileBrowser)
        {
            juce::File theDocumentDirectory = File::getSpecialLocation(File::userDocumentsDirectory);

            #if JUCE_IOS
                theDocumentDirectory = File::getSpecialLocation(File::currentApplicationFile).getSiblingFile("Documents");
            #endif

            #if JUCE_ANDROID
                theDocumentDirectory("/storage/sdcard0/DrumSounds");
            #endif

            int flags = FileBrowserComponent::openMode |FileBrowserComponent::canSelectFiles |FileBrowserComponent::filenameBoxIsReadOnly;

            fileBrowser = new AudioFileSelector(flags, theDocumentDirectory ,NULL, NULL );
        }

        addAndMakeVisible(fileBrowser);
        fileBrowser->setTopLeftPosition(0, 0);
        fileBrowser->setSize(getWidth(), getHeight());
        fileBrowser->setListener(this);

    }else if(message.equalsIgnoreCase(EventDispatch::MSG_CLOSE_AUDIO_FILE_SELECTOR) )
    {

    }else if(message.equalsIgnoreCase(EventDispatch::MSG_UPDATE_GUI_MODE))
    {
        if(((ModeUpdateEvent*)payload)->_mode == ModeUpdateEvent::mode::playmode)
        {
            
        }else if (((ModeUpdateEvent*)payload)->_mode == ModeUpdateEvent::mode::setupmode)
        {
            
        }else if (((ModeUpdateEvent*)payload)->_mode == ModeUpdateEvent::mode::selectmode)
        {
        }else if (((ModeUpdateEvent*)payload)->_mode == ModeUpdateEvent::mode::stepmode)
        {
            if (sequencer->getState() == SequencerState::isPlaying) {
                
            }
        }else if (((ModeUpdateEvent*)payload)->_mode == ModeUpdateEvent::mode::patternmode)
        {
        }

    }
}


//[/MiscUserCode]


//==============================================================================
#if 0
/*  -- Introjucer information section --

    This is where the Introjucer stores the metadata that describe this GUI layout, so
    make changes in here at your peril!

BEGIN_JUCER_METADATA

<JUCER_COMPONENT documentType="Component" className="MainViewComponent" componentName=""
                 parentClasses="public Component, public AudioFileSelectorListener, public EventListener"
                 constructorParams="" variableInitialisers="" snapPixels="8" snapActive="1"
                 snapShown="1" overlayOpacity="0.33" fixedSize="0" initialWidth="600"
                 initialHeight="300">
  <BACKGROUND backgroundColour="ff373940"/>
  <IMAGEBUTTON name="new button" id="6fc8c6b2dd61df0d" memberName="setupButton"
               virtualName="" explicitFocusOrder="0" pos="16 8 12.429% 13.693%"
               buttonText="new button" connectedEdges="0" needsCallback="1"
               radioGroupId="34566" keepProportions="1" resourceNormal="buttonOff_png"
               opacityNormal="0.999414" colourNormal="0" resourceOver="" opacityOver="1"
               colourOver="0" resourceDown="buttonOn_png" opacityDown="1" colourDown="0"/>
  <IMAGEBUTTON name="select button" id="2e13002f79a45ac3" memberName="selectButton"
               virtualName="" explicitFocusOrder="0" pos="0R 8 12.429% 13.693%"
               posRelativeX="ccc5656cdd20daae" buttonText="new button" connectedEdges="0"
               needsCallback="1" radioGroupId="34567" keepProportions="1" resourceNormal="buttonOff_png"
               opacityNormal="1" colourNormal="0" resourceOver="" opacityOver="1"
               colourOver="0" resourceDown="buttonOn_png" opacityDown="1" colourDown="0"/>
  <IMAGEBUTTON name="play button" id="ccc5656cdd20daae" memberName="playButton"
               virtualName="" explicitFocusOrder="0" pos="0R 8 12.429% 13.693%"
               posRelativeX="6fc8c6b2dd61df0d" buttonText="new button" connectedEdges="0"
               needsCallback="1" radioGroupId="33000" keepProportions="1" resourceNormal="buttonOff_png"
               opacityNormal="1" colourNormal="0" resourceOver="" opacityOver="1"
               colourOver="0" resourceDown="buttonOn_png" opacityDown="1" colourDown="0"/>
  <JUCERCOMP name="" id="c33e7dac6962d4cf" memberName="component" virtualName=""
             explicitFocusOrder="0" pos="24 152 290 290" sourceFile="PadFieldComponent.cpp"
             constructorParams=""/>
  <IMAGEBUTTON name="step button" id="3c48281046602f90" memberName="stepButton"
               virtualName="" explicitFocusOrder="0" pos="0R 8 12.429% 13.693%"
               posRelativeX="2e13002f79a45ac3" buttonText="new button" connectedEdges="0"
               needsCallback="1" radioGroupId="34567" keepProportions="1" resourceNormal="buttonOff_png"
               opacityNormal="1" colourNormal="0" resourceOver="" opacityOver="1"
               colourOver="0" resourceDown="buttonOn_png" opacityDown="1" colourDown="0"/>
  <SLIDER name="tempo slider" id="8974591e6706b422" memberName="tempoSlider"
          virtualName="" explicitFocusOrder="0" pos="107R 8 96 80" bkgcol="ff070000"
          thumbcol="c700004f" trackcol="ff230000" rotarysliderfill="ffdeb887"
          rotaryslideroutline="82fdfdfd" textboxtext="ffff0000" textboxbkgd="ff0a0707"
          min="50" max="220" int="0.2" style="Rotary" textBoxPos="TextBoxBelow"
          textBoxEditable="0" textBoxWidth="60" textBoxHeight="20" skewFactor="1"/>
  <LABEL name="new label" id="f43cdd915a3fe25e" memberName="label" virtualName=""
         explicitFocusOrder="0" pos="0Cc 8R 40 24" posRelativeX="6fc8c6b2dd61df0d"
         posRelativeY="6fc8c6b2dd61df0d" textCol="ffadadad" edTextCol="ff000000"
         edBkgCol="0" labelText="load" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="13"
         bold="0" italic="0" justification="36"/>
  <LABEL name="new label" id="66a0e64cb535d5ee" memberName="label2" virtualName=""
         explicitFocusOrder="0" pos="0Cc 8R 40 24" posRelativeX="2e13002f79a45ac3"
         posRelativeY="2e13002f79a45ac3" textCol="ffadadad" edTextCol="ff000000"
         edBkgCol="0" labelText="select" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="12.8"
         bold="0" italic="0" justification="36"/>
  <LABEL name="new label" id="353ff4e85ffc0097" memberName="label3" virtualName=""
         explicitFocusOrder="0" pos="0Cc 8R 40 24" posRelativeX="ccc5656cdd20daae"
         posRelativeY="ccc5656cdd20daae" textCol="ffadadad" edTextCol="ff000000"
         edBkgCol="0" labelText="play" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="13"
         bold="0" italic="0" justification="36"/>
  <LABEL name="new label" id="1441b889f15e6481" memberName="label4" virtualName=""
         explicitFocusOrder="0" pos="0Cc 8R 40 24" posRelativeX="3c48281046602f90"
         posRelativeY="3c48281046602f90" textCol="ffadadad" edTextCol="ff000000"
         edBkgCol="0" labelText="step" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="13"
         bold="0" italic="0" justification="36"/>
  <IMAGEBUTTON name="patternbutton" id="9a7688cc97b26649" memberName="patternButton"
               virtualName="" explicitFocusOrder="0" pos="0R 8 12.429% 13.693%"
               posRelativeX="3c48281046602f90" buttonText="new button" connectedEdges="0"
               needsCallback="1" radioGroupId="34567" keepProportions="1" resourceNormal="buttonOff_png"
               opacityNormal="1" colourNormal="0" resourceOver="" opacityOver="1"
               colourOver="0" resourceDown="buttonOn_png" opacityDown="1" colourDown="0"/>
  <LABEL name="new label" id="483e187f0e50de01" memberName="label5" virtualName=""
         explicitFocusOrder="0" pos="0Cc 8R 48 24" posRelativeX="9a7688cc97b26649"
         posRelativeY="9a7688cc97b26649" textCol="ffadadad" edTextCol="ff000000"
         edBkgCol="0" labelText="pattern" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="13"
         bold="0" italic="0" justification="36"/>
</JUCER_COMPONENT>

END_JUCER_METADATA
*/
#endif

//==============================================================================
// Binary resources - be careful not to edit any of these sections!

// JUCER_RESOURCE: buttonOff_png, 19507, "../../Media/buttons/Bilder/buttonOff.png"
static const unsigned char resource_MainViewComponent_buttonOff_png[] = { 137,80,78,71,13,10,26,10,0,0,0,13,73,72,68,82,0,0,0,96,0,0,0,133,8,2,0,0,0,43,115,106,94,0,0,0,25,116,69,88,116,83,111,102,116,
119,97,114,101,0,65,100,111,98,101,32,73,109,97,103,101,82,101,97,100,121,113,201,101,60,0,0,3,34,105,84,88,116,88,77,76,58,99,111,109,46,97,100,111,98,101,46,120,109,112,0,0,0,0,0,60,63,120,112,97,99,
107,101,116,32,98,101,103,105,110,61,34,239,187,191,34,32,105,100,61,34,87,53,77,48,77,112,67,101,104,105,72,122,114,101,83,122,78,84,99,122,107,99,57,100,34,63,62,32,60,120,58,120,109,112,109,101,116,
97,32,120,109,108,110,115,58,120,61,34,97,100,111,98,101,58,110,115,58,109,101,116,97,47,34,32,120,58,120,109,112,116,107,61,34,65,100,111,98,101,32,88,77,80,32,67,111,114,101,32,53,46,48,45,99,48,54,
48,32,54,49,46,49,51,52,55,55,55,44,32,50,48,49,48,47,48,50,47,49,50,45,49,55,58,51,50,58,48,48,32,32,32,32,32,32,32,32,34,62,32,60,114,100,102,58,82,68,70,32,120,109,108,110,115,58,114,100,102,61,34,
104,116,116,112,58,47,47,119,119,119,46,119,51,46,111,114,103,47,49,57,57,57,47,48,50,47,50,50,45,114,100,102,45,115,121,110,116,97,120,45,110,115,35,34,62,32,60,114,100,102,58,68,101,115,99,114,105,112,
116,105,111,110,32,114,100,102,58,97,98,111,117,116,61,34,34,32,120,109,108,110,115,58,120,109,112,61,34,104,116,116,112,58,47,47,110,115,46,97,100,111,98,101,46,99,111,109,47,120,97,112,47,49,46,48,47,
34,32,120,109,108,110,115,58,120,109,112,77,77,61,34,104,116,116,112,58,47,47,110,115,46,97,100,111,98,101,46,99,111,109,47,120,97,112,47,49,46,48,47,109,109,47,34,32,120,109,108,110,115,58,115,116,82,
101,102,61,34,104,116,116,112,58,47,47,110,115,46,97,100,111,98,101,46,99,111,109,47,120,97,112,47,49,46,48,47,115,84,121,112,101,47,82,101,115,111,117,114,99,101,82,101,102,35,34,32,120,109,112,58,67,
114,101,97,116,111,114,84,111,111,108,61,34,65,100,111,98,101,32,80,104,111,116,111,115,104,111,112,32,67,83,53,32,77,97,99,105,110,116,111,115,104,34,32,120,109,112,77,77,58,73,110,115,116,97,110,99,
101,73,68,61,34,120,109,112,46,105,105,100,58,54,57,48,57,66,49,48,54,67,56,56,67,49,49,69,50,66,57,57,66,70,57,65,65,48,69,65,55,66,52,48,67,34,32,120,109,112,77,77,58,68,111,99,117,109,101,110,116,73,
68,61,34,120,109,112,46,100,105,100,58,54,57,48,57,66,49,48,55,67,56,56,67,49,49,69,50,66,57,57,66,70,57,65,65,48,69,65,55,66,52,48,67,34,62,32,60,120,109,112,77,77,58,68,101,114,105,118,101,100,70,114,
111,109,32,115,116,82,101,102,58,105,110,115,116,97,110,99,101,73,68,61,34,120,109,112,46,105,105,100,58,54,57,48,57,66,49,48,52,67,56,56,67,49,49,69,50,66,57,57,66,70,57,65,65,48,69,65,55,66,52,48,67,
34,32,115,116,82,101,102,58,100,111,99,117,109,101,110,116,73,68,61,34,120,109,112,46,100,105,100,58,54,57,48,57,66,49,48,53,67,56,56,67,49,49,69,50,66,57,57,66,70,57,65,65,48,69,65,55,66,52,48,67,34,
47,62,32,60,47,114,100,102,58,68,101,115,99,114,105,112,116,105,111,110,62,32,60,47,114,100,102,58,82,68,70,62,32,60,47,120,58,120,109,112,109,101,116,97,62,32,60,63,120,112,97,99,107,101,116,32,101,110,
100,61,34,114,34,63,62,183,60,25,163,0,0,72,167,73,68,65,84,120,218,76,125,201,146,109,73,118,149,31,63,253,237,34,94,102,86,102,85,86,129,74,148,144,9,77,100,134,6,24,12,16,26,96,198,71,96,12,24,49,225,
11,224,7,224,143,48,99,0,3,6,2,147,49,69,66,77,73,149,162,42,219,247,34,226,118,167,117,86,227,231,102,6,69,42,222,141,123,207,245,102,251,110,214,94,123,123,241,199,127,252,175,138,16,82,224,79,44,138,
80,20,235,186,198,24,211,202,215,214,196,223,241,231,148,214,34,226,239,133,127,199,223,10,253,240,205,69,196,3,82,226,95,202,88,38,253,138,7,241,243,41,241,35,252,73,65,111,227,235,122,17,239,241,103,
243,163,244,8,191,206,255,226,27,248,93,9,223,142,49,224,83,129,255,226,8,249,61,161,8,143,175,240,7,245,144,149,79,208,87,241,109,1,227,245,44,252,204,160,175,214,19,252,179,13,198,19,12,171,30,155,255,
132,223,53,182,20,249,79,207,33,165,101,93,61,74,12,61,104,41,162,70,201,9,196,232,161,36,125,127,89,86,252,115,254,122,254,47,150,49,79,195,223,150,248,40,46,110,193,223,185,58,154,103,242,90,106,26,
254,107,161,231,234,61,158,124,240,160,185,89,92,157,60,13,12,201,27,201,177,105,28,248,5,175,106,248,122,74,94,101,126,138,127,14,28,158,199,230,63,231,169,165,109,125,244,205,152,24,30,178,45,122,208,
68,99,208,110,120,48,156,231,188,204,11,229,163,196,255,31,135,17,127,121,125,249,102,89,230,117,89,248,236,194,223,151,101,193,223,173,61,47,44,95,222,109,252,109,154,231,170,42,183,189,162,116,172,223,
79,64,194,231,97,99,170,90,114,63,141,251,204,249,63,100,45,88,10,86,253,201,178,173,57,227,187,202,101,89,162,230,255,24,6,69,76,63,5,183,173,92,215,133,19,209,119,165,228,253,142,219,63,147,215,200,
95,132,255,226,105,85,85,121,144,120,225,233,249,227,186,110,112,8,184,85,41,213,21,7,80,81,146,66,249,225,229,181,170,234,178,196,215,149,195,112,187,221,135,111,191,249,205,60,143,90,157,245,49,44,124,
189,23,7,191,242,72,198,210,227,227,4,52,50,204,12,111,246,167,252,79,253,85,191,44,43,150,111,221,70,26,121,24,87,72,162,78,16,54,105,209,81,13,126,184,151,207,31,247,62,107,230,124,241,177,232,105,147,
5,252,95,44,141,164,99,197,94,123,197,49,29,141,214,43,238,15,46,85,89,65,26,60,23,30,2,238,122,254,29,255,131,76,239,247,71,13,59,196,170,106,234,158,207,193,16,102,172,196,52,126,241,197,95,239,251,
182,237,58,46,237,60,62,61,189,195,153,163,232,99,45,52,41,124,65,218,190,47,233,119,45,19,119,7,139,82,114,43,22,140,117,153,103,169,21,158,32,188,222,52,229,253,118,243,52,230,105,89,45,247,124,222,
172,197,13,117,93,143,227,192,125,198,208,32,2,120,84,217,96,26,26,119,137,191,98,69,154,166,245,108,241,59,94,196,91,151,188,31,1,34,240,24,192,60,77,245,177,9,89,230,10,158,0,47,95,197,143,172,137,59,
55,83,204,43,9,72,189,169,173,2,175,224,191,243,116,123,255,221,229,245,245,229,233,221,167,63,250,244,39,94,220,74,147,193,76,230,82,242,131,183,122,39,177,225,79,207,167,253,190,61,159,175,211,52,29,
143,251,219,109,220,239,187,113,228,59,199,113,90,117,46,240,110,172,105,89,166,235,117,196,103,49,213,253,97,135,133,157,230,245,126,31,32,23,93,215,44,211,252,238,227,167,235,229,90,80,85,85,231,243,
109,183,107,134,1,67,157,119,187,110,156,38,9,23,69,9,95,253,244,116,120,123,187,222,239,227,233,180,199,247,206,51,158,208,46,203,218,180,205,203,135,15,167,211,113,158,230,174,111,223,127,247,97,77,
177,174,177,61,229,56,79,248,224,233,180,187,92,7,28,39,8,67,191,107,238,247,59,143,228,26,198,251,125,154,151,207,62,251,248,118,189,223,238,35,102,185,219,119,144,8,76,252,122,29,62,251,236,221,203,
135,203,219,121,128,48,81,150,245,113,172,6,38,146,250,22,219,204,149,195,67,111,183,203,229,242,118,58,254,184,169,27,203,240,31,253,241,31,252,254,239,255,195,195,126,247,221,251,87,172,63,214,27,98,
132,141,133,146,170,219,150,42,119,77,220,180,121,58,236,247,215,251,208,54,245,249,237,140,189,130,108,98,165,167,9,19,159,120,226,214,212,247,253,52,142,109,219,30,14,251,183,183,183,164,109,199,66,
119,109,131,55,233,24,81,168,32,147,207,167,195,229,122,237,187,238,122,187,237,186,238,237,124,233,119,61,118,8,59,87,215,56,17,97,28,71,252,245,142,255,98,12,177,184,92,110,109,219,44,252,56,197,13,
171,53,12,83,215,213,80,248,216,149,251,48,118,109,107,149,134,157,120,123,187,84,60,137,148,62,124,35,62,222,119,45,190,2,191,127,241,171,95,255,233,159,254,95,60,205,178,247,250,242,30,239,252,232,233,
132,127,150,191,253,243,95,96,148,95,254,230,11,168,158,231,231,119,56,186,56,52,255,232,247,62,255,217,79,127,212,119,59,27,99,217,166,192,109,172,161,192,98,67,177,79,21,134,140,35,80,70,72,69,160,142,
12,251,93,95,74,154,169,179,74,250,4,199,211,17,31,135,94,216,237,15,88,177,1,203,212,117,18,114,200,44,148,84,1,17,219,237,119,84,73,101,196,163,134,9,211,195,138,92,100,140,10,252,206,47,170,248,40,
124,41,30,187,223,247,144,170,195,190,183,154,30,134,123,13,85,209,119,145,218,186,196,254,29,79,7,72,31,196,1,251,209,212,220,63,136,94,91,215,216,255,182,233,112,22,241,102,156,68,72,92,223,97,123,22,
232,93,124,21,78,198,231,159,127,244,229,151,223,97,219,48,206,15,31,190,133,14,249,228,147,31,81,51,73,231,23,88,84,10,21,127,214,95,252,206,207,254,249,191,248,103,199,253,46,22,211,126,191,187,224,
104,96,176,33,224,123,32,20,56,179,101,5,45,8,61,53,55,77,141,189,197,19,169,219,171,106,24,134,186,105,176,28,88,28,190,51,4,252,243,233,112,192,82,98,81,150,25,191,84,50,40,39,108,3,119,123,156,241,
79,172,212,211,241,40,69,131,115,55,64,220,158,79,208,148,17,95,7,125,133,207,97,69,248,207,166,146,131,86,94,175,247,182,173,109,85,231,143,63,242,121,111,155,42,73,27,226,153,207,199,147,53,203,56,96,
117,42,139,231,167,159,254,8,31,135,245,193,140,130,4,13,107,90,55,24,243,132,167,253,221,175,191,106,219,221,63,249,167,255,248,191,254,151,255,129,33,97,89,166,121,178,83,130,147,191,120,55,52,213,1,
27,85,85,221,241,244,132,199,61,29,26,140,254,116,58,44,75,154,121,94,10,173,3,150,53,242,91,177,179,84,162,124,5,211,192,203,33,180,248,219,90,66,17,46,208,68,144,60,172,43,100,9,170,30,186,22,90,12,
74,218,30,80,160,70,228,250,214,92,178,2,51,180,233,221,237,40,26,86,58,56,172,195,60,242,80,224,185,109,187,208,150,66,179,86,88,11,121,106,73,171,6,125,177,226,164,208,248,66,60,155,122,183,219,121,
117,176,214,251,67,245,176,113,81,30,1,230,140,111,196,212,78,167,118,27,51,79,71,25,171,203,60,222,174,111,118,199,66,33,179,40,163,25,179,87,42,231,208,94,92,211,64,158,177,45,35,228,31,47,78,227,140,
83,130,79,98,62,246,29,130,157,180,148,240,30,156,219,9,130,90,87,81,54,232,118,191,219,70,96,103,228,169,241,189,58,249,5,36,159,83,228,38,227,151,25,127,229,17,155,151,129,39,194,86,50,251,35,120,2,
22,34,187,57,48,105,88,18,42,32,156,154,26,214,22,99,198,233,137,252,11,205,74,79,203,219,66,196,113,250,48,6,12,0,18,23,104,1,163,172,100,194,170,173,249,135,7,159,170,179,44,181,85,156,11,126,167,169,
194,62,211,246,115,196,210,9,115,241,240,27,237,137,109,131,11,88,18,44,11,134,139,35,250,3,247,39,81,113,94,111,145,182,56,194,180,80,107,82,216,74,125,100,62,191,93,240,191,36,73,145,31,100,43,187,62,
132,171,228,110,215,56,53,94,101,12,171,162,130,224,202,98,84,24,158,37,2,206,41,94,25,134,17,95,129,33,65,148,48,154,89,63,246,241,26,74,29,60,181,17,227,199,66,96,180,144,68,108,6,182,10,70,19,19,234,
186,14,179,228,27,184,139,80,148,21,30,70,169,161,59,71,111,192,75,5,213,146,228,190,225,5,168,205,219,245,134,227,134,57,110,58,215,190,235,66,103,222,43,69,235,40,105,47,41,87,17,95,89,91,191,80,233,
80,230,97,17,240,53,60,127,85,233,87,232,61,201,43,219,245,253,110,223,239,15,123,122,9,101,197,175,44,163,188,15,152,42,126,10,74,10,51,150,13,194,73,229,201,194,208,111,183,193,242,136,39,44,212,196,
37,215,187,226,14,67,77,212,252,236,132,57,107,160,80,198,244,239,233,91,72,161,88,36,49,6,59,202,80,213,118,5,233,205,195,126,43,218,144,218,164,179,98,127,210,74,13,3,11,178,54,148,35,134,96,124,58,
6,217,245,61,190,130,139,33,55,27,123,18,236,163,167,181,114,24,161,19,206,5,195,71,219,182,130,145,174,107,72,114,237,17,92,47,55,8,39,157,84,29,126,188,243,122,185,96,254,176,157,235,188,114,246,244,
217,181,63,220,16,58,232,240,102,181,247,203,219,219,25,167,0,199,240,122,189,98,79,32,98,208,148,20,114,73,150,143,54,164,2,113,141,79,46,183,157,150,37,57,184,131,128,244,187,78,103,118,116,252,5,59,
133,173,198,22,79,52,121,20,49,234,29,234,248,10,139,142,119,66,145,225,83,144,23,172,17,158,60,81,250,40,110,94,26,122,24,56,254,77,216,245,29,118,93,206,61,132,125,130,11,242,215,127,245,55,138,120,
224,82,52,143,216,77,10,143,123,94,209,179,212,170,195,208,201,13,167,248,80,141,41,102,197,160,3,237,197,72,59,206,32,147,46,41,182,20,50,207,113,196,218,118,189,104,248,52,152,0,124,61,70,54,12,215,
255,248,159,254,51,12,248,203,249,173,188,199,230,227,38,93,150,249,117,173,63,173,198,243,92,188,11,135,238,240,246,229,235,253,179,41,252,58,244,251,14,91,92,180,113,44,198,219,175,135,143,158,79,47,
241,114,152,250,159,60,255,232,239,174,95,22,175,113,233,150,56,20,255,238,223,252,235,63,252,195,63,128,26,162,96,14,35,36,164,229,97,111,172,254,86,169,8,88,135,153,99,131,245,156,176,175,179,244,154,
52,73,146,11,54,81,93,222,6,24,112,76,155,239,47,194,253,54,208,215,99,216,96,152,33,67,28,244,211,165,186,20,112,233,196,45,82,228,56,221,85,77,69,40,167,166,196,98,225,109,86,102,92,82,169,39,109,63,
227,85,108,111,67,211,75,145,182,83,55,96,155,198,5,71,117,247,110,247,197,183,191,9,117,152,14,225,254,155,49,252,40,132,67,184,125,53,132,231,16,190,9,183,253,16,94,66,184,132,240,20,110,235,253,134,
95,118,250,223,199,225,187,242,53,188,15,47,31,157,95,254,236,140,127,134,15,33,252,125,14,250,190,12,248,150,215,215,179,12,63,86,167,133,42,50,224,130,65,98,225,56,149,121,197,204,175,50,234,80,145,
24,151,61,47,184,166,152,62,229,78,10,27,190,53,228,145,234,78,49,9,196,14,135,220,198,203,171,150,184,82,210,211,94,136,89,218,155,49,36,117,42,68,131,135,223,231,182,100,180,66,133,189,80,157,39,250,
175,203,130,51,168,99,18,96,71,168,143,39,6,199,16,102,226,16,11,76,67,133,85,187,172,183,208,133,0,167,20,159,251,4,223,12,85,20,194,81,10,163,225,98,97,237,194,239,134,128,208,231,170,183,225,175,95,
65,140,181,34,216,195,123,8,239,244,230,223,209,19,6,248,254,212,235,8,23,112,16,154,22,202,113,136,146,23,28,94,42,158,194,161,1,68,166,132,227,58,200,197,199,161,147,95,74,29,35,69,134,153,82,159,64,
111,58,48,132,172,33,0,128,11,46,85,51,43,198,76,142,26,51,94,227,88,140,17,38,141,103,133,152,229,245,229,77,78,0,78,47,108,33,236,49,222,16,105,141,224,242,214,53,188,12,12,2,127,154,105,73,8,83,33,
246,225,130,222,7,172,209,34,109,68,119,105,94,211,119,41,156,67,192,195,94,53,243,65,107,52,83,118,41,23,248,231,143,67,248,34,80,142,246,33,220,180,22,39,45,214,172,21,196,27,38,253,105,210,43,123,131,
42,213,68,55,34,200,69,162,63,137,23,13,146,97,78,176,182,248,191,244,76,23,68,109,48,76,129,166,134,147,92,109,197,240,30,56,86,179,36,130,246,46,20,50,155,147,156,216,164,5,168,54,136,70,112,145,189,
41,131,97,171,227,20,198,123,59,104,28,2,17,178,184,90,41,90,119,153,213,177,209,15,143,155,112,72,25,108,90,56,152,179,138,74,58,226,31,19,3,218,181,221,85,121,110,159,240,28,133,82,255,131,92,180,90,
5,44,86,175,51,53,74,100,58,173,84,212,123,58,189,152,180,58,75,22,31,124,176,130,169,44,75,131,59,116,211,100,236,133,132,36,4,177,48,124,56,71,66,65,233,143,98,218,216,75,252,178,208,180,211,80,214,
220,191,85,142,152,151,131,97,101,223,55,120,10,92,40,45,72,246,138,141,20,70,219,179,34,131,79,165,226,233,83,223,65,249,35,128,40,225,29,224,17,88,44,188,69,195,250,30,30,53,88,131,109,192,8,48,84,173,
99,130,87,137,141,19,100,6,159,149,123,123,91,134,124,172,110,154,228,85,26,167,211,18,12,90,157,175,67,248,78,191,212,250,235,111,233,157,123,157,172,65,190,217,89,31,89,37,113,107,184,221,121,166,56,
232,72,21,168,136,48,74,185,192,60,211,177,162,87,89,16,226,144,95,202,192,56,209,80,226,236,211,111,192,168,20,169,4,73,134,220,247,253,14,143,128,15,96,160,115,17,72,162,41,208,104,218,15,92,133,197,
89,148,210,251,247,223,193,254,221,111,119,123,116,208,115,111,47,103,168,189,12,134,73,178,45,171,179,130,82,34,65,11,29,54,10,54,189,172,232,49,97,9,177,165,113,136,89,16,126,163,57,127,172,195,181,
234,184,53,146,29,232,163,207,117,130,106,137,152,223,252,62,132,191,10,84,228,149,100,109,213,170,253,37,255,217,237,106,88,28,13,128,35,167,131,14,87,131,187,146,132,210,21,80,189,24,15,140,148,161,
27,1,158,1,103,72,34,94,157,47,87,248,238,12,86,119,29,13,75,74,112,113,47,87,248,30,211,42,71,39,107,219,13,41,175,162,77,59,157,238,202,134,13,82,128,247,181,13,4,21,74,26,82,7,167,177,178,217,146,155,
215,64,110,51,144,26,44,127,90,239,133,6,94,250,49,91,83,200,20,118,59,97,194,63,211,114,252,61,157,172,32,197,188,104,69,162,180,15,150,224,51,237,229,235,246,6,188,242,169,164,233,38,241,153,101,191,
222,36,101,248,200,12,219,92,214,69,101,180,76,120,153,80,253,224,208,108,65,104,130,149,131,134,214,164,232,31,114,96,70,203,5,147,183,93,67,237,121,27,165,88,9,64,36,73,226,225,208,11,234,143,62,189,
198,240,232,185,38,185,149,134,135,5,5,242,144,207,138,155,24,10,172,136,185,168,228,12,80,224,244,210,94,232,167,146,220,81,55,81,106,74,237,41,13,223,106,75,215,181,93,215,60,255,248,200,57,255,54,141,
58,167,26,181,16,133,126,127,149,16,65,112,254,86,191,92,183,215,71,73,208,40,249,250,177,86,237,170,87,164,134,224,253,24,231,181,79,111,48,119,17,46,138,175,22,146,7,117,195,29,149,57,135,66,153,173,
112,31,105,18,188,7,177,9,252,185,190,239,228,232,193,138,181,142,216,203,104,108,151,235,185,106,5,98,241,61,244,155,20,208,45,239,222,29,137,48,237,247,16,31,130,178,10,47,34,163,135,164,115,148,113,
123,14,81,146,197,16,92,86,67,190,149,112,210,170,52,76,133,176,244,2,223,166,145,18,137,155,193,142,155,74,178,29,242,186,124,33,189,51,104,129,252,243,162,255,253,185,78,229,36,63,224,99,190,185,98,
56,206,33,224,27,237,251,201,201,40,185,16,218,127,103,70,112,232,206,4,195,168,155,23,69,219,216,78,88,43,197,52,53,193,6,2,181,80,199,244,15,24,12,18,171,102,40,154,163,19,39,34,176,64,86,206,91,170,
7,49,114,28,238,119,5,241,142,131,56,115,25,4,1,253,57,64,67,184,76,53,84,17,235,142,210,211,35,215,165,169,181,27,181,212,27,163,45,232,252,181,45,168,125,14,58,56,119,173,206,231,90,157,207,245,202,
7,233,160,83,158,124,62,68,171,86,228,36,237,243,137,68,175,180,73,231,115,170,174,148,171,181,10,2,103,16,7,137,96,12,81,51,1,1,7,205,11,143,224,94,106,176,128,194,18,48,49,43,176,168,224,136,248,208,
212,140,150,87,67,253,180,116,69,60,95,238,63,200,172,100,221,145,81,5,175,145,151,9,11,207,63,16,187,109,23,233,54,104,184,251,117,208,87,82,146,177,99,240,9,241,121,120,28,24,31,134,11,201,132,105,160,
194,130,87,61,142,214,101,216,151,221,46,252,135,127,251,239,9,173,194,187,151,230,166,71,186,210,159,132,223,4,155,219,237,154,132,32,172,72,14,202,161,56,240,21,208,186,77,89,135,156,37,98,140,106,56,
5,145,193,74,72,136,185,29,250,177,66,109,28,232,35,178,25,132,219,221,100,91,52,78,4,6,56,38,115,167,24,221,225,5,228,133,251,71,236,120,41,147,114,56,12,7,225,61,206,8,24,113,84,156,95,17,36,68,16,49,
47,144,115,114,62,95,56,81,109,219,55,53,117,23,143,159,18,53,248,105,101,71,105,236,96,209,199,41,200,247,129,138,177,156,67,217,200,160,114,177,42,57,41,208,74,24,19,254,251,233,39,31,151,82,164,240,
40,48,142,70,112,23,236,78,124,126,150,21,90,149,183,72,29,177,30,158,46,60,144,38,153,7,54,81,221,50,76,101,206,3,70,67,177,33,188,115,46,247,32,116,1,255,181,200,12,217,125,159,29,79,20,242,0,26,134,
29,9,10,7,243,101,92,54,49,109,39,52,39,248,28,192,144,225,225,242,28,33,160,248,10,34,159,8,236,194,150,62,139,246,202,147,108,115,33,13,109,29,134,211,113,187,94,140,54,224,185,140,218,179,22,132,45,
164,221,52,232,13,19,107,156,12,226,0,105,162,40,241,196,241,24,51,87,65,213,185,28,79,123,8,151,179,192,216,46,236,60,132,194,192,144,93,24,60,22,218,207,54,65,129,139,147,130,196,188,237,193,58,147,
138,211,236,244,33,206,136,178,198,73,41,176,168,173,93,224,148,114,11,9,45,85,10,12,4,11,172,76,73,75,91,119,138,173,10,126,221,146,228,42,151,112,65,28,6,48,210,173,171,219,237,38,87,160,14,63,200,170,
211,80,102,247,71,104,131,225,181,221,142,161,57,30,42,76,125,213,110,36,39,237,240,31,99,61,140,93,181,52,206,118,11,177,110,56,85,253,192,142,66,88,42,166,226,112,96,175,52,112,11,237,104,70,227,44,
173,33,231,66,161,205,232,160,207,240,164,38,69,51,84,240,150,11,123,58,144,8,140,3,206,139,241,80,198,4,145,126,74,41,208,199,167,9,63,48,96,92,145,24,140,140,58,141,225,249,95,206,87,67,31,14,187,48,
90,72,0,30,187,10,225,35,224,43,36,144,65,201,60,165,188,43,139,179,102,91,88,239,244,54,195,241,25,241,49,142,0,130,192,138,174,48,167,241,118,190,208,45,166,2,110,44,117,66,166,75,156,23,131,97,84,237,
195,232,141,194,36,175,215,59,182,23,95,86,73,141,11,211,172,48,11,225,193,246,83,249,4,72,24,126,205,121,98,138,76,229,144,242,118,189,17,51,153,230,28,229,20,129,58,168,164,39,1,219,130,157,16,116,13,
139,195,57,204,50,58,148,136,174,145,163,168,159,162,128,243,135,135,247,202,109,9,131,160,168,58,105,25,133,67,225,55,249,116,115,177,69,90,109,203,252,137,242,186,153,51,16,173,168,41,165,138,79,228,
122,213,3,197,181,86,200,63,137,41,16,112,56,199,1,222,103,49,202,209,176,199,132,133,192,62,244,187,222,250,29,227,195,31,105,110,229,239,227,16,97,139,240,6,250,105,43,143,3,222,143,147,232,96,5,199,
164,96,82,161,142,89,29,114,220,135,195,174,147,224,64,53,24,138,140,18,49,236,8,86,25,158,125,34,242,11,221,12,95,249,214,67,105,105,243,177,226,16,55,188,205,233,51,7,201,206,134,18,238,33,122,133,33,
17,132,21,90,70,159,80,161,127,37,125,55,51,101,36,160,154,121,71,62,129,90,223,199,197,73,240,232,181,44,56,225,42,19,85,210,74,173,206,144,175,84,40,60,39,134,175,228,130,144,71,130,173,112,180,190,
44,130,10,39,139,31,99,145,148,137,38,58,134,4,70,240,134,69,254,145,84,28,199,129,211,110,153,157,37,32,180,38,194,143,104,43,135,105,96,122,35,58,233,134,201,11,192,167,90,133,70,131,40,142,250,72,102,
204,240,112,209,74,224,105,48,228,120,228,187,119,207,142,173,86,169,30,110,118,36,56,111,101,203,12,85,89,56,13,93,83,15,38,229,102,24,250,23,202,202,158,207,183,126,183,151,209,160,53,216,152,26,129,
209,188,147,232,27,99,34,240,252,67,68,165,116,5,146,43,252,11,140,30,36,189,4,61,42,105,34,108,26,86,10,226,38,237,128,57,79,176,5,120,202,237,58,56,237,161,252,242,130,241,209,91,153,70,132,117,119,
66,191,178,172,147,1,102,166,94,137,87,200,132,137,164,161,48,210,113,182,194,69,67,235,18,248,130,168,132,2,29,47,159,156,175,70,156,166,4,247,205,178,32,37,85,8,149,72,15,180,223,88,42,129,103,166,145,
239,214,9,208,47,182,188,2,11,169,133,178,241,50,3,198,12,131,7,23,68,49,8,31,170,131,0,187,219,97,64,68,206,25,172,83,251,152,98,34,61,215,56,230,10,58,252,14,11,87,155,66,250,38,17,177,82,102,49,37,
218,90,145,11,86,89,158,116,60,238,157,108,161,247,90,18,150,179,128,96,35,76,44,114,150,21,43,142,112,41,108,185,32,6,80,173,128,5,50,96,172,221,105,167,73,67,25,6,236,16,229,136,200,78,112,58,104,26,
101,199,20,75,167,12,58,204,138,201,133,207,48,96,194,190,182,33,243,108,86,229,102,210,200,192,179,200,156,144,12,7,9,36,164,241,87,48,98,183,233,244,244,196,236,205,170,71,108,83,186,92,110,142,248,
177,135,240,36,105,140,86,40,139,62,144,38,81,41,50,170,112,160,130,200,94,130,180,173,62,232,131,205,74,230,196,42,58,98,50,111,72,172,154,85,190,73,181,17,133,8,183,240,68,39,58,153,84,186,27,79,67,
22,54,122,5,149,11,89,67,102,142,5,123,43,134,123,36,230,165,126,10,162,66,28,112,82,158,46,212,210,70,194,200,22,71,18,118,175,152,20,18,140,163,97,20,82,252,209,108,42,11,93,214,70,51,211,59,171,89,
120,95,254,230,235,227,161,127,125,61,67,152,143,167,157,29,118,131,228,206,213,17,223,133,15,82,22,12,14,167,217,244,12,124,55,230,54,241,159,179,132,60,40,211,64,24,124,119,96,246,189,46,57,80,102,123,
162,217,84,206,62,50,183,72,116,109,154,164,185,131,17,94,120,88,242,51,243,126,98,55,46,103,42,11,168,252,72,39,128,251,199,211,223,84,130,162,233,238,47,19,209,96,123,6,116,121,170,236,133,76,138,191,
44,15,125,215,143,114,41,157,52,151,139,68,116,141,178,35,119,151,97,176,32,29,227,113,84,210,22,96,38,161,107,26,8,82,82,246,187,219,125,124,126,62,226,93,154,173,89,54,212,5,153,245,34,22,149,243,197,
251,221,46,102,66,32,245,255,162,108,159,133,130,219,53,49,243,1,237,128,159,89,148,53,138,183,246,80,220,130,202,76,181,81,41,255,69,98,232,237,149,121,182,51,81,25,123,50,40,113,189,92,35,225,115,250,
204,246,206,76,202,34,196,83,50,220,153,37,35,86,109,230,64,234,205,202,91,135,116,187,223,29,21,17,135,129,77,164,185,156,76,14,194,32,207,231,179,168,148,54,172,171,248,150,60,179,6,241,5,25,208,139,
41,199,251,117,145,122,134,95,83,24,90,43,8,226,250,200,72,103,151,222,103,29,224,165,34,90,206,183,25,145,18,30,82,209,45,144,15,65,95,137,128,131,21,42,177,40,103,40,7,145,61,22,186,118,240,86,240,85,
181,18,50,212,35,163,104,65,81,12,8,59,196,138,197,120,150,90,166,225,41,194,112,17,184,28,118,166,69,67,192,144,224,251,224,197,82,25,90,235,26,28,21,242,149,36,164,94,253,100,18,16,253,242,98,64,224,
22,10,202,253,52,137,76,194,20,118,218,114,147,97,131,30,172,107,43,31,49,60,171,219,29,240,125,88,78,184,30,18,111,234,246,203,229,98,14,14,134,200,128,83,254,213,254,144,195,87,89,140,213,233,36,248,
64,204,151,181,173,177,74,76,160,99,226,138,41,105,28,156,68,156,96,194,191,225,109,55,204,74,80,55,211,15,30,68,137,12,133,200,8,141,176,112,167,207,87,229,17,72,60,178,155,78,246,76,41,148,76,50,50,
41,159,193,236,235,125,236,25,69,207,4,194,59,98,102,102,198,14,202,14,50,94,211,47,202,119,246,86,154,216,30,156,89,101,10,75,167,250,229,139,71,103,223,87,153,172,12,185,154,22,104,48,5,110,216,76,77,
89,200,71,165,207,238,52,0,85,12,145,179,69,196,140,198,140,79,115,135,21,31,211,229,79,244,226,141,244,144,133,136,147,34,154,23,191,17,251,115,56,244,74,201,115,65,111,215,187,67,19,238,161,102,37,160,
135,82,108,80,25,195,162,37,22,225,112,84,242,214,137,95,193,96,28,49,236,6,17,59,50,251,72,56,162,130,151,91,13,121,20,23,144,129,210,34,191,129,182,95,86,140,1,80,85,194,33,196,122,24,207,86,222,148,
135,0,71,30,15,204,84,100,89,144,156,62,218,82,215,153,4,137,47,192,52,232,215,135,149,121,162,133,193,148,28,240,168,248,184,134,20,112,172,58,84,118,231,98,70,35,163,73,38,204,106,46,116,64,17,244,64,
37,147,55,40,104,2,63,80,180,78,189,227,8,213,10,62,103,146,137,74,241,163,42,189,109,92,35,23,154,175,8,63,16,57,128,66,188,48,82,169,5,96,78,2,130,233,223,203,99,160,79,80,151,77,90,141,22,142,215,43,
183,71,161,31,67,92,72,150,2,227,154,120,144,208,43,249,171,181,240,79,178,48,9,54,4,37,29,155,38,83,127,165,149,244,189,230,141,234,112,193,244,232,140,64,79,175,215,27,145,112,68,243,152,244,241,176,
247,76,20,142,5,5,13,165,14,191,40,50,211,100,120,223,121,59,37,212,3,102,235,188,27,243,13,125,39,20,141,142,242,42,221,172,175,205,38,31,131,124,123,59,139,227,17,136,67,137,33,189,108,154,101,99,134,
80,251,121,35,173,155,197,13,85,218,151,51,33,148,193,124,63,143,204,106,42,167,193,45,24,84,125,154,182,111,209,158,57,80,183,115,200,133,230,129,48,143,7,177,46,84,103,41,32,112,206,180,78,249,117,38,
69,208,154,218,127,72,58,228,216,156,174,103,128,3,81,131,230,23,120,200,208,52,136,83,160,28,203,70,231,65,20,214,103,114,193,44,227,82,139,79,86,144,251,51,219,156,27,3,193,255,59,157,142,76,48,12,99,
75,183,51,85,226,57,156,78,7,195,64,198,9,140,102,145,1,35,248,198,126,163,248,93,197,52,82,22,176,43,130,95,224,215,193,95,95,118,125,143,65,224,149,98,43,22,192,120,30,39,11,7,185,164,211,76,83,85,111,
248,9,97,28,115,233,233,86,102,22,72,202,41,173,130,36,68,29,79,167,10,227,6,127,68,211,174,157,111,147,105,76,26,229,98,162,191,210,76,201,73,107,68,33,4,104,68,127,114,186,85,74,170,182,247,32,26,70,
18,229,106,131,202,41,174,204,217,58,131,134,71,97,136,68,176,140,218,40,110,208,252,105,74,48,37,199,52,218,185,36,179,184,26,159,164,188,8,99,33,60,136,240,170,203,120,24,44,198,245,122,183,218,82,254,
135,184,13,4,22,130,217,147,54,201,124,225,219,249,130,125,21,236,71,41,150,93,110,132,237,241,0,153,67,68,196,93,220,23,135,248,30,124,14,86,5,247,115,178,90,218,36,94,18,87,93,57,120,218,17,45,205,108,
2,184,60,24,250,97,48,7,138,45,131,109,132,5,91,14,119,18,139,141,130,51,234,199,113,9,221,72,242,18,233,176,78,34,22,98,137,225,34,9,224,130,87,66,218,138,211,252,170,68,160,83,34,58,150,131,131,69,4,
132,197,252,46,13,157,16,234,52,206,248,135,93,77,133,240,197,157,168,243,106,200,13,177,40,67,217,20,142,135,29,246,149,152,12,147,66,212,196,144,199,85,105,27,177,51,10,65,212,147,112,142,66,3,40,93,
149,162,176,123,35,92,75,135,148,141,168,179,66,118,74,219,105,72,178,166,33,242,188,78,109,195,185,205,142,45,49,198,82,27,43,85,71,195,164,192,205,164,202,36,205,29,253,21,214,44,216,91,49,0,25,121,
30,14,251,146,105,238,62,57,83,76,24,104,178,133,22,175,118,54,35,207,129,244,76,113,38,100,33,7,157,223,75,58,61,191,130,69,30,202,144,81,144,171,204,72,44,165,170,169,131,132,129,148,114,54,72,56,11,
100,21,204,91,36,196,0,27,207,121,123,61,115,3,200,42,11,25,142,84,181,139,152,27,14,115,8,98,206,15,164,146,142,117,200,188,35,76,163,38,151,162,241,246,97,165,124,170,241,207,12,146,235,120,38,25,236,
154,135,145,200,116,39,42,115,37,218,103,118,199,149,204,210,166,173,154,173,51,116,33,71,234,130,77,33,149,19,9,94,217,219,183,125,81,168,93,216,238,148,209,196,120,1,26,140,188,226,195,75,194,63,53,
176,82,230,158,202,206,8,28,126,176,193,36,110,79,51,156,73,8,172,50,244,139,180,245,4,191,23,14,148,108,89,41,128,143,73,1,45,130,164,41,137,199,172,147,178,234,144,81,47,194,161,105,120,62,12,56,49,
123,65,151,31,251,192,83,27,205,66,204,161,198,126,103,252,28,86,15,159,222,239,25,236,36,2,58,24,211,80,42,58,193,30,158,72,195,145,16,81,241,51,105,77,9,114,150,45,152,58,72,148,115,37,254,149,235,83,
12,125,38,197,77,118,172,141,210,151,129,71,119,148,119,78,92,173,98,220,160,220,105,176,143,62,9,177,195,234,96,230,226,67,37,115,58,250,174,77,91,136,21,4,51,40,149,134,32,99,180,78,84,196,147,196,183,
218,234,190,148,125,16,92,159,43,173,232,32,9,111,14,22,108,238,9,65,114,163,52,222,238,34,151,208,72,244,204,232,18,144,156,100,59,228,121,202,247,164,207,93,149,100,240,194,153,122,187,138,122,63,39,
250,147,204,2,180,226,96,228,202,168,85,35,38,90,76,206,14,195,5,249,181,12,140,235,106,82,209,81,122,20,148,101,157,202,144,66,222,118,56,236,119,66,99,211,3,6,9,138,39,240,88,196,25,230,56,16,105,200,
165,67,198,3,120,14,72,197,239,26,17,35,87,6,140,56,13,242,75,245,205,165,241,160,202,94,226,247,117,75,156,118,80,52,64,51,15,137,37,191,123,28,113,96,205,113,128,163,44,123,201,125,168,249,56,134,96,
198,240,181,123,19,190,47,144,135,43,7,7,186,115,158,205,182,164,154,31,198,43,93,196,218,148,96,177,86,107,24,235,190,239,175,194,161,161,44,137,102,105,60,20,234,0,93,62,215,242,161,68,248,100,124,0,
185,16,100,193,193,28,143,251,43,221,95,209,218,20,45,77,99,234,204,207,85,180,40,174,144,70,56,206,107,182,209,193,128,212,42,54,227,32,146,115,161,34,149,221,110,151,19,170,193,33,86,114,9,159,242,4,
102,211,233,155,176,1,248,228,237,154,83,2,164,4,231,12,9,55,255,120,60,96,111,152,168,106,27,250,126,43,173,166,1,51,71,42,120,209,216,91,171,108,4,137,152,179,80,152,188,159,145,20,92,141,85,15,95,225,
19,97,209,115,238,159,58,17,113,236,248,168,237,234,250,86,126,51,3,218,29,43,16,86,175,136,97,44,156,223,195,113,31,182,138,59,166,219,196,239,50,154,103,243,87,73,166,172,128,102,99,117,178,206,66,226,
73,205,163,214,195,89,139,17,33,132,120,25,197,86,42,185,85,181,185,242,207,181,100,140,80,168,204,195,243,187,103,249,34,36,11,40,132,169,132,141,71,29,215,150,38,92,222,32,14,48,70,140,253,137,2,52,
75,237,164,170,84,68,110,150,179,239,45,17,9,76,238,140,140,99,211,181,248,236,237,58,56,113,140,129,44,78,105,210,118,4,101,83,130,67,77,149,30,82,178,184,243,53,162,229,38,123,18,138,9,4,251,206,165,
199,42,233,152,152,62,178,93,37,92,31,114,26,134,153,208,190,235,20,160,229,64,183,20,12,65,76,146,126,121,188,221,200,94,221,152,7,75,142,40,117,170,51,3,210,1,189,112,201,4,199,95,224,222,170,56,134,
142,137,1,93,121,89,30,46,17,19,58,99,251,142,229,93,33,103,229,241,40,12,186,173,155,124,28,50,170,31,36,113,99,230,245,32,178,191,222,133,67,37,227,103,120,175,245,197,198,46,47,148,216,97,104,106,167,
177,103,8,158,67,108,81,206,153,69,165,13,162,155,202,163,221,16,66,140,229,70,56,201,115,211,120,132,52,213,143,202,72,107,165,85,57,209,36,221,199,204,240,44,214,178,146,8,60,179,114,253,232,109,139,
32,13,1,169,163,11,68,169,23,107,57,239,228,93,25,36,196,114,64,107,136,190,204,130,164,204,193,146,243,102,176,74,142,124,37,135,144,201,28,202,165,96,115,120,185,112,252,61,109,106,153,180,33,225,132,
77,72,18,53,167,79,252,138,250,237,237,2,103,228,145,35,178,215,14,241,84,236,202,239,13,60,86,139,127,72,184,131,106,195,204,149,41,86,85,142,10,27,132,67,89,99,92,13,215,48,163,27,205,240,55,237,130,
178,109,78,140,142,63,182,237,187,239,222,171,244,134,14,240,247,101,140,142,93,156,47,52,106,103,217,30,201,83,43,111,215,235,40,82,226,131,163,71,165,144,236,251,47,134,199,107,229,240,69,12,102,222,
93,8,97,52,234,28,117,46,246,170,91,50,169,73,39,34,58,153,197,248,48,35,228,196,233,38,229,218,49,225,150,217,174,202,193,7,252,41,8,175,248,52,113,93,140,13,210,127,33,154,65,19,217,221,149,198,192,
194,177,12,105,68,100,198,196,108,171,164,182,180,97,225,20,179,195,81,236,49,52,186,81,17,24,86,168,182,164,186,11,170,36,243,172,21,133,60,14,87,46,11,86,94,44,58,35,86,106,241,100,164,9,50,96,172,120,
98,62,189,34,183,26,217,176,39,73,136,154,133,74,147,42,40,233,95,217,21,38,23,64,89,7,195,207,24,86,134,193,16,0,183,237,86,79,155,178,160,137,195,37,157,26,116,18,41,96,242,51,9,21,143,100,102,211,247,
161,128,64,66,27,58,113,16,10,10,209,12,7,245,38,231,209,73,135,5,235,69,23,84,48,5,132,221,216,182,88,18,75,213,144,159,44,82,222,221,65,188,241,111,99,134,82,166,244,24,7,145,226,205,167,112,125,115,
62,98,70,2,21,208,102,215,246,118,187,192,251,80,37,230,72,146,161,97,61,165,83,22,98,78,83,37,187,110,0,192,142,188,183,130,201,101,170,33,57,73,206,23,43,92,14,91,64,44,254,66,9,163,30,55,157,138,111,
135,255,134,99,34,95,140,42,92,73,187,40,76,99,197,169,156,85,1,43,151,125,248,62,149,220,212,132,71,245,88,74,180,184,101,18,148,116,23,242,207,131,51,77,29,203,132,234,101,90,42,6,28,133,45,50,125,20,
5,85,185,98,101,33,11,6,158,84,146,70,163,235,71,20,124,222,36,40,69,179,211,146,138,147,168,249,169,77,58,86,191,208,119,88,46,151,187,181,47,86,161,145,107,231,10,20,86,31,210,245,204,41,55,63,154,31,
145,33,243,209,85,122,183,80,253,95,82,158,250,38,189,56,113,39,73,130,155,132,138,181,87,110,236,164,242,231,36,95,150,136,189,194,26,106,232,198,96,151,230,230,164,176,242,98,57,125,22,54,124,203,64,
26,118,165,35,242,73,21,38,239,108,190,94,174,78,126,185,206,163,48,114,160,191,38,229,69,96,12,48,105,132,177,140,164,152,236,142,122,172,1,65,126,50,167,177,77,96,112,147,0,28,114,213,127,178,244,199,
209,60,84,146,80,158,73,129,71,52,167,209,201,41,149,112,22,242,15,152,246,41,202,130,24,26,33,212,164,80,158,33,219,76,166,219,172,50,185,89,112,68,113,60,237,229,118,114,101,229,155,5,215,93,150,218,
88,72,193,168,184,44,16,168,74,36,49,171,142,102,171,70,81,250,144,236,164,110,98,133,49,77,33,92,115,35,202,42,93,33,248,173,104,153,32,63,195,218,217,228,121,68,115,161,39,72,178,58,37,237,142,2,201,
244,67,241,153,61,108,147,70,114,62,85,18,49,199,141,245,36,64,35,57,235,136,161,92,175,87,121,146,180,117,230,136,40,78,174,108,239,177,112,5,171,122,22,215,29,138,1,73,199,223,193,39,137,34,82,153,19,
71,19,148,219,136,70,103,112,126,21,178,38,19,2,21,78,150,182,28,49,26,241,155,68,76,128,254,30,17,166,184,221,132,241,179,69,246,120,165,42,184,217,167,131,107,174,218,191,148,81,158,170,126,126,62,110,
97,16,211,179,220,191,37,225,192,238,250,150,106,145,137,179,52,138,108,234,210,108,152,110,40,19,67,195,197,230,106,27,126,205,142,162,78,77,62,120,50,228,44,189,22,5,186,178,147,42,219,84,120,39,77,
118,148,26,74,206,213,25,199,132,160,178,246,249,124,17,210,30,148,196,231,84,85,131,107,112,63,61,136,133,149,248,179,165,232,161,216,42,126,233,156,137,164,102,69,58,88,99,17,82,83,27,132,54,64,161,
112,87,79,208,122,89,221,152,27,233,32,222,21,163,68,90,155,202,225,30,77,97,21,33,194,16,37,120,91,189,32,208,198,137,57,9,11,7,127,185,89,11,99,122,42,253,206,45,49,162,157,8,253,212,196,95,248,5,16,
119,124,224,170,210,243,40,61,66,130,186,242,2,41,147,239,184,81,165,132,134,209,163,221,165,134,53,178,12,175,85,150,80,106,65,103,187,87,132,68,25,142,55,206,76,48,219,39,158,187,74,227,130,72,26,197,
214,141,99,181,150,81,202,36,231,167,42,161,136,78,156,227,235,246,135,222,129,136,231,111,56,213,133,102,110,173,65,63,86,117,36,178,191,133,171,225,77,82,128,239,174,215,51,69,136,128,84,140,111,175,
111,154,215,186,41,217,57,119,11,41,182,62,24,166,84,71,177,187,46,151,171,108,36,231,32,118,196,106,148,126,17,117,210,44,114,151,244,72,214,86,214,63,40,99,131,73,242,64,137,247,196,26,126,90,110,30,
14,45,223,34,78,193,152,179,134,164,242,101,114,20,246,3,174,166,24,32,174,241,141,135,227,206,113,188,201,252,220,91,249,35,174,56,180,227,170,106,232,69,199,92,136,141,189,234,170,236,119,221,44,38,
32,44,215,162,76,148,241,201,186,105,220,54,193,113,181,51,78,24,36,254,231,140,46,252,56,249,233,92,153,176,133,114,33,119,127,161,9,139,114,106,72,21,111,155,118,16,127,9,195,211,134,217,192,81,125,
12,247,187,11,167,92,183,161,150,23,209,68,136,97,152,33,121,152,3,97,23,242,67,131,99,66,233,50,14,209,36,67,167,240,73,151,203,165,145,228,28,38,17,14,29,133,224,129,240,84,23,250,211,179,42,77,66,163,
244,121,45,134,165,157,29,60,97,79,16,146,86,105,224,155,73,208,171,201,51,28,28,166,186,72,201,195,102,45,43,233,72,147,140,221,114,96,241,245,36,51,87,155,46,131,143,64,192,177,31,125,95,43,107,184,
154,111,158,171,158,77,134,214,132,51,200,248,238,221,17,225,40,180,36,196,207,5,210,52,22,170,159,177,67,128,51,140,13,31,93,207,200,2,150,81,165,135,153,91,54,50,17,86,27,84,117,70,68,223,87,136,209,
67,155,137,163,191,223,237,54,104,37,227,56,216,121,131,12,202,5,47,73,28,213,180,33,228,242,213,232,70,244,42,111,130,196,154,131,192,141,108,100,160,105,10,102,72,13,212,66,85,27,243,79,114,38,70,113,
76,135,145,192,254,85,20,210,164,56,75,28,189,66,219,166,156,74,79,50,73,225,236,177,161,204,124,196,12,77,105,81,43,59,20,239,63,156,245,53,76,176,40,45,23,76,162,160,44,144,31,86,24,190,115,159,1,188,
127,183,223,57,29,174,104,8,114,100,52,167,216,168,39,73,238,229,252,32,165,226,119,239,109,35,132,176,17,191,15,129,24,182,145,230,114,131,101,229,85,198,199,40,93,209,150,17,123,5,162,86,67,19,179,26,
75,166,112,200,46,155,123,75,221,84,87,78,73,25,45,50,65,133,152,52,243,107,12,194,167,45,47,134,133,84,149,93,80,205,101,241,139,127,240,91,126,56,87,115,89,173,186,75,211,17,101,71,103,185,75,209,60,
59,54,238,168,235,203,245,234,12,12,201,234,35,14,65,246,92,99,161,40,63,70,88,61,76,14,94,114,162,93,51,231,113,217,212,97,80,124,164,118,85,144,237,134,200,185,37,87,21,148,73,254,169,56,214,162,133,
76,196,63,86,31,115,71,129,138,254,40,131,244,179,133,231,175,114,121,75,102,183,251,251,48,148,132,189,87,105,76,122,58,51,203,71,10,37,184,111,230,200,73,126,69,18,87,32,85,139,150,15,143,212,118,16,
254,42,182,13,10,68,29,34,230,191,248,203,95,110,37,95,193,112,7,151,229,193,12,198,187,17,59,94,46,55,216,197,64,129,167,202,16,135,150,234,150,12,121,156,145,125,175,124,67,189,154,6,92,80,119,98,150,
175,175,111,238,28,244,232,230,192,177,70,217,32,121,125,34,231,87,182,247,165,49,115,198,147,210,26,170,3,15,194,231,28,73,153,201,205,132,165,220,116,169,18,186,65,53,13,252,74,44,69,174,39,163,220,
54,23,241,227,245,27,108,174,210,30,97,101,80,2,119,201,120,64,206,211,48,47,194,114,86,233,26,45,116,93,65,126,131,214,221,7,255,65,226,228,161,177,4,170,29,150,251,37,81,152,149,156,34,67,229,1,59,224,
21,151,188,51,173,94,87,88,62,121,79,22,150,84,44,174,92,76,14,11,236,7,54,34,70,211,124,104,112,147,170,2,148,126,226,146,41,87,193,135,147,40,67,151,122,81,52,27,20,118,48,221,142,201,168,146,156,250,
167,118,38,86,160,138,128,65,198,134,142,111,90,177,253,95,95,207,108,244,162,99,69,103,13,86,172,193,67,115,167,44,156,145,166,204,189,160,168,88,221,187,98,28,77,47,178,171,73,90,46,235,5,114,35,44,
3,174,153,5,158,59,170,101,84,60,40,101,12,95,94,188,196,197,5,206,69,110,131,165,247,185,167,143,164,99,50,93,170,32,229,97,231,50,70,136,58,185,31,74,236,138,194,51,49,4,39,37,182,23,117,108,16,19,52,
188,123,62,69,115,20,101,90,213,214,101,146,96,23,230,123,217,99,52,142,163,94,4,60,65,114,205,10,117,106,144,9,87,117,183,123,38,49,91,167,214,1,52,103,87,250,65,139,220,8,140,67,137,105,135,53,197,93,
131,81,123,128,198,222,19,246,102,24,238,183,203,109,158,238,126,63,181,120,94,41,97,192,139,11,169,53,127,37,5,91,21,198,147,116,213,8,111,54,93,174,81,181,132,33,91,197,168,65,25,184,169,17,152,66,74,
52,173,73,99,26,25,194,170,81,138,31,206,33,68,67,53,57,57,106,21,30,80,95,229,242,99,189,118,187,30,239,241,3,103,113,102,93,251,31,69,172,114,217,181,146,224,217,54,227,148,177,142,72,63,62,224,54,213,
56,152,4,201,152,22,95,157,228,200,228,43,181,165,49,141,29,211,37,93,61,215,81,229,96,224,116,220,247,187,221,66,126,185,73,29,140,168,211,86,172,229,163,158,255,143,98,122,118,122,192,196,160,180,48,
177,155,210,240,102,79,226,117,210,87,37,65,4,146,149,177,178,80,216,136,136,116,81,169,129,70,43,72,156,132,89,102,101,111,55,183,66,152,165,5,12,193,144,168,175,194,60,193,76,238,218,71,54,58,102,56,
16,3,107,212,111,140,228,24,122,3,244,206,112,74,148,206,101,253,0,219,215,48,250,150,153,19,251,149,254,142,42,89,90,207,166,116,102,60,22,119,210,96,59,204,241,138,208,64,105,104,51,117,130,220,90,167,
137,238,183,235,136,65,174,153,96,47,143,63,55,32,140,142,229,148,168,117,92,11,199,31,230,150,157,131,204,12,20,157,43,72,158,171,135,247,37,88,111,181,15,214,74,151,139,158,52,26,183,135,132,99,186,
42,45,72,126,32,52,133,179,46,46,245,130,75,105,26,149,93,33,155,60,117,83,99,16,67,126,24,157,131,165,36,95,79,176,47,188,135,186,20,126,220,184,189,19,79,135,73,3,185,136,34,153,240,47,173,87,9,15,24,
237,148,210,251,135,25,87,190,27,79,38,122,204,82,123,155,105,181,183,17,239,11,14,100,145,163,101,151,51,214,118,86,42,147,166,82,46,168,119,216,49,170,191,75,177,70,152,252,117,12,196,89,68,177,201,
205,96,76,235,85,139,147,78,21,234,179,187,9,86,106,112,65,50,172,164,137,102,66,225,187,60,189,100,155,90,136,196,9,171,129,133,16,40,177,24,75,126,20,127,169,162,41,137,230,50,165,50,108,213,214,180,
241,209,29,38,84,82,108,146,6,243,45,140,108,97,236,59,50,187,166,105,127,216,155,202,196,99,37,57,85,76,203,242,81,23,54,216,153,176,64,41,244,141,170,208,129,72,178,172,46,101,126,50,185,27,42,147,216,
250,7,169,86,128,129,157,10,231,161,5,91,118,51,106,220,145,35,35,82,24,165,186,147,84,176,69,236,147,69,130,34,159,228,78,42,38,193,172,58,222,62,228,141,88,38,14,160,84,98,117,207,125,133,212,229,166,
82,60,75,159,120,52,197,59,31,222,160,246,121,236,200,146,227,172,228,80,54,40,201,129,3,104,178,82,80,238,228,209,47,208,121,109,119,20,49,201,160,151,197,180,209,196,59,93,203,247,104,36,129,163,128,
45,175,54,162,131,171,99,220,11,39,215,242,230,166,164,57,22,43,12,86,169,32,3,142,60,108,54,125,13,62,87,124,23,7,95,234,5,69,86,157,139,197,174,215,220,75,137,220,23,69,27,120,250,32,154,170,73,137,
42,174,211,206,197,66,145,78,47,178,135,173,68,28,236,245,197,224,134,100,30,0,157,3,90,244,69,21,5,220,20,188,219,11,225,76,164,72,152,149,75,70,26,145,32,76,116,118,193,67,77,83,48,27,186,162,79,15,
125,122,135,165,25,76,11,186,94,174,74,189,175,62,143,120,231,150,173,112,229,238,186,239,219,98,107,145,233,62,47,210,206,194,241,83,110,209,164,158,143,51,169,58,35,123,192,148,240,26,148,123,42,253,
32,213,138,23,138,146,231,173,134,129,131,63,80,176,205,153,204,213,189,130,250,11,183,77,204,100,7,165,213,188,25,248,162,86,25,68,241,81,152,207,112,233,229,163,83,162,4,186,112,201,186,58,112,197,93,
79,63,192,41,144,186,202,172,96,83,109,130,250,25,173,2,48,101,103,131,99,99,185,99,181,207,56,117,54,34,64,113,2,12,212,9,29,53,155,201,172,200,120,185,141,201,53,212,130,125,108,156,156,213,113,145,
178,195,51,200,127,212,32,152,108,184,94,46,248,195,133,14,123,211,81,209,186,91,65,214,145,84,129,130,181,228,94,179,120,192,244,112,123,149,218,34,199,126,180,116,253,174,53,30,82,74,160,196,113,203,
140,122,246,37,96,170,98,177,178,103,150,145,13,223,70,219,254,243,229,186,108,192,8,20,48,70,114,185,222,157,89,205,85,45,2,143,196,135,108,89,95,180,80,57,170,139,97,9,125,220,137,183,76,134,32,221,
40,232,169,197,124,115,21,75,68,159,77,216,228,190,111,172,130,73,47,144,54,244,10,197,28,146,57,246,139,180,244,34,16,82,99,185,170,30,95,195,246,142,162,185,73,70,22,175,58,94,103,177,149,220,62,113,
217,24,168,80,11,206,179,107,103,169,104,114,206,158,109,24,47,151,59,235,93,231,229,174,211,197,170,122,229,178,49,220,73,104,183,64,187,232,42,29,215,187,42,122,146,71,215,208,119,71,104,238,38,186,
57,16,145,206,190,177,113,152,91,27,208,188,147,114,31,195,219,219,217,7,150,237,5,88,218,55,155,126,234,202,61,76,68,6,190,112,211,76,193,199,245,149,253,26,104,169,241,101,63,255,173,159,145,46,148,
159,233,86,19,2,141,182,42,214,248,242,242,230,188,24,196,114,75,191,44,14,178,187,182,125,244,218,53,237,204,221,224,92,74,122,83,29,180,121,109,176,249,134,172,164,248,24,67,250,216,111,125,65,69,125,
86,182,115,191,223,47,18,9,215,77,155,0,41,142,67,48,12,200,134,127,172,204,168,33,67,112,199,76,50,84,163,224,4,179,101,118,57,45,23,9,236,25,45,117,33,196,93,169,253,239,249,87,178,185,45,217,168,57,
199,237,166,120,242,239,9,108,218,59,252,235,95,126,225,126,2,153,97,182,241,25,36,71,235,250,245,183,223,49,239,44,94,0,107,35,196,92,42,178,113,225,87,230,178,25,49,180,72,151,18,99,240,120,60,200,229,
105,229,215,145,67,201,238,60,235,98,99,233,119,202,39,30,182,30,188,201,244,42,229,127,39,119,208,205,178,73,135,11,177,53,226,152,134,62,167,167,39,204,16,239,135,50,178,229,82,57,1,81,74,213,54,53,
66,227,23,37,14,86,53,105,201,32,159,75,82,93,34,233,146,30,33,97,162,47,169,164,24,95,161,12,112,212,226,174,185,31,202,214,214,57,170,155,237,234,132,50,233,232,236,120,197,15,136,91,71,194,74,17,115,
98,27,175,176,50,75,80,46,251,165,34,14,184,143,41,243,32,231,148,157,247,89,4,154,201,168,190,74,76,153,181,83,239,53,43,151,214,74,129,103,246,118,51,241,248,46,60,176,39,185,119,81,198,157,157,107,
33,65,216,161,145,33,101,105,125,3,17,194,159,72,107,149,71,38,242,205,106,124,199,36,16,156,142,187,90,28,24,72,122,68,155,118,71,75,217,220,204,176,210,252,47,231,155,168,143,147,134,29,16,17,185,115,
4,28,94,219,43,127,60,218,245,114,46,76,104,67,115,62,95,180,100,73,156,133,104,70,128,179,5,164,111,50,255,85,186,0,36,119,221,83,7,69,13,130,110,46,222,255,252,124,186,147,10,85,152,179,99,130,40,139,
74,218,74,229,201,172,124,132,225,151,217,46,213,150,109,81,101,37,203,89,169,56,69,17,195,169,193,54,48,43,165,147,63,140,217,14,186,66,209,62,142,186,1,20,162,29,100,42,83,110,44,32,20,220,190,178,43,
250,4,143,229,106,77,237,224,234,246,235,55,53,133,58,159,239,175,47,152,53,98,189,209,85,106,91,168,145,27,81,39,19,8,213,188,96,34,242,160,94,203,149,136,3,8,29,220,169,73,201,33,38,60,17,251,110,109,
211,220,180,140,101,201,138,128,217,122,149,149,193,247,145,232,47,189,120,183,22,171,5,155,17,30,112,85,128,27,174,56,49,189,217,7,254,194,100,183,178,216,162,144,78,38,187,40,53,146,3,198,42,99,58,155,
133,146,215,174,28,239,58,103,254,160,234,2,26,38,44,173,206,157,188,54,71,73,76,130,210,44,87,88,125,231,147,7,198,204,44,37,81,145,98,245,128,198,74,147,189,182,74,234,204,61,171,25,254,140,10,44,131,
243,106,8,97,232,151,168,100,213,76,9,55,204,17,171,138,101,187,24,235,34,38,202,38,80,81,253,94,51,85,58,136,193,155,155,10,73,244,149,23,43,9,83,113,213,42,131,153,91,47,25,230,42,160,104,8,152,118,
221,164,72,76,157,191,88,248,93,9,243,38,226,117,189,245,194,48,221,116,82,165,182,116,121,12,60,136,16,17,93,194,214,209,65,229,130,154,84,169,206,19,204,110,155,171,109,146,40,6,211,209,246,39,167,79,
138,13,250,103,65,239,70,245,72,142,15,205,197,134,176,192,83,191,179,251,50,217,188,202,127,50,231,35,40,43,169,135,72,173,99,175,18,80,229,30,216,101,215,14,33,131,15,118,35,50,196,69,186,197,0,55,101,
48,50,75,116,153,230,163,244,195,177,112,48,255,102,139,51,64,87,25,3,43,191,136,34,112,128,206,29,154,139,100,238,177,11,89,241,117,216,196,113,204,205,94,241,162,98,171,160,82,151,209,173,23,72,53,39,
50,55,10,159,19,175,108,177,14,154,100,227,150,65,92,114,59,188,208,149,3,135,164,142,68,110,41,32,161,169,54,214,39,85,218,71,239,158,94,94,206,174,186,184,92,134,143,159,97,227,213,36,41,4,88,98,70,
161,145,56,176,210,231,36,139,184,104,49,20,234,108,114,31,68,17,149,209,82,113,78,33,179,205,158,219,74,100,47,218,237,141,138,31,76,80,20,166,215,41,124,155,141,135,70,197,22,6,213,212,16,180,244,174,
233,100,36,31,186,202,80,86,25,156,246,48,65,13,235,155,235,2,4,213,210,33,158,131,109,25,171,3,24,27,139,129,63,211,10,49,5,32,187,100,110,36,158,249,205,55,47,34,170,42,88,150,17,16,66,184,250,6,128,
140,197,126,247,254,5,255,61,30,159,148,179,165,167,32,240,165,132,81,115,148,168,66,235,197,39,210,165,123,170,22,152,109,50,40,231,76,184,150,65,4,20,242,20,212,110,80,229,206,174,26,84,5,229,154,241,
124,229,230,44,26,163,157,23,118,77,171,28,250,69,197,244,132,165,118,196,191,9,56,12,106,28,102,168,196,113,60,15,157,9,243,90,56,8,145,248,78,209,89,54,107,15,66,180,211,152,155,139,185,107,109,110,
39,191,30,14,59,199,204,112,96,143,135,94,244,135,85,14,1,41,53,190,150,33,154,39,191,181,205,97,8,114,191,159,83,22,171,73,157,9,109,197,40,101,234,5,152,137,228,194,128,115,43,112,154,73,150,3,53,194,
42,86,119,52,96,181,132,28,13,37,145,213,227,84,45,168,213,40,122,149,12,68,215,51,80,154,10,239,54,79,40,117,167,134,166,222,78,42,117,146,222,181,107,238,192,205,173,50,116,156,233,123,55,74,120,83,
3,108,119,91,168,200,193,36,124,82,12,172,10,176,34,112,118,104,230,117,139,128,129,158,73,123,201,202,46,102,174,74,187,7,234,88,99,250,139,170,87,221,162,81,104,91,233,68,13,78,146,143,119,169,18,18,
87,53,66,148,92,72,80,201,208,24,51,86,246,6,254,97,186,59,35,172,114,21,18,115,224,46,9,178,19,16,195,146,115,246,230,29,166,241,206,245,210,239,131,50,206,108,226,81,230,182,195,171,33,202,141,166,55,
146,108,163,18,0,85,47,76,110,65,225,142,53,198,51,153,38,148,55,104,101,111,1,172,233,16,17,231,196,48,172,61,212,59,47,227,19,42,141,152,220,122,204,209,44,253,118,33,92,219,229,22,92,27,223,118,16,
93,123,227,154,186,34,183,127,239,177,162,239,63,188,154,131,165,232,70,58,53,150,46,186,20,143,98,49,78,102,142,178,217,131,226,213,51,110,130,46,108,213,63,76,130,90,192,222,43,95,52,58,194,176,247,
52,138,148,232,4,121,69,16,158,44,17,65,19,100,143,237,246,157,43,204,11,54,63,41,220,162,135,206,161,160,5,177,53,74,243,234,57,73,49,4,93,134,229,192,64,204,163,217,237,75,252,182,76,36,84,102,217,245,
37,126,51,107,199,176,1,106,213,107,214,109,238,40,153,175,122,81,181,143,189,175,173,233,85,208,225,68,148,183,55,157,7,171,104,151,223,253,74,92,240,162,243,223,177,83,185,104,49,230,239,148,66,142,
68,106,33,146,11,207,130,153,82,50,79,153,165,112,173,105,233,28,158,82,137,216,222,90,13,147,216,115,59,40,107,196,206,84,164,99,98,14,226,68,149,41,115,219,23,183,102,48,195,202,28,4,195,9,230,177,54,
42,235,113,149,17,9,236,226,44,56,112,169,152,179,103,244,175,202,200,224,163,250,195,43,71,74,178,69,163,248,252,243,131,222,106,80,193,141,38,205,80,75,46,1,19,129,108,125,229,61,36,81,149,94,147,8,
202,234,209,51,207,176,190,91,254,39,32,160,133,84,151,49,83,90,213,141,105,53,59,51,176,180,151,199,141,125,175,148,177,113,161,78,145,111,60,169,28,133,18,117,18,225,220,228,40,230,38,165,62,149,38,
110,17,190,227,68,27,93,106,120,229,194,69,109,162,10,171,121,103,241,84,231,194,161,49,88,105,42,151,151,186,93,170,113,2,229,38,103,59,40,74,67,187,71,220,146,116,73,68,89,102,2,20,211,170,183,1,33,
132,139,82,115,209,141,131,85,23,66,187,191,87,190,69,40,146,36,93,211,138,187,192,232,238,234,72,93,191,178,117,134,144,175,229,188,187,138,93,125,81,12,199,125,103,83,103,215,158,4,119,14,115,27,12,
103,175,24,34,52,236,111,223,168,93,174,28,169,66,164,63,34,68,42,20,111,156,92,81,45,250,149,49,170,234,136,22,111,169,186,145,57,103,43,195,58,59,77,132,67,74,194,191,26,225,85,234,2,166,246,178,163,
25,19,206,169,66,37,61,61,29,217,35,76,100,80,3,108,91,35,86,129,71,247,187,239,227,201,249,11,7,171,234,176,178,228,139,97,36,93,231,243,77,136,114,221,139,76,60,103,35,78,31,164,223,181,166,200,100,
146,169,130,64,162,83,201,13,195,130,243,63,6,201,28,3,19,202,170,184,153,230,251,236,176,141,42,37,205,141,88,174,119,97,99,131,155,52,82,239,12,106,217,52,77,157,168,156,162,157,18,229,97,107,122,181,
147,169,243,213,10,73,134,178,216,160,136,96,230,138,187,111,50,19,53,205,238,43,228,213,84,231,5,72,253,171,145,124,55,128,17,5,45,7,253,129,105,254,93,110,227,99,92,144,21,78,41,254,224,18,34,254,209,
112,50,21,193,237,142,209,219,127,233,84,29,106,162,175,200,37,165,11,162,189,160,203,60,231,43,65,180,160,78,200,29,143,187,82,4,93,119,162,245,42,155,28,227,246,53,16,76,162,148,22,67,89,40,181,109,
84,103,151,202,221,49,105,213,106,114,64,23,37,130,56,207,253,190,19,165,200,189,38,147,43,160,157,16,118,192,228,134,41,15,192,32,74,217,141,108,12,53,185,190,142,94,101,77,105,178,242,122,52,237,31,
232,76,4,23,114,84,101,109,247,26,113,75,84,179,174,184,149,71,9,48,86,19,54,54,52,17,128,228,2,22,3,93,19,153,97,139,194,235,232,186,102,159,50,127,144,149,254,82,74,94,80,146,17,100,170,6,133,166,88,
62,86,244,211,51,90,85,137,183,55,144,68,44,85,221,210,30,109,153,232,16,138,127,39,222,190,59,156,205,238,10,206,222,13,41,192,198,25,120,118,255,5,219,74,172,59,99,70,5,189,111,111,231,28,81,137,151,
6,43,30,148,249,34,116,127,27,112,24,225,16,153,24,230,139,4,224,223,186,177,178,187,64,61,238,75,202,137,232,194,95,180,230,170,103,44,164,64,226,92,22,129,49,117,106,220,97,139,144,107,167,213,109,37,
218,69,148,23,71,53,144,9,126,108,49,137,77,198,139,71,141,169,80,175,89,104,217,146,61,148,231,38,95,27,18,172,176,69,21,47,212,115,163,44,50,77,57,184,161,162,40,234,140,84,220,213,203,69,2,46,130,204,
174,147,26,8,136,145,148,253,85,119,145,216,177,113,152,239,144,99,99,133,164,194,14,156,47,162,171,13,45,0,155,46,150,110,108,70,24,76,199,162,216,58,231,80,164,102,245,83,206,37,153,70,88,220,131,217,
226,64,80,157,97,52,239,15,81,184,236,130,67,58,154,117,29,133,126,37,85,80,47,182,41,158,167,50,121,172,31,96,90,85,162,196,106,109,137,158,220,17,187,39,132,16,89,231,166,170,197,86,60,21,54,64,111,
217,212,82,48,219,236,251,105,172,19,241,169,179,210,53,46,228,117,192,225,101,98,173,10,149,54,181,62,14,145,97,102,88,127,243,152,114,185,25,59,20,6,215,239,73,82,26,95,125,80,46,38,103,82,203,96,45,
116,241,196,100,134,168,179,181,62,122,185,233,191,200,91,149,67,45,236,199,142,87,229,208,173,105,218,106,201,119,90,100,122,45,244,60,12,129,29,217,236,146,11,48,170,219,186,152,115,139,167,85,29,67,
84,252,149,157,10,1,198,149,237,142,251,28,50,175,173,176,142,158,180,33,20,101,4,148,173,101,171,94,242,169,168,174,156,32,88,106,21,51,137,15,137,253,47,13,170,213,149,239,228,168,12,12,168,103,188,
122,190,117,141,160,113,230,93,8,21,232,120,170,247,39,211,119,78,13,186,17,154,216,232,141,27,170,109,104,79,166,185,172,107,166,174,103,44,230,39,63,254,248,237,237,189,9,243,48,142,31,62,188,81,125,
174,37,244,83,45,212,111,43,96,43,213,138,42,46,115,46,168,180,217,94,157,144,21,214,171,75,155,216,162,79,85,165,118,29,215,220,145,35,103,90,114,55,217,42,183,184,200,9,137,162,34,18,66,96,31,214,106,
97,71,76,83,168,160,6,91,50,192,216,217,130,54,95,189,110,113,136,70,102,114,124,201,73,220,238,166,97,126,86,137,29,118,168,155,139,121,75,76,20,106,73,215,153,142,228,122,98,183,34,97,75,24,241,152,
200,12,144,55,16,115,145,75,105,114,72,84,255,187,248,119,255,239,43,211,194,24,7,86,13,171,37,176,213,12,68,93,128,238,174,2,217,69,120,20,41,230,203,42,52,115,21,2,198,113,3,52,204,156,181,142,119,88,
80,153,215,33,221,97,15,197,140,150,71,211,27,82,133,229,225,153,218,161,234,57,181,166,151,47,56,101,54,23,31,219,81,70,238,182,92,14,177,153,68,29,134,124,189,226,194,120,208,16,34,118,223,140,129,50,
23,32,206,249,6,201,148,41,97,4,221,139,141,246,94,70,235,61,119,142,208,89,211,234,250,166,196,199,253,127,176,17,36,205,13,179,98,69,181,239,184,221,116,177,64,190,95,206,132,93,95,201,103,224,149,157,
166,6,34,85,205,230,31,185,231,180,139,10,86,94,61,53,234,178,160,85,134,162,80,147,202,58,251,156,249,18,57,78,219,8,131,187,244,61,58,240,186,119,119,200,28,186,74,221,160,103,165,125,130,7,224,218,
68,137,191,122,19,138,48,235,132,189,123,255,140,106,230,228,218,79,21,230,240,60,232,86,7,166,39,33,113,141,12,12,239,227,40,115,239,218,135,14,202,23,74,150,89,165,211,235,255,230,235,111,20,239,199,
190,239,125,211,8,49,102,225,246,226,147,149,91,183,15,223,82,50,251,190,1,210,165,100,119,237,248,228,134,38,162,117,26,163,99,63,191,144,12,205,168,192,147,183,201,185,192,95,248,14,155,19,185,187,150,
43,213,221,187,218,99,107,228,28,242,114,30,225,53,238,46,238,220,134,211,129,162,212,13,110,7,167,222,37,193,85,200,190,218,110,235,15,60,185,89,180,9,182,173,90,253,40,253,31,38,89,27,65,84,91,63,164,
144,123,102,231,54,129,34,193,206,190,102,10,67,210,189,53,4,12,73,137,46,178,3,230,100,219,157,49,75,235,112,215,133,49,118,38,85,198,69,168,165,147,243,111,31,223,142,156,239,197,26,213,187,165,200,
238,220,226,252,20,150,73,21,100,44,135,107,76,231,96,93,99,190,241,213,188,33,241,27,23,145,103,169,56,121,177,147,74,217,85,4,58,165,220,172,128,132,6,221,144,176,184,137,110,46,112,85,236,110,136,2,
79,63,157,142,209,87,51,22,225,118,29,92,133,207,202,159,192,30,248,162,74,155,69,109,63,40,229,234,29,155,121,135,182,190,125,241,126,159,164,116,180,15,58,74,10,145,39,113,250,43,25,111,95,184,144,124,
37,163,163,103,149,15,55,31,94,94,71,94,13,84,169,20,156,21,161,82,10,147,171,129,115,47,6,29,120,185,127,229,131,230,148,43,63,68,152,100,46,68,44,109,230,75,239,119,53,221,163,221,81,197,248,234,130,
132,213,232,170,139,11,227,247,231,209,151,125,57,6,127,64,174,78,58,194,69,116,91,84,113,143,169,124,51,231,164,170,187,174,82,55,88,178,131,152,128,83,75,46,174,215,186,85,168,243,85,201,115,37,184,
135,25,11,53,46,202,205,234,117,49,167,163,48,65,116,186,189,72,124,191,213,38,73,225,184,130,140,131,186,130,213,190,217,196,252,51,106,116,177,182,23,55,198,146,154,119,182,178,17,99,4,42,204,55,247,
249,230,151,187,178,70,173,170,79,205,194,84,21,111,147,107,28,9,63,149,102,64,228,158,233,74,16,8,247,137,111,175,23,108,134,193,25,121,140,133,185,2,236,11,167,98,49,191,211,197,60,186,146,167,144,76,
204,8,66,237,58,179,30,101,187,151,117,235,67,179,245,3,78,236,249,121,131,210,122,125,61,75,243,69,171,244,89,248,203,60,171,155,73,204,23,200,26,115,80,103,31,198,101,240,51,176,28,106,244,65,233,168,
89,16,89,185,79,152,59,156,202,142,210,75,116,23,75,175,145,24,143,179,114,88,149,91,123,154,245,35,157,238,156,90,235,222,99,111,111,215,210,247,120,178,59,65,153,187,147,140,108,203,179,170,0,81,117,
109,204,6,35,166,193,183,140,42,10,145,247,204,130,42,82,239,100,227,237,229,171,141,73,84,147,205,198,85,32,141,90,116,41,151,235,43,116,165,164,115,7,134,71,231,133,178,252,236,211,143,233,27,169,126,
0,19,22,127,137,102,80,129,101,48,96,148,59,161,229,155,143,72,169,194,234,48,218,186,92,221,200,192,45,164,124,129,19,139,113,89,37,159,123,162,170,156,55,220,111,183,28,106,146,133,25,69,20,33,105,221,
6,72,188,139,168,186,118,134,90,214,199,238,127,181,177,43,213,174,110,77,157,234,80,204,67,199,160,132,240,37,4,86,68,84,216,228,76,189,219,75,151,109,113,251,177,153,153,222,38,74,220,162,14,30,165,
74,54,16,158,187,74,212,60,105,203,76,124,180,236,120,220,127,44,159,32,250,161,88,236,227,233,96,122,153,219,236,201,108,101,230,107,148,103,225,138,121,95,48,84,231,158,208,52,228,198,171,182,122,128,
198,145,45,111,191,16,105,223,23,215,134,220,106,60,119,195,145,34,155,76,44,156,243,98,5,247,242,189,137,179,162,236,168,107,141,18,19,77,210,158,119,150,48,91,13,169,226,78,209,143,28,165,194,206,132,
200,62,196,69,237,218,212,234,14,135,61,243,229,79,166,241,171,154,47,8,2,190,153,88,97,26,113,220,42,232,213,170,65,119,178,125,247,237,171,120,102,171,141,253,172,52,27,111,230,21,233,165,204,140,127,
50,248,87,51,53,85,189,39,207,111,150,115,204,178,101,21,6,20,150,112,124,131,22,165,136,46,143,88,83,46,5,165,158,101,251,3,90,31,133,248,165,26,104,20,162,121,89,224,219,198,157,173,23,119,166,34,0,
34,254,176,189,24,19,142,156,185,86,65,248,29,126,226,104,74,5,211,245,108,10,198,196,175,250,116,242,236,136,133,96,174,132,186,248,149,170,95,99,155,141,12,215,168,34,223,83,213,45,226,201,165,180,74,
193,185,71,6,195,223,65,89,218,194,9,137,124,85,4,123,63,56,129,209,56,59,106,59,210,168,173,106,169,240,218,247,39,152,9,170,107,35,238,214,62,167,167,163,117,179,85,152,213,240,164,234,227,190,39,200,
95,149,185,205,181,129,46,251,123,46,139,182,207,102,245,199,134,127,109,107,246,95,182,24,162,168,171,135,145,238,244,109,121,93,131,123,96,63,90,93,17,255,174,179,53,8,57,69,186,58,73,95,176,158,97,
145,142,37,167,141,81,206,214,172,57,247,236,132,202,19,231,114,201,87,173,235,12,52,253,110,77,153,200,144,239,119,168,51,204,44,6,183,202,146,132,13,47,217,169,135,198,141,143,214,60,193,55,211,199,
224,171,152,68,43,184,185,224,193,78,102,116,245,105,229,11,14,51,212,107,104,93,73,27,177,123,196,202,81,22,0,138,154,21,233,197,214,196,72,244,107,106,174,113,206,217,74,119,109,160,92,116,149,89,164,
249,158,186,100,73,172,149,74,52,152,158,123,75,179,203,255,214,3,161,103,247,254,183,82,88,117,161,134,192,249,34,120,77,41,166,45,48,195,116,22,123,98,12,252,67,155,147,1,244,202,112,218,93,252,71,127,
212,197,117,33,87,207,187,187,171,169,147,75,166,251,199,71,133,176,232,114,220,97,55,27,117,97,178,20,95,242,38,171,151,76,147,30,40,143,200,55,20,37,221,235,232,90,97,131,53,206,86,222,68,167,183,15,
232,235,5,117,145,130,146,63,44,254,89,157,149,117,203,199,164,139,39,168,226,39,161,31,33,179,66,5,203,37,182,233,149,16,96,125,247,199,131,24,114,65,228,217,214,158,244,186,181,71,206,41,141,105,202,
215,86,170,101,98,169,254,208,253,229,114,175,52,55,231,133,4,146,118,130,208,106,149,32,213,197,198,10,113,15,109,85,44,140,140,155,139,164,116,232,236,59,48,220,110,212,117,192,138,45,86,247,175,113,
13,158,150,120,113,89,194,245,74,110,228,241,112,48,186,228,195,149,137,215,74,78,184,116,195,141,227,148,80,99,15,160,86,199,223,236,52,23,233,169,133,10,211,252,174,29,250,225,253,123,110,226,204,142,
172,114,125,49,133,239,190,253,128,245,216,237,246,228,183,22,190,222,62,56,122,199,146,230,252,175,216,1,252,161,148,98,175,116,5,220,126,215,249,218,1,7,190,254,26,183,43,116,72,233,160,193,39,116,218,
218,151,203,240,155,142,28,241,132,105,35,155,91,230,125,253,159,105,52,217,122,73,178,10,21,65,51,149,164,75,120,172,194,22,37,75,87,177,89,109,140,108,227,204,60,115,1,181,141,218,118,219,108,130,167,
170,26,145,149,89,110,209,25,236,247,155,96,42,2,217,44,228,44,170,215,1,239,223,59,236,119,31,125,116,186,94,207,106,206,63,199,173,163,125,241,184,232,254,113,109,212,170,139,167,4,188,114,177,89,204,
167,173,206,29,170,221,204,46,100,14,177,250,218,82,4,243,229,198,170,235,111,85,79,1,249,242,51,221,132,200,13,55,116,113,69,78,198,67,17,251,182,23,39,48,141,212,40,89,82,216,81,174,21,79,138,151,59,
143,164,142,68,127,181,75,173,89,125,149,237,47,185,120,137,86,188,53,30,34,74,127,48,39,194,101,2,157,72,76,112,163,93,110,230,154,227,78,77,222,204,150,84,245,5,67,23,183,27,204,101,159,242,166,115,
226,208,85,115,14,14,62,188,188,108,87,19,231,118,214,185,42,81,212,95,35,62,238,199,236,116,238,228,178,20,125,152,157,239,178,174,201,133,17,74,114,229,244,177,82,248,185,216,145,57,34,93,200,225,198,
83,139,79,199,168,86,112,10,65,149,135,152,54,199,170,116,17,165,235,198,85,34,78,20,193,20,33,23,238,223,213,76,91,129,106,46,181,87,65,59,213,182,43,64,95,120,107,35,163,48,4,213,131,242,183,129,86,
108,214,251,11,108,54,77,170,106,40,127,241,243,191,103,16,213,13,160,13,93,68,167,143,125,165,221,237,54,58,22,199,254,152,173,66,114,141,228,139,213,95,210,124,24,34,194,37,243,135,87,225,36,56,127,
106,218,54,232,250,141,145,113,156,25,118,178,41,226,58,95,229,221,38,51,242,172,131,90,165,179,21,232,147,79,233,182,8,230,59,184,189,128,90,156,212,226,189,142,4,40,212,99,70,131,90,15,199,93,150,86,
58,123,141,131,216,92,191,89,8,121,218,122,23,228,140,141,40,209,246,194,107,223,103,45,64,185,230,125,141,197,40,2,17,158,251,55,191,250,117,238,244,154,211,245,142,87,181,60,236,24,207,123,217,87,223,
234,179,178,189,56,123,54,251,156,251,106,215,65,149,165,149,136,3,246,113,83,54,16,62,140,141,211,231,18,46,213,254,235,90,45,145,132,27,181,218,167,89,20,217,33,98,206,236,115,39,222,190,250,49,178,
185,40,233,69,153,74,80,216,48,185,34,6,159,56,30,119,102,155,229,194,239,201,149,107,68,141,73,38,18,65,81,119,167,173,174,110,157,114,191,134,245,1,188,217,179,133,94,183,49,81,199,197,217,185,230,31,
66,101,91,79,11,33,138,149,26,61,249,246,108,21,17,142,234,64,117,51,212,194,108,129,111,64,94,102,159,118,119,201,176,221,37,160,83,101,2,44,156,96,181,108,73,238,168,37,46,98,237,134,62,170,96,159,213,
250,35,218,205,45,125,101,218,247,59,100,104,173,116,229,102,190,145,128,244,235,189,175,125,169,116,13,244,235,203,155,92,39,186,8,181,120,51,234,102,18,247,135,254,198,171,118,213,33,168,170,17,54,238,
73,136,146,28,69,223,207,92,155,233,98,165,83,185,91,132,14,175,239,67,198,54,239,116,223,184,175,215,117,10,235,209,208,126,246,157,54,226,200,240,254,129,97,156,221,74,104,97,189,236,53,39,54,86,242,
131,156,111,81,162,166,113,67,23,138,140,174,80,113,28,175,14,19,181,51,83,204,203,43,32,180,189,80,209,109,169,250,1,229,48,214,76,249,144,33,95,141,183,82,241,167,156,94,192,87,154,228,239,46,247,52,
32,170,154,73,171,187,170,178,29,182,111,211,81,233,81,41,126,39,135,129,221,213,205,71,38,171,44,66,191,24,247,40,142,103,101,63,126,53,45,70,12,89,106,131,126,215,15,155,231,109,20,208,23,134,231,219,
194,67,46,14,103,163,19,193,157,238,70,181,42,26,104,221,73,129,225,140,12,182,115,97,106,145,81,56,185,167,30,91,179,26,181,157,93,155,170,222,91,44,255,174,69,22,144,23,67,57,29,4,215,139,151,155,196,
102,27,108,107,104,215,22,247,1,101,37,151,29,11,103,205,125,209,208,214,135,102,201,215,43,170,177,68,161,174,140,238,165,226,150,229,110,15,19,84,2,102,70,185,143,12,190,70,215,241,150,110,146,96,38,
153,170,106,163,219,180,66,0,119,157,217,29,229,70,68,81,139,193,220,37,193,141,237,124,239,232,14,190,236,122,60,237,125,109,144,106,191,201,26,8,69,233,27,184,102,182,157,135,24,247,216,75,108,169,47,
133,154,51,99,91,88,103,40,94,94,47,66,124,89,92,37,43,80,241,82,110,21,178,139,136,108,95,156,149,89,167,211,9,241,230,36,255,56,178,111,123,243,198,134,65,177,200,237,205,240,41,99,176,81,205,156,232,
142,198,74,157,67,162,224,250,197,68,196,69,105,193,70,252,220,150,141,3,167,165,160,167,87,108,14,61,47,6,72,228,53,76,2,117,243,21,237,236,127,214,182,199,211,9,250,234,229,237,234,139,233,220,143,205,
148,187,202,237,200,155,182,191,223,111,186,162,172,252,243,63,255,213,126,87,253,244,103,159,255,238,239,253,1,142,68,36,108,152,154,158,101,244,149,202,225,139,165,27,32,53,107,221,238,251,187,196,178,
233,187,130,101,228,132,71,103,177,162,15,79,239,96,119,47,183,219,254,112,192,73,129,0,223,111,183,88,231,140,227,82,44,125,127,152,211,5,26,98,90,66,183,207,25,106,149,152,77,77,191,39,126,210,118,55,
34,185,205,48,175,112,220,175,55,130,252,211,61,97,125,149,59,30,241,228,111,190,249,176,63,60,227,35,161,172,199,185,216,29,14,211,245,12,39,145,87,59,244,253,149,113,204,65,87,156,222,151,130,1,121,
213,40,71,6,119,12,86,21,238,158,130,150,215,203,252,237,183,31,222,127,248,246,175,254,242,111,68,206,159,117,139,116,167,124,79,114,15,78,184,119,61,98,30,55,247,89,231,245,79,254,228,255,124,243,205,
251,192,188,120,55,204,73,183,205,170,198,56,164,203,125,104,235,18,103,238,62,204,194,219,130,174,35,80,239,200,27,244,220,46,6,163,247,140,127,16,133,221,216,28,64,87,76,133,104,246,24,70,192,38,54,
186,9,24,155,12,43,116,57,191,177,67,22,2,48,210,22,212,16,92,125,17,91,82,59,146,154,184,51,188,116,232,228,107,16,32,233,239,223,191,242,102,134,251,125,201,108,131,120,126,59,191,156,239,98,246,37,
124,143,180,56,67,21,185,8,16,0,242,59,160,2,111,151,27,251,201,222,110,188,230,110,97,237,91,211,86,255,235,127,254,217,87,95,126,176,146,57,158,222,237,246,39,85,19,101,158,116,220,237,143,47,31,190,
93,115,3,29,90,144,255,254,223,254,247,47,127,249,149,72,245,229,243,243,179,211,60,95,125,249,101,127,124,230,253,245,19,100,40,246,135,110,188,141,227,157,246,238,244,252,4,253,251,245,215,223,244,172,
113,238,222,127,120,133,175,3,209,245,149,135,47,47,47,60,5,93,159,120,3,100,188,94,238,56,42,79,239,222,189,255,250,171,167,231,231,239,62,188,126,244,188,187,92,134,211,233,136,199,169,141,230,218,118,
53,38,252,116,58,189,127,255,34,10,245,242,201,39,159,124,253,205,135,207,127,250,227,111,190,252,138,237,237,200,162,183,127,52,60,61,189,131,172,127,251,205,43,78,21,39,92,215,239,95,222,158,142,71,
198,28,112,217,213,240,39,22,57,39,247,245,87,95,125,244,201,39,218,138,233,227,79,62,193,199,33,65,216,80,122,82,110,193,219,238,246,251,147,201,17,197,31,253,209,191,196,49,121,121,61,255,234,111,255,
226,167,63,249,73,190,89,112,21,235,94,237,96,115,31,65,229,227,181,129,171,48,1,147,62,131,59,255,101,164,164,48,226,237,102,253,27,70,233,219,171,92,117,35,79,66,84,102,246,71,127,244,255,50,38,149,
156,144,217,90,103,184,108,194,156,106,57,129,153,100,163,39,68,8,134,219,32,120,12,112,95,85,122,154,91,127,27,11,222,204,14,175,73,209,125,203,139,120,108,147,159,150,123,157,235,122,46,172,32,62,56,
18,66,128,246,252,80,148,221,79,127,250,243,125,175,56,221,46,162,116,155,27,193,174,91,99,5,54,134,81,15,130,228,30,64,70,106,220,47,215,84,16,113,68,242,189,91,198,177,28,244,234,248,184,151,82,6,192,
253,34,78,182,187,22,184,13,252,227,50,228,202,31,145,172,25,123,202,22,163,240,181,139,249,206,47,55,195,176,203,26,182,134,252,185,13,252,52,42,91,189,102,16,135,245,6,91,115,100,229,193,151,49,119,
91,16,176,117,115,133,178,151,158,170,77,181,210,166,206,224,252,158,14,187,178,114,177,235,82,21,217,198,79,56,24,236,193,57,230,112,124,82,85,80,202,116,201,210,55,149,32,248,209,21,91,110,188,231,186,
215,85,55,30,208,109,210,219,86,149,142,179,84,68,193,97,235,124,185,147,16,188,120,168,219,97,217,97,172,102,181,61,116,179,76,118,170,105,91,179,37,29,7,187,97,148,246,102,53,73,116,241,229,179,8,11,
116,67,35,237,116,154,124,179,169,85,167,222,60,43,139,87,187,3,141,92,214,237,50,190,71,167,10,223,106,177,181,140,51,187,212,141,195,220,15,185,235,119,88,37,121,103,116,23,137,111,33,150,120,62,29,
223,61,61,125,95,26,165,45,50,53,211,7,100,195,173,31,173,213,146,169,105,91,228,185,186,154,218,18,190,101,1,204,69,78,150,71,95,2,234,142,52,65,46,134,115,36,143,246,169,126,236,131,15,232,176,246,225,
133,108,57,78,59,126,143,44,67,202,28,197,213,220,146,252,17,223,236,186,209,166,131,187,195,21,185,9,98,174,20,112,68,246,184,227,77,29,235,182,66,235,144,198,251,219,161,127,46,68,127,97,210,178,43,
187,135,31,228,70,93,235,198,120,125,16,169,31,24,64,190,221,206,9,181,173,11,72,78,243,255,96,65,157,174,42,182,91,224,124,69,141,174,29,200,157,122,124,203,119,218,2,73,247,88,123,48,1,131,251,129,133,
180,77,175,112,152,98,113,176,102,72,121,60,69,252,193,46,134,244,253,35,86,111,155,122,142,59,103,179,24,222,89,191,111,61,254,32,149,135,109,221,205,246,205,119,28,198,141,12,144,49,158,173,214,225,
17,199,122,213,116,196,130,239,110,183,244,90,151,63,208,28,231,249,243,185,15,121,26,69,102,203,4,39,224,22,247,6,244,122,235,197,244,168,151,53,239,63,223,119,154,30,1,90,145,91,176,100,48,104,211,193,
226,214,57,192,246,45,159,121,74,201,61,144,182,227,159,187,247,110,96,185,239,94,137,15,198,182,133,200,119,180,108,151,64,37,15,254,177,88,255,95,128,1,0,110,55,245,242,165,31,241,32,0,0,0,0,73,69,78,
68,174,66,96,130,0,0};

const char* MainViewComponent::buttonOff_png = (const char*) resource_MainViewComponent_buttonOff_png;
const int MainViewComponent::buttonOff_pngSize = 19507;

// JUCER_RESOURCE: buttonOn_png, 19557, "../../Media/buttons/Bilder/buttonOn.png"
static const unsigned char resource_MainViewComponent_buttonOn_png[] = { 137,80,78,71,13,10,26,10,0,0,0,13,73,72,68,82,0,0,0,96,0,0,0,133,8,2,0,0,0,43,115,106,94,0,0,0,25,116,69,88,116,83,111,102,116,
119,97,114,101,0,65,100,111,98,101,32,73,109,97,103,101,82,101,97,100,121,113,201,101,60,0,0,3,34,105,84,88,116,88,77,76,58,99,111,109,46,97,100,111,98,101,46,120,109,112,0,0,0,0,0,60,63,120,112,97,99,
107,101,116,32,98,101,103,105,110,61,34,239,187,191,34,32,105,100,61,34,87,53,77,48,77,112,67,101,104,105,72,122,114,101,83,122,78,84,99,122,107,99,57,100,34,63,62,32,60,120,58,120,109,112,109,101,116,
97,32,120,109,108,110,115,58,120,61,34,97,100,111,98,101,58,110,115,58,109,101,116,97,47,34,32,120,58,120,109,112,116,107,61,34,65,100,111,98,101,32,88,77,80,32,67,111,114,101,32,53,46,48,45,99,48,54,
48,32,54,49,46,49,51,52,55,55,55,44,32,50,48,49,48,47,48,50,47,49,50,45,49,55,58,51,50,58,48,48,32,32,32,32,32,32,32,32,34,62,32,60,114,100,102,58,82,68,70,32,120,109,108,110,115,58,114,100,102,61,34,
104,116,116,112,58,47,47,119,119,119,46,119,51,46,111,114,103,47,49,57,57,57,47,48,50,47,50,50,45,114,100,102,45,115,121,110,116,97,120,45,110,115,35,34,62,32,60,114,100,102,58,68,101,115,99,114,105,112,
116,105,111,110,32,114,100,102,58,97,98,111,117,116,61,34,34,32,120,109,108,110,115,58,120,109,112,61,34,104,116,116,112,58,47,47,110,115,46,97,100,111,98,101,46,99,111,109,47,120,97,112,47,49,46,48,47,
34,32,120,109,108,110,115,58,120,109,112,77,77,61,34,104,116,116,112,58,47,47,110,115,46,97,100,111,98,101,46,99,111,109,47,120,97,112,47,49,46,48,47,109,109,47,34,32,120,109,108,110,115,58,115,116,82,
101,102,61,34,104,116,116,112,58,47,47,110,115,46,97,100,111,98,101,46,99,111,109,47,120,97,112,47,49,46,48,47,115,84,121,112,101,47,82,101,115,111,117,114,99,101,82,101,102,35,34,32,120,109,112,58,67,
114,101,97,116,111,114,84,111,111,108,61,34,65,100,111,98,101,32,80,104,111,116,111,115,104,111,112,32,67,83,53,32,77,97,99,105,110,116,111,115,104,34,32,120,109,112,77,77,58,73,110,115,116,97,110,99,
101,73,68,61,34,120,109,112,46,105,105,100,58,54,57,48,57,66,49,48,65,67,56,56,67,49,49,69,50,66,57,57,66,70,57,65,65,48,69,65,55,66,52,48,67,34,32,120,109,112,77,77,58,68,111,99,117,109,101,110,116,73,
68,61,34,120,109,112,46,100,105,100,58,54,57,48,57,66,49,48,66,67,56,56,67,49,49,69,50,66,57,57,66,70,57,65,65,48,69,65,55,66,52,48,67,34,62,32,60,120,109,112,77,77,58,68,101,114,105,118,101,100,70,114,
111,109,32,115,116,82,101,102,58,105,110,115,116,97,110,99,101,73,68,61,34,120,109,112,46,105,105,100,58,54,57,48,57,66,49,48,56,67,56,56,67,49,49,69,50,66,57,57,66,70,57,65,65,48,69,65,55,66,52,48,67,
34,32,115,116,82,101,102,58,100,111,99,117,109,101,110,116,73,68,61,34,120,109,112,46,100,105,100,58,54,57,48,57,66,49,48,57,67,56,56,67,49,49,69,50,66,57,57,66,70,57,65,65,48,69,65,55,66,52,48,67,34,
47,62,32,60,47,114,100,102,58,68,101,115,99,114,105,112,116,105,111,110,62,32,60,47,114,100,102,58,82,68,70,62,32,60,47,120,58,120,109,112,109,101,116,97,62,32,60,63,120,112,97,99,107,101,116,32,101,110,
100,61,34,114,34,63,62,72,87,29,155,0,0,72,217,73,68,65,84,120,218,76,125,73,175,45,75,118,86,100,100,191,187,115,238,125,229,42,202,54,184,160,64,2,11,9,9,6,8,6,24,15,64,252,9,230,252,7,248,41,252,17,
36,6,48,96,96,89,22,51,26,225,22,151,113,213,171,119,155,211,236,157,59,219,224,107,34,247,123,167,158,78,157,187,155,204,200,136,21,171,249,214,183,86,20,191,255,251,255,166,8,33,5,254,196,162,8,69,177,
109,91,140,49,109,124,109,75,252,27,111,167,180,21,17,239,23,254,27,239,21,250,225,135,139,136,11,164,196,119,202,88,38,253,137,11,241,251,41,241,43,252,73,65,31,227,235,122,17,159,241,119,243,165,116,
9,191,206,223,184,3,239,149,112,119,140,1,223,10,252,23,71,200,251,132,34,60,110,225,47,234,34,27,175,160,91,241,99,1,227,245,83,248,154,65,183,214,21,252,179,15,198,15,24,54,93,54,191,133,191,53,182,
20,249,79,63,67,74,235,182,121,148,24,122,208,84,68,141,146,15,16,163,135,146,116,255,178,172,248,118,190,61,255,139,101,204,143,225,187,37,94,138,147,91,240,111,206,142,158,51,121,46,245,24,126,183,208,
117,245,25,63,124,240,160,185,88,156,157,252,24,24,146,23,146,99,211,56,240,7,94,213,240,117,149,60,203,252,22,223,14,28,158,199,230,183,243,163,165,125,126,116,103,60,24,46,178,79,122,208,131,198,160,
213,240,96,248,156,203,186,172,27,39,12,111,78,227,140,183,94,95,62,173,235,178,173,43,175,93,248,126,89,22,124,111,173,121,97,249,242,106,227,189,121,89,170,170,220,215,138,210,193,209,88,136,244,133,
60,108,60,170,166,220,87,227,58,243,249,31,178,22,44,5,155,222,178,108,235,153,113,175,114,93,215,168,231,127,12,131,34,166,159,130,203,86,110,27,62,80,250,94,41,121,189,227,254,207,228,57,242,141,240,
27,87,171,170,106,211,44,227,133,167,167,143,117,211,98,19,112,169,82,170,43,14,160,226,180,132,242,235,203,43,62,138,27,224,234,227,56,12,247,241,211,119,191,92,150,73,179,179,61,134,133,219,123,114,
240,39,183,36,196,70,227,227,3,104,100,120,50,124,216,223,242,63,245,174,254,88,55,220,97,219,71,26,185,25,55,72,162,118,16,22,105,213,86,13,190,184,167,207,95,247,58,235,201,249,226,254,74,145,118,89,
192,255,99,228,146,142,13,107,237,25,175,170,90,163,245,140,251,139,107,85,86,144,6,63,11,55,1,87,61,255,141,255,32,211,199,227,89,195,14,177,170,154,186,231,117,48,132,5,51,49,79,191,248,197,159,29,251,
182,237,58,78,237,50,61,61,125,192,158,163,232,99,46,244,80,184,65,218,239,151,244,183,166,137,171,131,73,41,185,20,43,198,186,46,139,212,10,119,16,94,111,154,242,62,12,126,140,101,94,55,203,61,175,183,
104,114,67,93,215,211,52,22,146,95,138,0,46,85,54,120,12,141,187,196,187,152,145,166,105,253,180,248,155,171,88,196,53,175,71,192,186,62,6,176,204,115,125,110,66,150,185,130,59,192,211,87,149,18,103,174,
220,66,49,175,36,32,245,174,182,10,188,130,223,203,60,124,249,124,125,125,125,121,250,240,227,223,248,241,79,61,185,149,30,6,79,178,72,124,48,113,149,87,18,11,254,244,124,57,30,219,247,247,219,60,207,
231,243,113,24,166,227,177,155,38,126,114,154,230,77,251,2,159,198,156,150,101,186,221,38,124,23,143,122,60,29,48,177,243,178,221,239,35,228,162,235,154,117,94,62,124,243,116,187,222,10,170,170,234,253,
125,56,28,154,113,196,80,151,195,161,155,230,89,194,69,81,194,173,159,158,78,111,111,183,251,125,186,92,142,184,239,178,224,10,237,186,110,77,219,188,124,253,122,185,156,151,121,233,250,246,203,231,175,
91,138,117,141,229,41,167,101,198,23,47,151,195,245,54,98,59,65,24,250,67,115,191,223,185,37,183,48,221,239,243,178,254,228,39,223,12,183,251,112,159,240,148,135,99,7,137,192,131,223,110,227,79,126,242,
225,229,235,245,237,125,132,48,81,150,245,117,204,6,30,36,245,45,150,153,51,135,139,14,195,245,122,125,187,156,255,70,83,55,150,225,223,251,253,127,244,187,191,251,247,78,199,195,231,47,175,152,127,204,
55,196,8,11,59,141,83,221,182,84,185,91,226,162,45,243,233,120,188,221,199,182,169,223,223,222,177,86,144,77,204,244,60,227,193,103,238,184,45,245,125,63,79,83,219,182,167,211,241,237,237,45,105,217,49,
209,93,219,224,67,218,70,20,42,200,228,243,229,116,189,221,250,174,187,13,195,161,235,222,222,175,253,161,199,10,97,229,234,26,59,34,76,211,132,119,239,248,141,49,196,226,122,29,218,182,89,249,117,138,
27,102,107,28,231,174,171,161,240,177,42,247,113,234,218,214,42,13,43,241,246,118,173,184,19,41,125,184,35,190,222,119,45,110,129,191,127,241,151,127,253,71,127,244,127,112,53,203,222,235,203,23,124,242,
227,211,5,255,44,255,246,207,126,142,81,254,234,151,191,128,234,121,126,254,128,173,139,77,243,15,254,254,111,254,246,111,253,70,223,29,108,140,101,155,2,151,177,134,2,139,13,197,62,85,24,50,182,64,25,
33,21,129,58,50,28,15,125,41,105,166,206,42,233,19,156,47,103,124,29,122,225,112,60,97,198,70,76,83,215,73,200,33,179,80,82,5,68,236,112,60,80,37,149,17,151,26,103,60,30,102,228,42,99,84,224,111,222,168,
226,165,112,83,92,246,120,236,33,85,167,99,111,53,61,142,247,26,170,162,239,34,181,117,137,245,59,95,78,144,62,136,3,214,163,169,185,126,16,189,182,174,177,254,109,211,97,47,226,195,216,137,144,184,190,
195,242,172,53,132,63,20,216,25,191,249,155,31,127,245,171,207,88,54,140,243,235,215,79,208,33,63,250,209,111,80,51,73,231,23,152,84,10,21,127,182,159,255,221,223,254,23,255,242,159,159,143,135,88,204,
199,227,225,138,173,129,193,134,128,251,64,40,176,103,203,10,90,16,122,106,105,154,26,107,139,43,226,55,36,103,28,199,186,105,48,29,152,28,126,50,4,252,243,233,116,194,84,98,82,214,5,127,84,50,40,23,44,
3,87,123,90,240,79,204,212,211,249,44,69,131,125,55,66,220,158,47,208,148,17,183,131,190,194,247,48,35,252,103,83,201,65,43,111,183,123,219,214,182,170,203,55,31,189,223,219,166,74,210,134,184,230,243,
249,98,205,2,139,220,180,149,197,243,199,63,254,13,124,29,214,7,79,20,36,104,152,211,186,193,152,103,92,237,175,254,250,219,182,61,252,211,127,246,143,255,243,127,250,111,24,18,166,101,94,102,59,37,216,
249,171,87,67,143,58,98,161,170,170,59,95,158,112,185,167,83,131,209,95,46,167,117,77,11,247,75,161,121,192,180,70,222,21,43,75,37,202,87,240,24,120,57,132,22,239,109,37,20,225,10,77,4,201,195,188,66,
150,160,234,161,107,161,197,160,164,237,1,5,106,68,206,111,205,41,43,240,132,54,189,135,3,69,195,74,7,155,117,92,38,110,10,92,183,109,87,218,82,104,214,10,115,33,79,45,105,214,160,47,54,236,20,26,95,136,
103,83,31,14,7,207,14,230,250,120,170,30,54,46,202,35,192,51,227,142,120,180,203,165,221,199,204,221,81,198,234,186,76,195,237,205,238,88,40,100,22,101,52,99,246,74,229,28,218,139,107,26,200,51,150,101,
130,252,227,197,121,90,176,75,240,77,60,143,125,135,96,39,45,37,124,6,251,118,134,160,214,85,148,13,26,238,119,219,8,172,140,60,53,126,86,59,191,128,228,243,17,185,200,248,99,193,187,220,98,203,58,114,
71,216,74,102,127,4,87,192,68,100,55,7,38,13,83,66,5,132,93,83,195,218,98,204,216,61,145,239,208,172,244,180,188,45,68,28,187,15,99,192,0,32,113,129,22,48,202,74,38,204,218,150,127,184,241,169,58,203,
82,75,197,103,193,223,52,85,88,103,218,126,142,88,58,97,41,30,126,163,61,177,125,112,1,83,130,105,193,112,177,69,127,224,254,36,42,206,219,16,105,139,35,76,11,181,38,133,173,212,87,150,247,183,43,254,
75,146,20,249,65,182,178,219,67,184,74,174,54,188,176,218,179,140,97,85,84,16,156,89,140,10,195,179,68,192,57,197,43,227,56,225,22,24,18,68,9,163,89,244,99,31,175,161,212,193,83,155,48,126,76,4,70,11,
73,196,98,96,169,96,52,241,64,93,215,225,41,249,1,174,34,20,101,133,139,81,106,232,206,209,27,240,84,65,181,36,185,111,120,1,106,115,184,13,216,110,120,198,93,231,218,119,93,233,204,123,166,104,29,37,
237,37,229,42,226,150,181,245,11,149,14,101,30,22,1,183,225,254,171,74,191,66,239,73,94,217,161,239,15,199,254,120,58,210,75,40,43,222,178,140,242,62,96,170,248,45,40,41,60,177,108,16,118,42,119,22,134,
62,12,163,229,17,87,88,169,137,75,206,119,197,21,134,154,168,249,221,25,207,172,129,66,25,79,184,32,125,11,41,20,139,36,198,96,71,25,170,218,174,32,189,121,216,111,69,27,82,155,116,86,236,79,90,169,97,
96,65,214,134,114,196,16,140,87,199,32,187,190,199,45,56,25,114,179,177,38,193,62,122,218,42,135,17,218,225,156,48,124,181,109,43,24,233,186,134,36,215,30,193,237,58,64,56,233,164,106,243,227,147,183,
235,21,207,15,219,185,45,27,159,158,62,187,214,135,11,66,7,29,222,44,215,126,91,223,238,215,254,216,66,34,110,227,176,77,107,221,215,195,124,47,83,185,164,181,170,203,98,46,182,176,53,69,189,132,21,255,
219,70,104,148,162,218,202,52,109,81,198,107,185,206,253,115,159,110,105,28,166,132,216,115,76,231,30,123,169,195,18,207,52,121,20,49,234,29,234,248,10,147,142,1,67,145,65,172,32,47,152,35,200,219,76,
233,163,184,121,106,232,97,96,251,55,225,208,119,88,117,57,247,16,246,25,46,200,159,253,233,95,40,226,129,75,209,60,98,55,41,60,174,121,69,207,82,179,14,67,39,55,156,226,67,53,166,152,21,139,22,104,47,
38,218,113,6,153,116,73,177,164,144,121,142,35,214,182,235,69,195,171,193,4,224,246,24,217,56,15,255,225,79,254,99,252,81,243,2,15,109,13,205,79,186,244,182,46,117,81,63,55,19,194,191,170,60,29,234,183,
184,222,49,158,113,235,151,162,254,113,93,204,27,182,199,80,175,31,151,248,114,159,79,135,242,167,107,255,87,195,107,113,79,235,125,137,75,250,119,79,255,250,159,124,248,135,80,67,20,204,113,130,132,180,
220,236,141,213,223,38,21,1,235,176,112,108,176,158,51,214,117,145,94,147,38,73,114,193,102,170,203,97,132,1,199,99,243,243,69,184,15,35,125,61,134,13,134,25,50,196,65,63,93,170,75,1,151,118,220,42,69,
142,221,93,213,84,132,114,106,74,76,22,62,102,101,198,41,149,122,146,102,103,188,10,249,108,104,122,41,210,118,234,70,44,211,180,226,245,195,83,247,139,183,247,80,199,249,155,234,62,76,161,139,225,16,
135,105,14,31,106,220,122,104,87,141,163,192,7,134,174,24,202,45,64,173,173,212,224,159,43,252,29,95,214,244,242,245,5,146,29,226,22,46,69,152,194,189,158,112,151,215,215,119,25,126,204,78,11,85,100,192,
5,131,196,196,241,81,150,13,79,126,147,81,135,138,196,184,236,121,193,53,197,227,83,238,164,176,225,91,195,111,162,186,83,76,2,177,195,38,183,241,242,172,37,206,148,244,180,39,98,145,246,102,12,73,157,
10,209,224,230,247,190,45,25,173,80,97,175,84,231,137,254,235,186,98,15,42,124,15,176,35,212,199,51,131,99,8,51,113,136,21,166,161,106,250,250,10,35,213,150,57,72,199,236,84,88,172,141,179,131,31,56,67,
112,159,241,98,87,4,152,100,248,231,13,62,16,49,89,152,196,208,87,252,163,47,249,1,188,219,151,14,76,171,27,92,187,132,112,1,27,161,105,161,28,199,40,121,129,125,160,226,41,28,26,64,100,74,56,174,163,
92,124,108,58,249,165,212,49,82,100,120,82,234,19,232,77,7,134,144,53,4,0,112,193,165,106,22,197,152,201,81,99,198,107,28,139,49,194,164,241,172,16,179,188,190,188,201,9,192,238,133,45,132,61,198,7,162,
162,125,8,72,13,47,3,131,192,91,11,45,9,97,42,196,62,156,208,251,136,57,90,165,141,228,46,109,196,178,48,41,120,114,120,142,240,105,206,117,232,21,169,119,101,56,16,88,8,211,70,145,217,146,188,38,26,124,
254,198,235,136,121,49,65,244,174,74,205,20,254,230,90,206,145,209,230,76,55,34,200,69,162,63,137,237,108,144,12,223,134,181,197,255,211,51,93,17,181,193,48,5,154,26,62,228,102,43,134,207,192,177,90,36,
17,180,119,161,144,217,156,229,196,38,77,64,181,67,52,69,101,204,41,131,16,148,41,197,41,136,247,224,137,79,19,214,98,161,81,175,52,83,52,64,147,12,18,228,139,106,76,222,144,62,3,131,77,161,176,27,182,
46,112,40,233,97,111,19,85,126,40,102,238,91,97,60,225,125,9,207,53,133,8,19,132,41,107,20,197,64,58,12,33,70,77,37,167,12,177,63,151,46,220,54,254,134,172,221,82,248,50,225,187,85,81,203,145,153,141,
239,104,120,81,72,72,66,16,11,123,130,125,180,131,33,24,216,172,97,35,94,195,72,24,36,10,90,65,96,180,24,82,224,42,174,136,63,154,43,116,216,125,22,80,33,175,184,203,72,97,180,61,43,50,248,84,42,158,190,
244,29,148,63,2,136,18,222,1,46,209,31,14,248,8,134,149,210,247,240,168,193,26,44,3,164,9,226,184,112,43,39,120,149,88,56,65,102,240,89,161,243,194,112,131,218,88,249,228,7,109,153,97,213,92,96,190,55,
10,84,163,77,183,104,10,240,10,166,12,191,183,144,101,106,219,241,207,97,227,172,97,163,109,97,120,189,71,133,94,116,181,182,77,17,97,148,114,129,121,166,99,69,175,178,32,196,33,191,148,129,49,6,138,61,
132,169,194,126,196,168,20,169,4,73,134,220,247,227,1,151,128,15,96,160,115,21,72,162,71,160,123,104,63,112,19,22,103,81,74,95,190,124,134,253,187,15,119,123,116,208,115,111,47,239,80,123,25,12,147,100,
91,86,23,5,165,68,130,86,58,108,20,108,122,89,209,99,194,115,117,151,54,66,82,94,102,110,214,79,19,5,181,147,128,52,92,24,78,199,109,205,147,50,108,198,69,57,89,144,178,69,115,179,105,87,226,221,235,66,
221,132,47,190,47,208,61,176,56,26,0,71,78,7,29,174,6,87,37,9,165,43,160,122,49,30,24,41,67,55,2,60,3,228,94,78,92,245,126,189,193,119,103,176,122,232,104,88,82,130,139,123,189,33,74,155,55,57,58,89,219,
238,72,121,21,109,218,233,116,87,54,108,144,2,124,174,109,154,72,37,13,169,131,211,88,217,108,89,92,33,183,25,9,14,150,63,205,247,74,3,47,253,152,173,41,100,10,99,197,14,12,207,21,1,242,99,12,111,107,
120,170,57,35,152,130,111,26,62,54,133,66,211,116,168,36,47,63,208,68,83,226,140,44,218,98,141,69,79,83,182,194,54,151,117,81,25,45,19,94,38,84,63,56,52,91,17,154,96,230,160,161,245,80,244,15,57,48,163,
229,130,201,219,174,161,246,28,38,41,86,2,16,73,146,120,58,245,130,250,5,233,18,159,136,6,116,169,174,21,137,8,3,166,34,32,246,186,40,110,98,40,176,33,230,162,146,51,64,1,205,70,123,161,159,74,114,199,
104,155,82,83,106,77,105,248,54,91,186,174,133,82,120,30,42,248,56,4,230,190,157,248,228,183,133,214,10,79,251,203,145,51,5,225,242,147,227,55,254,155,188,197,82,184,174,252,150,209,116,76,223,23,125,
23,147,117,93,225,251,24,231,181,79,111,48,119,21,46,138,91,11,201,131,179,202,21,149,57,135,66,89,172,112,31,105,18,124,6,177,9,252,185,190,239,228,232,193,138,181,142,216,203,104,108,151,243,185,105,
6,98,241,61,244,155,20,208,173,31,62,156,137,48,29,143,163,0,252,74,225,69,100,244,144,180,143,50,110,207,33,74,178,24,130,203,106,200,183,18,78,90,149,134,169,166,113,185,22,19,119,13,30,178,38,60,199,
231,255,245,72,209,128,62,130,110,226,239,141,31,192,111,76,208,184,134,215,37,188,45,252,167,247,221,85,142,18,166,50,74,109,65,106,78,149,108,67,192,29,237,251,201,201,40,57,17,90,127,103,70,176,233,
222,9,134,49,212,90,21,109,99,57,97,173,20,211,212,4,27,8,212,82,135,215,252,41,105,89,34,67,209,28,157,56,17,129,9,178,114,222,83,61,136,145,227,120,191,43,136,119,28,196,39,151,65,16,208,159,3,52,132,
203,84,67,21,177,238,40,61,61,113,94,154,90,171,81,75,189,49,218,130,206,223,240,168,144,139,86,83,134,61,181,201,253,129,193,198,46,155,52,53,248,193,223,86,55,86,201,214,217,152,145,251,154,95,135,230,
250,194,125,29,142,80,4,165,92,173,77,16,56,131,56,72,4,99,136,154,9,8,152,42,67,2,8,238,165,6,11,40,44,1,19,139,2,139,10,142,136,55,77,205,104,121,51,212,15,59,3,213,249,126,189,255,32,179,146,117,71,
70,21,60,71,158,38,76,60,223,32,118,219,174,210,109,208,112,247,219,168,91,82,146,177,98,240,9,241,125,120,28,24,31,134,11,201,132,105,160,194,130,87,61,77,214,101,88,23,40,150,127,255,183,254,109,119,
32,180,90,94,232,224,149,109,9,101,133,121,189,207,99,29,43,232,73,196,89,169,130,118,95,199,251,12,197,129,91,76,253,218,140,165,156,66,120,168,208,175,115,125,174,227,153,250,13,177,88,221,17,216,167,
31,43,212,198,129,62,34,155,81,184,221,32,219,162,113,34,48,192,54,89,58,197,232,14,47,32,47,92,63,98,199,107,73,189,18,21,246,194,123,92,250,158,94,175,243,43,130,132,8,34,230,9,114,78,206,251,11,59,
170,109,251,134,174,70,197,237,167,68,13,126,90,217,81,26,59,88,116,4,10,242,125,186,174,177,156,183,24,4,13,42,39,171,162,55,128,173,203,173,142,223,63,62,126,132,70,128,14,130,71,129,113,52,242,193,
96,119,98,245,68,43,244,149,8,9,68,161,43,235,9,190,201,192,141,211,172,21,173,18,28,220,67,67,252,40,49,231,1,163,193,216,240,84,65,7,227,202,163,208,5,252,182,200,140,217,125,95,28,79,20,242,0,26,134,
29,9,243,139,231,101,92,54,51,109,39,52,39,120,31,192,144,65,118,228,57,66,232,113,11,34,159,8,236,194,158,62,139,246,202,147,108,115,33,13,109,29,134,221,49,220,174,70,27,112,93,70,237,89,11,194,22,210,
110,26,244,134,137,53,78,6,31,11,210,68,81,226,142,227,54,102,174,130,170,115,61,95,142,16,46,103,129,177,92,244,48,83,48,48,100,23,6,151,133,246,179,77,80,224,226,164,32,49,111,123,176,206,164,98,55,
59,125,136,61,162,172,113,82,10,44,106,105,87,56,165,92,66,66,75,149,2,131,77,121,87,186,241,210,214,157,98,171,130,183,91,147,92,229,18,6,196,97,0,35,221,186,26,134,65,174,64,29,126,144,85,167,202,203,
238,207,182,58,34,19,238,201,208,28,23,21,166,190,105,53,146,147,118,248,101,172,135,177,171,166,198,158,180,16,235,134,143,170,159,150,94,56,68,9,166,11,27,246,70,3,183,210,142,102,52,206,210,26,114,
46,20,218,12,151,130,58,128,194,84,52,67,109,101,185,176,167,3,137,192,56,224,188,24,15,101,76,16,233,167,148,2,125,188,155,240,3,3,198,25,137,193,200,168,211,24,126,254,235,251,205,208,135,195,46,140,
22,18,128,203,110,66,248,8,248,10,9,164,49,88,230,148,87,101,117,214,108,15,235,157,222,102,56,190,32,62,198,22,128,211,137,53,148,59,80,188,189,95,229,22,227,234,141,165,206,105,88,196,211,6,195,168,
218,199,201,11,133,135,188,221,238,88,94,220,172,146,26,23,166,89,225,41,20,136,216,79,229,21,54,198,31,69,206,19,83,100,42,135,148,195,109,32,102,50,47,242,206,233,64,18,210,45,233,73,192,182,96,37,4,
93,195,226,240,25,22,25,29,74,68,215,200,81,212,79,81,192,249,195,197,123,229,182,132,65,80,84,157,180,140,202,143,39,5,76,138,207,115,164,133,168,40,230,188,110,230,12,68,43,106,74,41,163,203,85,174,
87,61,82,92,107,133,252,179,152,2,1,155,147,222,7,243,4,116,52,236,49,97,34,176,14,253,161,183,126,199,248,240,38,205,173,252,125,108,34,44,17,62,64,63,109,227,118,192,231,177,19,29,172,96,155,20,76,42,
212,81,46,189,164,42,156,78,135,78,130,3,213,96,40,50,74,196,176,34,84,234,195,61,17,249,101,156,133,25,236,187,214,139,143,25,103,144,85,150,78,159,57,72,118,54,148,112,15,209,43,12,137,32,172,208,50,
250,132,10,253,169,124,49,59,76,25,9,168,102,222,145,87,40,29,220,61,146,224,209,115,89,240,129,171,76,84,73,27,181,122,219,48,125,174,24,53,49,124,141,114,111,201,187,88,28,173,51,198,107,149,29,228,
140,51,22,73,153,104,162,109,72,96,4,31,88,229,31,153,26,129,113,96,183,91,102,23,9,136,157,93,131,185,211,56,143,76,111,68,39,221,240,240,2,240,169,86,105,4,97,206,245,149,204,152,225,230,162,149,192,
213,96,200,113,201,15,31,158,29,91,25,65,224,98,71,130,243,86,182,204,80,149,133,211,208,53,245,160,194,212,141,161,127,161,172,236,251,251,208,31,142,10,238,104,13,118,166,70,32,118,237,36,250,206,152,
8,220,255,16,81,41,93,129,228,10,255,2,163,7,73,47,65,143,74,154,8,139,134,153,130,184,73,59,224,153,103,216,2,92,101,184,141,78,123,40,191,188,98,124,244,86,230,9,97,221,157,208,175,44,235,108,128,153,
169,87,226,21,114,65,69,210,80,24,169,7,112,184,104,104,93,2,95,16,149,80,160,227,233,147,243,213,136,211,148,224,190,89,22,164,164,10,161,18,233,129,246,27,75,37,240,204,52,242,221,58,1,250,197,150,87,
96,33,181,80,54,94,102,192,152,97,240,224,130,40,6,225,69,181,17,18,226,4,12,136,200,57,131,117,106,31,83,76,164,231,26,199,92,65,155,223,97,225,102,83,72,223,36,34,86,202,44,166,68,91,43,114,193,38,203,
147,206,231,163,147,45,244,94,75,194,114,22,16,44,132,137,69,206,178,98,198,17,46,133,61,23,196,0,170,21,176,64,6,140,181,59,237,52,105,40,227,136,21,162,28,17,217,9,78,7,205,147,236,152,98,233,148,65,
135,69,49,121,148,183,93,104,93,219,144,121,54,155,114,51,240,251,103,77,229,106,242,80,158,44,67,42,14,70,236,54,93,158,158,152,189,217,116,137,253,145,174,215,193,17,63,214,16,158,36,141,209,6,101,209,
7,210,36,42,69,70,21,54,84,16,217,75,144,182,213,7,125,176,69,201,156,88,69,71,76,218,107,74,195,8,3,48,90,236,48,50,234,177,33,155,24,0,149,238,206,211,144,133,141,158,65,229,66,182,144,153,99,193,222,
202,170,144,66,98,94,234,167,128,58,139,28,112,82,158,46,212,210,70,194,200,86,71,18,194,252,34,147,66,130,113,52,140,66,138,63,154,77,101,161,203,218,72,248,211,102,22,222,175,126,249,235,243,169,127,
125,125,135,48,159,47,7,59,236,6,201,157,171,35,190,11,31,164,44,24,28,206,139,233,25,184,55,158,109,230,63,23,9,121,80,166,129,48,248,225,196,236,123,93,114,160,204,246,68,179,169,156,125,100,60,90,19,
168,157,165,185,131,17,94,120,88,242,51,243,122,98,53,174,239,84,22,80,249,145,78,0,215,143,187,191,169,4,69,211,221,95,103,162,193,246,12,232,242,84,217,11,153,21,127,89,30,250,174,159,228,82,58,105,
46,23,169,137,162,141,21,114,119,25,6,11,210,113,22,158,74,218,2,204,36,116,77,3,65,74,202,241,48,220,167,231,231,51,62,165,167,53,203,134,186,32,179,94,196,162,114,190,248,120,56,196,76,8,164,254,95,
149,237,179,80,112,185,102,102,62,160,29,240,179,136,178,70,241,214,26,138,91,80,153,169,54,41,229,191,74,12,189,188,50,207,118,38,42,99,79,6,37,110,215,91,36,124,78,159,217,222,153,73,89,132,120,74,78,
220,34,25,177,106,51,7,82,31,86,222,58,164,225,126,119,84,132,173,73,155,72,115,57,155,28,132,65,190,191,191,139,74,233,56,99,19,223,146,123,214,32,190,32,3,122,49,229,116,191,173,82,207,240,107,10,67,
107,5,65,92,111,25,233,236,210,235,172,13,188,86,68,203,249,49,35,82,194,67,42,131,18,129,185,80,194,248,246,9,107,166,213,163,51,148,163,200,30,43,93,59,120,43,184,85,173,132,12,245,200,36,90,80,20,3,
194,14,177,82,219,220,75,45,211,240,20,97,184,8,156,14,59,211,162,33,224,250,240,125,240,98,169,12,173,117,13,182,10,249,74,18,82,207,126,50,9,136,126,121,49,34,112,11,5,229,126,158,69,38,97,10,59,237,
185,73,99,222,49,167,10,248,101,3,86,169,59,156,112,63,76,39,92,15,137,55,117,251,245,122,53,7,7,67,100,10,68,254,213,241,148,195,87,89,140,205,233,36,248,64,204,151,181,173,177,74,60,64,199,196,21,83,
210,216,56,137,56,193,140,127,195,219,110,152,149,160,110,166,31,60,138,18,25,10,145,17,104,188,41,8,82,55,202,35,144,120,100,55,157,236,153,82,40,153,100,100,86,62,131,217,215,251,212,51,138,134,55,184,
225,226,116,113,205,247,80,118,144,241,154,254,80,190,179,183,210,196,242,96,207,42,83,88,58,213,47,95,60,58,251,190,201,100,101,200,213,180,64,131,41,112,195,22,106,202,66,62,106,82,32,70,9,162,138,33,
114,182,138,152,209,136,241,57,153,59,172,248,152,46,63,225,99,17,238,196,77,40,177,83,68,243,226,29,177,62,167,83,175,148,60,39,116,184,221,29,154,112,13,245,84,149,0,255,77,192,133,115,82,180,196,34,
28,78,74,222,58,241,43,24,140,35,134,221,32,98,71,102,31,9,71,84,240,114,171,33,143,226,2,50,80,90,229,55,208,246,203,138,49,0,170,74,56,132,152,15,227,217,202,155,114,19,96,203,227,130,153,138,44,11,
146,211,71,123,234,58,147,32,113,3,60,6,253,250,176,49,79,180,50,152,146,3,30,21,31,215,144,2,142,85,155,202,238,92,204,104,100,52,201,132,89,205,149,14,40,130,30,168,100,242,6,5,77,224,7,138,214,169,
119,108,161,90,193,231,66,50,81,41,126,84,165,143,77,91,228,68,243,21,225,7,34,7,80,136,87,70,42,181,0,204,89,64,48,253,123,121,12,244,9,234,178,73,155,209,194,233,118,227,242,40,244,99,136,11,201,82,
96,92,19,15,18,122,37,127,181,22,254,73,22,38,193,134,160,164,99,211,100,234,175,180,146,238,107,222,168,54,23,76,143,246,8,244,244,118,27,136,132,35,154,199,67,159,79,71,63,137,179,20,10,26,74,109,126,
81,100,230,217,240,190,243,118,98,75,7,60,173,243,110,204,55,244,157,80,52,58,202,155,116,179,110,155,77,62,6,249,246,246,46,142,71,32,14,37,134,244,186,107,150,157,25,66,237,231,133,180,110,22,55,84,
105,95,62,9,161,12,56,68,132,89,169,203,43,17,200,248,3,131,170,111,211,246,173,90,51,7,234,118,14,57,209,220,16,230,241,32,214,133,234,44,5,4,46,153,214,41,191,206,164,8,90,83,251,15,73,155,28,139,211,
245,12,112,32,106,208,252,2,15,25,154,114,227,228,28,203,78,231,65,20,214,119,114,154,33,89,155,18,47,68,85,10,114,127,22,155,115,99,32,248,223,229,114,102,130,97,156,90,186,157,169,18,207,225,114,57,
105,121,86,227,4,70,179,200,128,17,124,99,191,81,252,174,98,158,38,37,230,38,237,122,248,117,240,215,215,67,223,99,16,120,165,216,139,5,48,158,199,206,194,70,46,233,52,211,84,213,59,126,66,24,199,92,122,
186,149,153,5,146,114,74,171,32,9,81,219,211,169,194,184,195,31,209,180,107,5,214,133,76,99,210,40,87,19,253,149,102,74,78,90,35,10,33,64,35,250,147,211,173,202,85,214,246,30,68,85,73,162,92,237,80,57,
197,149,57,91,103,208,112,41,12,145,8,150,81,27,197,13,122,126,154,18,60,146,99,26,173,92,146,89,220,140,79,82,94,132,177,16,30,68,120,213,101,60,12,22,227,118,187,91,109,41,255,67,220,6,2,11,193,236,
73,155,36,177,230,237,253,138,117,21,236,71,41,150,93,110,132,237,113,3,153,67,68,196,93,220,23,135,248,30,124,14,86,5,247,243,97,53,181,73,188,36,206,186,114,240,180,35,154,154,197,4,112,121,48,244,195,
96,14,20,91,6,219,8,11,182,28,238,36,22,27,5,103,210,143,227,18,186,145,228,37,210,97,157,69,44,196,20,195,69,18,192,5,175,132,180,21,167,249,85,137,64,167,68,116,44,7,7,171,8,8,171,249,93,26,58,33,212,
121,90,240,15,187,154,10,225,139,59,81,231,205,144,27,98,81,134,178,41,156,79,7,172,43,49,25,38,133,168,137,33,143,155,210,54,98,103,20,130,168,103,225,28,133,6,80,186,42,69,97,247,78,184,150,14,41,27,
81,103,133,236,148,182,211,144,100,61,134,200,243,218,181,13,159,109,113,108,137,49,150,90,88,169,58,26,38,5,110,38,85,38,105,238,232,91,88,179,96,109,197,0,100,228,121,58,29,75,210,154,251,156,41,38,
12,52,219,66,139,87,187,152,145,231,64,122,161,56,19,178,144,131,206,251,146,78,207,91,176,200,67,25,50,10,114,149,25,137,165,84,53,117,144,48,144,82,206,6,9,103,129,172,130,101,143,132,24,96,227,58,111,
175,239,92,0,178,202,66,134,35,85,237,34,230,134,195,28,130,152,203,3,169,164,99,29,50,239,8,143,81,147,75,209,120,249,48,83,222,213,248,103,6,201,181,61,147,12,118,205,205,72,100,186,19,149,185,18,237,
51,187,227,74,102,105,209,54,61,173,51,116,33,71,234,130,77,33,149,51,9,94,217,219,183,125,81,168,93,216,238,148,209,196,120,1,26,170,158,120,120,73,248,167,6,86,202,220,83,217,25,129,195,15,22,152,196,
237,121,129,51,9,129,173,53,120,105,235,25,126,47,28,40,217,178,82,0,31,11,62,52,9,146,166,36,30,179,118,202,166,77,70,189,8,135,166,225,254,48,224,196,236,5,93,126,172,3,119,109,52,11,49,135,26,199,131,
241,115,88,61,124,251,120,100,176,147,8,232,96,76,99,169,232,4,107,120,33,13,71,66,68,197,207,164,53,37,200,89,182,96,234,32,81,206,141,248,87,174,79,49,244,153,20,55,217,177,54,74,95,6,110,221,73,222,
57,113,181,138,113,131,114,167,193,62,250,44,196,14,179,131,39,23,31,42,153,211,209,119,109,218,67,172,32,152,65,169,52,4,25,147,117,162,34,158,36,190,213,94,247,165,236,131,224,250,92,105,69,7,73,120,
115,176,96,115,77,8,146,27,165,241,114,23,185,132,70,162,103,70,151,128,228,36,219,33,207,83,190,39,125,238,170,36,131,23,206,212,219,77,212,251,37,209,159,100,22,128,76,85,17,75,139,204,134,21,139,86,
156,29,134,11,242,107,25,24,215,213,172,162,163,244,40,40,203,58,149,33,133,188,237,112,58,30,132,198,166,7,12,18,20,79,224,178,136,51,204,113,32,210,144,75,135,140,7,112,31,144,138,223,53,34,70,110,12,
24,177,27,228,151,234,206,165,241,160,202,94,226,163,132,70,59,46,40,26,160,153,135,196,146,223,61,77,216,176,230,56,192,81,150,189,228,58,212,188,28,67,48,99,248,90,189,25,247,11,228,225,202,193,129,
238,92,22,179,45,169,230,199,233,70,23,177,54,37,88,172,213,26,198,186,239,251,155,112,104,40,75,162,89,26,15,133,58,64,151,47,181,124,40,17,62,25,31,64,46,4,89,112,48,231,243,241,70,247,87,180,54,69,
75,243,148,58,243,115,21,45,138,43,164,17,78,203,150,109,116,48,32,181,137,205,56,138,228,92,168,72,229,112,56,228,132,170,137,19,166,143,23,206,19,152,77,167,59,97,1,240,205,225,150,83,2,164,4,231,12,
9,23,255,124,62,97,109,152,168,106,27,250,126,27,173,166,1,51,71,42,120,209,216,91,171,108,68,65,146,142,80,152,188,158,164,14,217,159,208,197,55,248,68,152,244,156,251,167,78,68,28,59,61,106,187,186,
190,149,223,204,128,246,192,10,132,205,51,98,24,11,251,247,116,62,134,189,226,142,233,54,241,187,140,230,217,252,85,146,41,43,160,197,88,157,172,179,144,120,82,243,168,245,176,215,98,68,8,33,94,70,177,
151,74,238,85,109,174,252,131,22,206,17,10,149,121,120,254,240,44,95,4,177,245,164,16,166,18,54,30,181,93,249,199,42,111,16,27,24,35,198,250,68,1,154,165,86,146,85,42,147,200,205,114,246,189,36,34,129,
201,157,145,113,108,186,22,223,29,110,163,19,199,24,200,234,148,38,109,71,80,54,37,56,212,84,233,33,37,139,43,95,35,90,110,178,39,161,152,64,176,239,82,122,172,146,142,153,233,35,219,85,194,245,33,167,
97,152,9,237,187,78,1,90,14,116,75,193,16,196,36,233,151,199,97,32,123,117,103,30,172,57,162,212,174,206,12,72,7,244,194,37,19,28,127,129,123,155,226,24,58,38,6,116,229,101,69,13,151,136,9,157,177,99,
199,242,174,144,179,242,184,20,6,13,185,200,219,33,163,250,65,18,55,101,94,15,34,251,219,93,56,84,50,126,134,207,90,95,236,236,242,66,137,29,134,166,118,26,123,134,224,57,196,22,229,156,89,84,218,32,186,
169,220,218,13,33,196,88,238,132,147,252,108,26,143,144,166,250,81,25,105,173,180,41,39,154,164,251,152,25,166,152,115,246,74,87,55,202,245,163,183,45,130,52,4,164,142,46,16,165,94,172,229,188,147,119,
101,144,112,32,61,141,101,19,242,122,167,204,193,146,243,102,176,74,142,124,37,135,144,201,28,202,165,96,115,120,185,112,252,253,216,212,50,105,71,194,9,155,144,36,202,116,149,242,153,248,121,123,187,
194,25,121,228,136,236,181,67,60,21,187,242,190,129,219,106,245,15,9,119,80,109,120,114,101,138,85,149,163,194,6,225,80,214,24,55,195,53,204,232,70,51,252,77,187,160,108,155,19,163,237,143,101,251,252,
249,139,74,111,232,0,127,95,198,232,216,197,249,66,163,118,150,237,233,62,98,31,12,183,219,164,50,155,7,71,143,74,33,217,247,95,13,143,215,202,225,139,24,204,188,187,16,194,104,212,57,106,95,28,85,183,
100,82,147,118,68,116,50,139,241,97,70,200,137,211,205,202,181,227,129,91,102,187,42,7,31,240,167,32,188,226,211,196,109,53,54,72,255,133,104,6,77,100,119,87,26,3,19,199,50,164,9,145,25,19,179,173,146,
218,210,134,133,83,204,14,71,177,198,208,232,70,69,96,88,161,218,146,234,46,168,146,204,179,86,20,242,216,92,185,44,88,121,177,232,140,88,169,201,147,145,38,200,128,177,226,138,121,247,138,220,106,100,
195,158,36,33,106,22,42,205,170,160,164,127,101,87,152,92,0,101,29,12,63,99,88,25,6,67,0,220,182,123,61,109,202,130,38,14,151,116,106,208,78,164,128,201,207,36,84,60,145,153,77,223,135,2,2,9,109,232,196,
65,40,40,68,11,28,212,65,206,163,147,14,43,230,139,46,168,96,10,8,187,177,109,177,36,214,170,33,63,89,164,188,187,131,120,227,223,198,12,165,76,233,49,142,34,197,111,134,253,98,46,245,225,62,49,18,168,
128,54,187,182,195,112,133,247,161,74,204,9,51,29,13,235,41,157,178,18,115,154,43,217,117,3,0,118,228,189,20,76,46,83,13,201,73,114,190,88,225,114,216,3,98,241,23,74,24,245,184,235,84,220,29,254,27,182,
137,124,49,170,112,37,237,162,48,141,13,187,114,81,5,172,92,246,241,251,84,114,83,19,30,213,101,41,209,226,150,73,80,210,93,200,63,55,206,60,119,44,19,170,215,153,53,15,158,107,113,230,106,1,207,49,87,
172,172,100,193,192,147,74,210,104,116,253,136,130,47,187,4,165,104,118,90,82,113,18,53,63,181,73,199,234,23,250,14,235,245,122,183,246,197,44,52,114,237,92,129,194,234,67,186,158,57,229,230,75,243,43,
50,100,222,186,74,239,22,170,255,75,202,83,15,210,139,51,87,146,36,184,89,168,88,123,227,194,206,42,127,78,242,101,137,216,43,172,161,134,110,12,118,233,217,156,20,86,94,44,167,207,194,142,111,25,72,195,
170,116,68,62,115,182,22,242,114,187,222,156,252,114,157,125,97,228,64,239,38,229,69,96,12,240,208,8,99,25,73,49,217,29,117,89,3,130,252,102,78,99,231,122,0,249,171,216,228,170,255,100,233,143,163,121,
168,36,161,60,179,2,143,104,78,163,147,83,42,225,44,228,31,48,237,83,148,197,36,106,178,8,110,155,115,6,11,153,110,139,202,228,22,193,17,197,249,114,148,219,201,153,149,111,22,92,119,89,106,97,33,5,147,
226,178,64,160,10,227,105,196,134,42,246,106,20,165,15,201,78,234,102,86,24,211,20,194,53,55,162,172,210,21,130,223,138,150,9,242,51,172,93,76,158,71,52,23,122,130,36,155,83,210,238,40,144,76,63,20,159,
217,195,54,105,36,231,83,37,17,75,220,89,79,2,52,146,179,142,24,202,237,118,147,39,73,91,103,142,136,226,228,202,246,30,19,87,176,170,103,117,221,161,24,144,116,252,29,124,146,40,34,149,57,115,52,65,185,
141,104,116,6,251,87,33,107,50,33,80,225,100,105,203,17,163,17,191,89,196,4,232,239,9,97,138,219,77,24,63,91,101,143,69,241,27,236,211,193,53,87,237,95,202,40,79,85,63,63,159,247,48,136,233,89,174,223,
154,176,97,15,125,75,181,200,196,89,154,68,54,117,105,54,76,55,148,137,161,225,98,119,181,13,191,102,71,81,187,38,111,60,25,114,150,94,139,2,93,217,73,149,109,42,188,146,38,59,74,13,37,231,234,140,99,
66,80,89,251,252,126,21,210,30,148,196,231,163,170,6,215,224,126,122,16,11,43,241,103,75,209,67,177,84,188,233,146,137,164,102,69,58,88,99,17,82,83,27,132,54,64,161,112,23,193,112,233,249,178,186,49,55,
210,65,188,43,70,137,180,54,149,195,61,154,194,42,66,132,33,74,240,182,122,65,160,141,19,115,18,22,14,254,58,88,11,227,241,88,250,189,183,196,136,118,34,244,83,19,127,225,13,32,238,248,194,77,165,231,
81,122,132,4,117,229,5,82,38,223,113,161,74,9,13,163,71,187,75,13,107,100,25,94,83,103,176,250,217,101,12,81,81,79,87,48,28,111,156,153,96,182,79,60,119,149,198,5,145,52,138,189,27,199,102,45,163,148,
73,206,79,85,66,17,157,56,199,237,142,167,222,129,136,159,223,112,170,48,220,114,82,233,29,253,88,213,145,200,254,22,174,134,55,73,1,190,187,94,207,20,33,2,82,49,190,189,190,233,185,182,93,201,46,14,184,
139,98,239,131,97,74,117,20,187,235,122,189,201,70,242,25,196,142,216,140,210,83,79,239,44,114,151,244,72,214,16,154,212,206,216,224,33,185,161,196,123,98,13,255,60,59,185,168,233,91,197,41,152,114,214,
144,84,190,76,142,194,122,192,213,20,3,196,53,190,241,116,62,56,142,55,153,159,107,43,127,196,21,135,118,92,85,13,189,106,155,11,177,177,87,93,149,253,161,91,196,4,132,136,173,202,68,25,159,172,155,198,
109,19,28,87,59,227,132,65,226,63,103,116,225,199,201,79,231,134,9,123,40,23,114,247,23,154,176,40,167,134,84,241,182,105,71,241,151,48,60,45,152,13,28,213,199,120,191,187,112,202,117,27,106,121,17,77,
132,24,199,5,146,135,103,32,236,66,126,104,112,76,40,93,198,33,154,100,232,20,62,233,114,185,52,146,156,195,36,194,161,163,16,92,16,158,234,74,127,154,207,73,66,163,210,231,181,24,150,118,118,112,133,
35,65,72,90,165,145,31,38,65,175,38,207,112,116,152,234,34,37,15,155,181,172,164,35,205,50,118,235,137,197,215,179,204,92,109,186,12,190,2,1,199,122,244,125,173,172,225,102,190,121,174,122,54,25,90,15,
156,65,198,15,31,206,77,3,99,57,65,252,92,32,77,99,161,10,79,59,4,216,195,88,240,201,245,140,44,96,153,84,122,152,185,101,100,237,202,195,102,132,169,140,136,238,87,136,209,67,155,137,173,127,60,28,118,
104,37,227,56,88,121,131,12,202,5,175,73,28,213,180,35,228,242,213,232,70,244,42,111,130,196,154,131,192,133,108,100,160,105,10,22,72,13,212,66,85,27,243,79,114,38,38,113,76,199,137,192,254,77,20,210,
164,56,75,28,189,66,203,166,156,74,79,50,73,225,236,177,161,204,188,197,12,77,105,82,43,59,20,95,190,190,235,54,76,176,40,45,23,76,162,160,44,144,31,86,24,190,115,159,1,124,254,112,60,56,29,174,104,8,
114,100,52,167,216,169,39,73,238,229,242,32,165,226,111,175,109,35,132,176,17,191,15,129,24,150,145,230,114,135,101,229,85,198,199,40,93,209,150,17,123,5,162,86,67,51,179,26,107,166,112,200,46,155,123,
75,221,84,87,78,73,25,45,50,65,133,152,52,243,107,12,194,231,61,47,134,137,84,149,93,80,205,101,241,243,191,243,59,190,56,103,115,221,172,186,75,211,17,101,71,23,185,75,209,60,59,54,238,168,235,235,237,
230,12,12,201,234,19,54,65,246,92,99,161,40,63,70,88,61,60,28,188,228,68,187,102,206,227,186,171,195,160,248,72,237,170,32,219,13,145,115,75,174,42,40,147,252,83,113,172,43,23,166,113,179,121,155,59,10,
84,244,71,25,164,159,45,60,127,147,203,91,50,187,221,223,199,177,36,236,189,73,99,210,211,89,88,62,82,40,193,61,152,35,39,249,21,73,92,129,84,45,90,62,60,82,219,65,248,171,88,54,40,16,117,136,88,254,248,
79,254,124,47,249,10,134,59,56,45,15,102,48,62,141,216,241,122,29,96,23,3,5,158,42,67,28,90,170,91,8,23,174,142,40,84,249,134,122,51,13,184,160,238,196,83,190,190,190,185,115,208,163,155,3,199,26,101,
131,228,245,137,156,95,217,222,151,198,204,25,79,74,107,168,14,60,8,159,115,36,101,38,55,19,150,114,211,165,74,232,6,213,52,240,27,177,20,185,158,140,114,219,92,196,143,215,7,216,92,165,61,194,198,160,
4,238,146,241,128,156,167,97,94,132,229,172,210,53,154,232,186,130,252,170,20,43,195,137,15,18,39,55,141,37,80,237,176,220,47,137,194,172,228,20,25,42,15,216,1,175,184,226,144,105,245,186,194,244,201,
123,178,176,164,98,141,246,71,29,22,216,15,108,68,140,166,249,208,224,102,85,5,40,253,196,41,83,174,130,23,39,81,134,46,245,170,104,54,40,236,96,186,29,15,3,173,97,253,83,59,19,43,80,69,192,32,99,67,199,
55,173,216,254,175,175,239,108,244,162,109,69,103,13,86,172,193,69,115,167,44,236,145,166,204,189,160,168,88,221,187,98,154,76,47,178,171,73,90,46,235,5,114,35,44,3,174,153,5,158,59,170,101,84,60,40,101,
12,95,94,188,196,213,5,206,69,110,131,165,207,185,167,143,164,99,54,93,170,32,229,225,224,102,75,16,117,114,63,148,216,21,133,103,102,8,78,74,108,47,234,216,40,38,104,248,240,124,137,230,40,202,180,170,
173,203,44,193,46,204,247,178,199,104,28,71,189,8,184,131,228,154,21,234,212,32,19,174,234,110,247,76,98,182,78,173,3,104,206,110,244,131,86,185,17,24,135,18,211,14,107,138,187,6,163,246,0,141,189,39,
172,205,56,222,135,235,176,204,119,127,158,90,60,207,148,48,224,213,133,212,122,126,37,5,91,21,198,147,116,213,8,111,54,93,174,81,181,132,33,91,197,168,65,25,184,185,17,152,66,74,52,173,73,99,26,25,194,
170,73,138,31,206,33,68,67,53,57,57,106,21,30,80,223,228,242,99,190,14,135,30,159,241,5,23,113,102,93,251,31,69,172,114,217,181,146,224,217,54,99,151,177,142,72,63,222,224,54,213,216,152,4,201,152,22,
223,156,228,200,228,43,181,165,49,141,29,143,75,186,122,174,163,202,193,192,229,124,236,15,135,149,252,114,147,58,24,81,167,189,13,156,183,122,254,63,197,244,236,244,128,7,131,210,194,131,13,74,195,155,
61,137,215,73,95,149,4,17,72,86,198,202,66,97,35,34,210,69,165,6,26,173,32,113,18,102,153,149,29,6,183,66,88,164,5,12,193,144,168,175,194,60,193,76,238,218,71,54,58,158,112,36,6,214,168,223,24,201,49,
244,6,232,157,97,151,40,157,203,250,1,182,175,97,244,45,51,39,246,43,253,29,85,178,180,126,154,210,153,241,88,220,73,131,229,230,189,33,52,80,26,218,76,157,32,183,214,105,162,251,112,155,48,200,45,19,
236,229,241,231,6,132,209,177,156,18,181,142,107,225,248,195,220,178,115,144,153,129,162,115,5,201,115,245,240,190,4,235,109,246,193,90,233,114,209,147,38,227,246,144,112,60,174,74,11,146,47,8,77,225,
172,139,75,189,224,82,154,70,101,87,200,38,79,221,212,24,196,144,31,70,231,96,45,201,215,19,236,11,239,161,46,133,31,55,110,239,164,26,161,205,174,191,67,86,19,254,165,245,42,225,1,147,157,82,122,255,
112,77,149,239,198,149,137,30,179,212,222,102,90,237,109,196,251,130,3,89,228,104,217,229,140,181,157,149,202,164,169,148,11,234,29,118,76,234,239,82,108,17,38,127,155,2,113,22,81,108,114,51,24,211,122,
213,226,164,83,133,250,226,110,130,149,26,92,144,12,43,105,162,153,80,248,46,79,47,217,166,22,34,113,194,106,96,34,4,74,172,198,146,31,197,95,170,104,74,174,63,79,101,216,171,173,105,227,163,59,76,168,
164,216,36,13,230,91,24,217,194,216,119,100,118,205,243,241,116,52,149,137,219,74,114,170,152,150,229,163,46,108,176,51,97,129,82,232,27,85,161,3,145,100,89,93,202,252,100,114,55,212,201,113,239,31,164,
90,1,6,118,42,156,135,22,108,217,205,168,113,71,142,140,72,97,148,120,19,83,3,91,196,62,89,36,40,242,74,238,164,98,18,204,166,237,237,77,222,136,101,226,0,74,37,86,247,220,87,72,93,110,42,197,179,244,
137,39,83,188,243,230,13,106,159,199,142,44,57,206,74,14,101,131,146,28,216,128,38,43,5,229,78,30,253,2,157,215,118,71,17,147,12,122,89,76,27,77,124,50,233,22,143,70,18,216,10,88,242,106,39,58,184,58,
198,189,112,114,45,111,110,74,154,99,177,194,96,149,10,50,224,200,195,102,211,215,224,117,197,119,113,240,165,94,80,100,213,185,88,236,118,203,189,148,200,125,81,180,129,171,143,162,169,154,148,168,226,
58,173,92,44,20,233,244,34,123,216,74,196,209,94,95,12,110,72,230,1,208,57,160,69,95,85,81,160,190,13,49,122,34,156,137,20,9,179,114,201,72,35,18,132,137,206,46,120,168,105,10,22,67,87,244,233,161,79,
239,176,52,163,105,65,183,235,77,169,247,205,251,17,159,220,179,21,174,220,221,142,125,91,236,45,50,221,231,197,173,14,130,200,12,46,2,85,207,199,133,84,157,137,61,96,74,120,13,202,61,149,190,144,106,
197,11,69,201,203,94,195,192,193,159,40,216,230,76,230,234,94,65,253,133,219,38,102,178,131,210,106,94,12,220,168,85,6,81,124,20,230,51,66,114,249,69,238,148,40,129,46,92,178,174,14,92,241,208,211,15,
112,10,164,174,50,43,216,84,155,160,126,70,155,0,76,217,217,224,216,88,238,88,237,61,78,157,141,8,80,156,0,3,117,66,71,205,102,50,43,50,94,135,41,185,134,90,176,143,141,147,179,58,46,82,118,120,6,249,
143,26,4,147,13,183,235,21,111,92,233,176,55,29,21,173,187,21,100,29,73,21,40,88,75,238,53,139,7,76,15,183,87,169,37,114,236,71,75,215,31,90,227,33,165,4,74,28,183,204,168,103,95,2,166,42,86,43,123,102,
25,217,240,109,178,237,127,191,222,214,29,24,129,2,198,72,174,183,187,51,171,185,170,69,224,145,248,144,45,235,139,86,42,71,117,49,44,161,143,59,241,150,201,16,164,27,5,61,181,154,111,174,98,137,232,189,
9,155,220,247,141,85,48,233,5,210,134,158,161,152,67,50,199,126,145,150,94,4,66,106,44,87,213,227,54,108,239,40,154,155,100,100,245,172,227,117,22,91,201,237,19,151,141,129,10,181,160,250,101,200,37,122,
228,236,217,134,241,122,189,179,222,117,89,239,218,93,172,170,87,46,27,195,157,133,118,11,180,139,174,210,113,189,171,162,39,121,116,13,125,119,132,230,110,162,155,3,17,233,236,129,141,195,220,218,128,
230,157,148,251,24,222,222,222,181,97,217,0,134,200,145,98,52,106,70,5,186,120,16,25,248,194,77,51,5,31,215,55,246,107,160,165,198,205,126,246,59,191,77,186,80,190,166,91,77,8,52,218,171,88,227,203,203,
155,243,98,16,203,61,253,178,58,200,238,218,246,209,107,215,180,51,119,131,115,41,233,160,58,104,243,218,96,243,13,89,73,241,5,117,75,89,30,36,219,69,0,159,179,157,199,227,113,149,72,184,110,218,4,72,
113,28,130,97,64,54,252,99,101,70,13,25,130,59,102,146,161,80,209,4,179,101,118,57,45,23,9,236,141,234,197,10,21,66,112,49,236,229,101,254,149,108,110,75,54,106,206,113,187,27,139,252,123,2,155,246,14,
255,236,207,127,225,126,2,153,97,182,243,25,36,71,219,246,235,79,159,153,119,22,47,128,181,17,98,46,21,217,184,176,250,60,151,205,136,161,69,186,148,24,131,231,243,73,46,79,43,191,142,28,74,118,231,217,
86,27,75,127,82,62,241,184,247,224,77,166,87,41,255,59,187,131,110,150,77,58,92,136,173,17,199,52,244,57,253,120,194,12,241,121,40,35,91,46,149,19,16,165,84,109,83,35,52,126,85,226,96,83,147,150,12,242,
185,36,213,37,146,46,233,17,18,38,250,146,74,138,113,11,101,128,163,38,119,203,253,80,246,182,206,81,221,108,55,39,148,73,71,103,199,43,126,65,220,58,18,86,138,152,19,219,120,133,149,89,130,114,217,47,
21,113,192,125,74,153,7,185,164,236,188,47,34,208,204,70,245,85,98,202,172,157,122,175,89,185,180,86,10,220,179,195,96,226,241,93,120,96,79,114,239,170,140,59,59,215,66,130,176,66,108,209,163,194,71,59,
184,120,139,180,86,121,100,34,223,108,198,119,76,2,193,238,184,171,197,65,110,93,180,71,155,118,71,75,217,92,185,206,179,5,226,250,62,136,250,56,107,216,1,17,145,59,71,192,225,181,189,242,215,163,93,47,
231,194,132,54,52,239,239,87,77,89,18,103,33,154,17,224,108,1,233,155,204,127,149,46,0,201,93,247,212,65,81,131,160,155,139,207,63,63,95,238,164,66,21,230,236,152,32,202,162,146,182,82,121,50,43,31,97,
248,101,182,75,181,101,91,85,89,201,114,86,42,78,81,196,176,107,176,12,204,74,105,231,143,211,152,155,85,111,185,4,138,59,75,140,111,209,14,50,149,41,55,22,16,10,110,95,217,21,125,130,199,92,173,89,104,
5,55,183,95,31,212,20,234,253,253,254,250,130,167,70,172,55,185,74,109,15,53,114,35,234,100,2,161,154,23,204,12,94,212,107,185,18,113,0,161,131,59,53,41,57,196,132,39,98,223,189,109,154,155,150,177,44,
89,17,48,91,175,178,50,248,62,17,253,165,23,239,214,98,181,96,51,194,3,174,10,112,195,21,39,166,119,251,192,63,152,236,86,22,91,20,210,217,100,23,165,70,130,59,112,85,25,211,217,45,148,188,118,229,120,
183,37,243,7,85,23,208,48,97,105,117,238,228,181,57,74,98,18,148,102,185,194,234,59,159,60,50,102,102,41,137,138,20,171,7,52,86,154,236,181,87,82,103,238,89,205,240,103,82,96,25,156,87,67,8,67,191,68,
37,171,102,74,184,97,142,88,85,44,219,197,88,87,49,81,118,129,138,234,247,154,169,210,65,12,222,220,84,72,162,175,188,88,73,152,138,179,86,25,204,220,123,201,48,87,1,69,67,192,180,235,102,69,98,234,252,
197,194,239,74,152,55,17,175,219,208,11,195,116,211,73,149,218,210,229,49,240,32,66,68,116,9,91,71,7,149,19,106,82,165,58,79,48,187,109,174,182,73,162,24,76,71,219,159,156,62,41,118,232,159,5,189,59,213,
35,57,62,52,23,27,194,2,79,253,206,238,203,100,243,42,255,185,154,88,38,14,81,161,78,29,147,125,181,168,220,3,187,236,218,33,100,240,193,110,68,134,184,72,183,192,222,128,73,19,50,75,116,153,230,163,244,
197,49,113,48,255,102,139,51,64,87,25,3,238,34,50,63,7,232,220,161,185,72,230,30,187,144,21,183,195,34,78,83,110,246,138,23,21,91,5,149,186,76,110,189,64,170,57,145,185,73,248,156,120,101,107,214,65,182,
113,163,184,228,118,120,161,43,71,14,73,29,137,220,82,64,66,83,237,172,79,170,180,143,31,158,94,94,222,93,117,113,189,142,223,60,195,198,47,44,206,11,1,150,152,81,104,36,14,172,244,57,201,34,46,90,12,
133,58,155,220,71,81,68,101,180,84,156,83,200,108,179,231,182,18,217,171,86,123,167,226,7,231,179,212,46,160,83,248,182,24,15,141,138,45,12,170,169,33,104,233,85,211,206,72,222,116,149,161,172,50,56,237,
97,130,26,230,55,215,5,8,170,165,67,188,4,219,50,86,7,48,54,22,3,127,161,21,98,10,64,118,201,220,72,92,243,187,239,94,68,84,85,176,44,35,32,132,112,243,9,0,25,139,253,252,229,5,191,207,231,39,229,108,
233,41,8,124,41,97,212,28,37,170,208,122,245,142,116,233,158,170,5,22,155,12,202,57,19,174,101,16,1,133,60,5,181,27,84,185,179,171,6,85,65,185,101,60,63,23,220,171,116,197,206,11,187,166,85,14,253,162,
98,122,194,82,7,226,223,4,28,70,53,14,51,84,226,56,158,155,206,132,121,77,28,132,72,124,167,232,44,155,181,7,33,218,121,202,205,197,220,181,54,183,147,223,78,167,131,99,102,56,176,231,83,47,250,195,38,
135,128,148,26,31,203,16,205,147,223,219,230,48,4,185,223,223,83,22,171,89,122,209,86,140,82,166,94,128,153,72,238,154,104,7,19,52,147,44,7,106,132,85,108,238,104,192,106,9,57,26,74,34,171,199,169,90,
80,171,81,244,38,25,136,174,103,160,52,21,94,109,238,80,234,78,13,77,189,157,84,234,36,189,107,215,220,129,155,91,101,104,59,211,247,110,148,240,166,6,216,207,182,80,145,131,73,248,164,24,88,21,96,70,
224,236,144,136,167,83,4,12,244,204,90,75,86,118,49,115,85,218,61,160,39,157,76,127,81,245,170,13,132,208,182,210,137,26,236,36,111,239,82,37,36,174,106,132,40,185,144,160,202,141,41,87,119,174,229,100,
97,102,157,17,86,185,10,137,57,112,151,4,217,9,136,97,201,57,123,243,142,243,116,231,124,233,239,81,25,103,54,241,40,115,219,225,205,16,229,78,211,155,72,182,81,9,128,170,23,102,183,160,112,199,26,227,
153,76,19,202,27,180,178,183,0,214,116,136,136,115,98,24,214,30,3,125,229,140,79,168,52,98,118,235,49,71,179,244,219,133,112,237,135,91,112,110,124,218,65,116,237,141,107,234,138,220,254,189,199,140,126,
249,250,106,14,150,162,27,233,212,88,186,232,82,60,138,213,56,153,57,202,102,15,138,87,207,184,9,186,176,85,255,48,9,106,1,123,175,124,209,228,8,195,222,211,36,82,162,19,228,21,65,120,178,68,4,77,144,
61,118,56,118,174,48,47,216,252,164,112,139,30,58,135,130,22,196,214,40,205,171,231,67,138,33,232,50,44,7,6,98,30,45,110,95,226,143,101,34,161,50,203,174,47,241,135,89,59,134,5,80,171,94,179,110,115,71,
201,124,212,139,170,125,236,125,237,77,175,130,54,39,162,188,163,233,60,152,69,187,252,238,87,226,130,23,237,255,142,157,202,69,139,49,127,167,20,114,36,82,11,145,92,120,22,204,148,146,121,202,44,133,
107,77,75,231,240,148,74,196,242,178,67,104,219,176,231,118,80,214,168,170,48,143,248,60,158,65,156,168,50,101,110,251,234,214,12,102,88,153,131,96,56,193,60,214,70,101,61,174,50,34,129,93,156,5,7,46,
21,115,246,140,254,85,25,25,188,85,127,120,228,72,73,182,104,20,159,127,121,208,91,13,42,184,209,164,25,106,201,37,96,34,144,109,175,60,135,36,170,210,107,22,65,89,61,122,150,5,214,119,207,255,4,4,180,
144,234,50,102,74,171,186,49,109,102,103,6,150,246,114,187,177,239,149,50,54,46,212,41,242,137,39,149,163,80,162,78,42,204,55,57,138,185,73,169,79,165,137,91,132,239,216,209,70,151,26,30,185,112,85,155,
168,194,106,222,89,60,213,185,112,104,12,86,154,202,229,165,110,151,106,156,64,185,201,197,14,138,210,208,65,164,145,53,233,144,136,178,204,4,40,166,85,135,17,33,132,139,82,115,209,141,131,85,23,66,187,
191,87,62,69,40,146,36,93,211,138,187,192,232,238,234,72,29,191,178,119,134,144,175,229,188,187,138,93,125,80,12,199,125,103,83,103,215,158,4,119,14,115,27,12,103,175,24,34,52,236,111,223,168,93,174,28,
169,66,164,63,34,68,42,20,111,156,92,81,45,250,141,49,170,234,136,86,47,169,186,145,57,103,43,195,186,56,77,132,77,106,194,63,177,58,53,189,87,123,217,201,140,9,231,84,161,146,158,158,206,88,212,66,100,
80,3,108,185,69,145,246,44,77,144,206,227,201,249,11,7,171,234,176,178,230,131,97,220,146,238,125,16,162,92,247,34,19,47,217,136,211,7,233,15,173,41,50,153,100,170,32,144,232,84,114,195,176,224,252,143,
65,50,199,192,132,178,42,46,166,249,62,7,44,163,74,73,115,35,150,219,93,216,216,232,38,141,212,59,163,90,54,205,115,39,42,167,104,167,68,121,216,154,94,237,100,234,124,180,66,146,161,44,118,40,66,39,37,
233,142,145,252,133,17,151,114,95,33,207,166,58,47,64,234,95,141,228,187,1,140,40,104,57,232,15,76,243,31,114,27,31,227,130,172,112,74,241,7,135,16,241,77,195,201,84,4,195,157,125,52,229,191,116,170,14,
53,209,87,228,146,210,5,209,158,208,117,89,242,145,32,154,80,39,228,206,231,67,41,130,238,170,237,224,89,54,57,198,237,107,32,152,68,41,45,134,178,80,106,219,168,206,46,149,187,99,210,170,213,228,128,
174,74,4,241,57,143,199,78,148,34,247,154,76,174,128,118,66,216,1,147,27,166,60,0,131,40,101,55,177,49,212,236,250,58,122,149,53,165,201,202,235,209,180,127,164,51,17,92,200,81,149,181,221,107,196,45,
81,205,186,226,94,30,37,192,88,77,216,216,208,68,0,146,11,88,12,116,205,100,134,173,10,175,163,235,154,189,203,252,69,86,250,75,41,121,66,73,70,144,169,26,21,154,98,250,88,209,79,207,104,83,37,222,209,
64,18,177,84,117,75,123,180,101,162,67,40,254,157,120,251,238,112,182,184,43,56,123,55,164,0,27,103,224,217,253,23,108,43,49,239,140,25,21,244,190,189,189,231,136,74,188,52,88,241,160,204,23,161,251,97,
196,102,132,67,100,98,152,15,18,128,127,235,198,202,238,2,245,56,47,41,39,162,11,223,104,203,85,207,152,72,129,196,185,44,2,99,234,212,184,195,22,33,215,78,171,219,74,180,139,40,47,142,106,32,19,252,216,
98,18,139,140,23,207,26,83,161,94,179,208,178,144,41,168,137,38,31,27,18,172,176,69,21,47,212,115,163,44,50,77,57,184,161,162,40,234,140,84,220,213,203,69,2,46,130,204,174,147,26,8,136,145,148,253,85,
119,145,56,176,113,152,207,144,99,99,133,164,194,14,236,47,250,183,13,45,0,155,46,150,110,108,70,24,76,219,162,216,59,231,80,164,88,119,104,162,122,46,34,116,159,187,93,28,8,170,51,140,230,249,33,10,151,
93,112,72,71,179,174,163,208,175,164,10,234,213,54,197,207,169,76,30,235,7,152,86,149,40,177,90,91,162,39,119,196,238,9,33,68,214,185,169,106,177,21,79,133,13,208,91,54,181,20,204,182,248,124,26,235,68,
124,235,93,233,26,23,242,58,224,240,52,177,86,133,74,155,90,31,155,200,48,51,172,191,121,76,185,220,140,29,10,131,235,247,36,41,141,143,62,40,87,147,51,169,101,48,23,58,120,98,54,67,212,217,90,111,189,
220,244,95,228,173,202,161,22,214,227,192,163,114,232,214,52,109,181,230,51,45,50,189,22,122,30,134,192,142,108,118,201,5,24,213,109,93,44,185,197,211,166,142,33,42,254,202,78,133,0,227,202,118,199,125,
14,153,215,86,88,71,79,218,16,138,50,2,202,214,178,85,47,249,84,84,87,78,16,172,181,138,153,196,135,196,250,151,6,213,234,202,103,114,84,6,6,212,51,94,61,223,186,70,208,56,243,46,132,10,180,61,171,42,
231,163,157,26,116,35,52,177,209,27,55,84,219,209,158,76,115,217,182,76,93,207,88,204,79,255,198,55,111,111,95,76,152,135,113,252,250,245,141,234,115,43,161,159,106,161,126,123,1,91,169,86,84,113,93,114,
65,165,205,246,230,132,172,176,94,29,218,196,22,125,170,42,181,235,184,229,142,28,57,211,146,187,201,86,185,197,69,78,72,20,21,145,16,2,251,176,86,43,59,98,154,66,5,53,216,146,1,198,206,22,180,249,234,
117,139,77,52,49,147,227,67,78,226,126,54,13,243,179,74,236,176,67,221,82,44,123,98,162,80,75,186,206,116,36,215,19,187,21,9,91,194,136,199,68,102,128,188,129,152,139,92,74,147,67,162,250,223,197,191,
250,127,223,154,22,198,56,176,106,88,45,129,165,102,32,234,2,116,119,21,200,46,194,163,72,49,31,86,161,39,87,33,96,156,118,64,195,204,89,235,120,135,5,149,121,29,210,29,246,80,204,104,121,52,189,33,85,
88,30,158,169,29,170,158,83,107,122,249,130,115,102,115,241,178,29,101,228,110,203,229,16,155,73,212,113,204,199,43,174,140,7,13,33,98,245,205,24,40,115,1,226,146,79,144,76,153,18,70,208,189,216,105,239,
101,180,222,115,231,8,237,53,205,174,79,74,124,156,255,7,27,65,210,220,184,40,86,84,251,142,97,208,193,2,249,124,57,19,118,125,36,159,129,87,211,39,200,200,220,253,35,247,156,118,81,193,198,163,167,38,
29,22,180,201,80,20,106,82,89,103,159,51,31,34,199,199,54,194,224,46,125,143,14,188,238,221,29,50,135,174,82,55,232,69,105,159,224,1,184,54,81,226,175,222,132,34,204,58,97,239,222,63,147,154,57,185,246,
83,133,57,220,15,58,213,129,233,73,72,92,35,3,195,243,56,202,220,187,246,161,131,242,129,146,101,86,233,244,250,191,251,245,119,138,247,99,223,247,62,105,132,24,179,112,123,241,201,202,189,219,135,79,
41,89,124,222,0,233,82,178,187,118,124,114,67,19,209,58,141,209,177,159,95,72,134,102,84,224,201,211,228,92,224,47,124,135,205,137,220,93,203,149,234,238,93,237,177,53,114,14,121,56,143,240,26,119,23,
119,110,195,233,64,81,234,70,183,131,83,239,146,224,42,100,31,109,183,247,7,158,221,44,218,4,219,86,173,126,148,254,15,179,172,141,146,5,123,63,164,144,123,102,231,54,129,34,193,46,62,102,10,67,210,185,
53,4,12,73,137,46,178,3,230,100,219,157,49,75,235,112,215,133,49,118,38,85,198,69,168,165,147,243,111,31,223,142,156,207,197,154,212,187,165,200,238,220,234,252,20,166,73,21,100,44,135,107,76,231,96,93,
99,62,241,213,188,33,241,27,87,145,103,169,56,121,176,147,74,217,85,4,58,167,220,172,128,132,6,29,135,180,186,137,110,46,112,85,236,110,136,2,87,191,92,206,209,71,51,22,97,184,141,174,194,103,229,79,96,
15,124,81,165,205,162,182,31,148,114,245,142,205,188,67,91,159,190,120,191,207,82,58,90,7,109,37,133,200,179,56,253,149,140,183,108,138,82,125,177,176,31,84,169,124,184,249,250,242,58,241,104,160,74,165,
224,172,8,149,82,152,149,14,45,114,47,6,109,120,185,127,229,131,230,148,43,63,68,152,100,46,68,44,109,230,75,239,119,53,221,163,221,81,197,248,230,130,132,205,232,170,139,11,227,247,251,209,135,125,57,
6,127,64,174,78,58,194,69,116,91,84,113,143,169,124,51,231,164,170,187,174,82,55,88,178,131,152,128,83,75,46,206,215,182,87,168,243,85,201,115,37,184,135,25,11,53,46,202,205,234,117,48,167,163,48,65,116,
20,72,243,253,54,155,36,133,227,10,50,78,234,10,86,251,100,19,243,207,168,209,197,218,94,221,24,75,106,94,181,125,116,79,8,36,142,179,79,238,243,201,47,119,101,141,90,85,159,154,133,169,42,222,38,215,
56,18,126,42,205,128,200,61,211,149,32,16,238,19,223,94,175,88,12,131,51,242,24,11,115,5,216,23,78,197,98,254,164,139,121,116,36,79,33,153,88,16,132,218,117,102,61,202,126,46,235,222,135,102,239,7,156,
216,243,115,128,210,122,125,125,151,230,139,86,233,139,240,151,101,81,55,147,152,15,144,53,230,160,206,62,140,203,224,103,96,58,212,232,131,210,81,179,32,178,114,159,48,119,56,149,29,165,151,232,46,150,
118,79,196,120,92,148,195,170,220,218,211,172,31,233,116,231,212,90,247,30,123,123,187,149,62,199,147,221,9,202,220,157,68,167,163,108,42,64,84,93,27,179,193,136,105,112,151,73,69,33,242,158,89,80,69,
234,157,108,188,189,124,181,49,137,106,178,217,184,10,164,81,139,46,229,114,163,67,124,142,60,119,96,120,116,94,40,203,159,252,248,27,250,70,170,31,192,3,139,191,68,51,168,192,50,24,48,202,157,208,242,
201,71,164,84,97,118,24,109,93,111,110,100,224,22,82,62,192,137,197,184,172,146,207,61,81,85,206,27,238,195,144,67,77,178,48,163,136,34,36,173,219,0,137,119,17,85,215,206,80,203,250,216,253,175,118,118,
165,218,213,109,169,83,29,138,121,232,24,148,16,190,132,192,138,136,10,155,156,169,119,123,233,178,45,46,63,22,51,211,219,68,137,91,213,193,163,84,201,6,194,115,87,137,154,39,109,153,137,143,150,29,143,
243,143,229,19,68,95,20,147,125,190,156,76,47,115,155,61,153,173,204,124,141,242,44,92,49,239,3,134,234,220,19,154,134,220,120,213,94,15,208,56,178,229,233,23,34,237,251,224,218,144,91,141,231,110,56,
82,100,179,137,133,75,158,172,224,94,190,131,56,43,202,142,186,214,40,49,209,36,237,121,103,9,179,213,144,42,238,20,253,200,81,42,236,76,136,236,67,92,212,174,77,173,238,112,88,51,31,254,100,26,191,170,
249,130,32,224,193,196,10,211,136,227,94,65,175,86,13,58,147,237,243,167,87,241,204,54,27,251,69,105,54,158,204,43,210,75,153,25,255,100,240,111,102,106,170,122,79,158,223,34,231,152,101,203,42,12,40,
44,225,184,131,38,165,136,46,143,216,82,46,5,165,158,101,251,3,90,31,133,248,165,26,104,20,162,121,89,224,219,198,157,173,87,119,166,34,0,34,254,176,189,24,19,142,156,185,86,65,248,29,126,226,100,74,5,
211,245,108,10,198,196,47,251,116,70,29,85,20,28,126,219,236,178,108,81,21,106,171,242,72,30,91,171,67,2,114,122,222,76,251,210,41,56,247,200,96,248,59,42,75,91,56,33,145,143,138,96,239,7,39,48,26,103,
71,109,71,26,181,85,45,21,94,251,252,4,51,65,85,83,122,183,246,185,60,157,173,155,173,194,172,134,103,85,31,247,61,65,254,170,204,109,174,13,116,217,223,115,89,180,125,54,171,63,54,252,107,91,179,255,
178,197,16,69,93,61,140,116,166,111,203,227,26,220,3,251,209,234,138,248,119,157,173,65,200,41,210,205,73,250,130,245,12,171,116,44,57,109,140,114,246,102,205,185,103,167,143,125,90,213,156,53,236,73,
232,166,63,108,41,19,25,20,227,221,221,63,142,41,121,50,184,85,150,36,108,120,205,78,61,52,110,124,180,230,9,62,153,62,50,119,74,135,136,185,213,193,5,15,118,50,163,171,79,43,31,112,152,161,94,67,235,
74,218,136,221,35,86,142,178,0,80,212,172,72,47,246,38,70,162,95,83,115,77,75,206,86,186,107,3,229,162,171,204,34,205,231,212,37,75,98,173,84,162,193,244,220,91,154,93,254,247,30,8,61,187,247,191,149,
194,170,11,53,4,206,7,193,235,145,98,218,3,51,60,206,106,79,140,129,127,104,115,50,128,94,25,118,187,139,255,232,143,186,184,46,228,234,121,119,119,53,227,102,205,116,255,248,168,16,22,93,142,43,236,102,
163,46,76,150,226,75,94,100,247,146,73,15,148,71,228,27,138,146,206,117,116,173,176,193,26,103,43,7,209,233,237,3,250,120,65,29,164,160,228,15,139,127,182,53,183,56,175,93,30,160,163,8,216,122,94,112,
123,102,133,10,150,75,108,211,43,33,192,252,30,207,39,49,228,130,200,179,173,61,233,109,111,143,156,83,26,243,156,143,173,172,8,214,150,234,15,221,95,175,247,74,207,230,188,144,64,210,78,16,90,173,18,
164,186,216,89,33,238,161,173,138,133,137,113,115,145,148,14,93,124,6,134,219,141,186,14,88,177,197,230,254,53,174,193,211,20,175,46,75,184,221,200,141,60,159,78,70,151,188,185,50,241,90,201,9,151,110,
184,113,156,18,106,236,1,212,106,251,155,157,230,34,61,181,80,97,154,223,181,67,63,60,127,207,77,156,217,145,85,174,47,30,225,243,167,175,152,143,195,225,72,126,107,225,227,237,131,163,119,76,105,206,
255,138,29,192,31,247,137,27,132,75,29,15,157,143,29,112,224,235,219,184,93,161,67,74,7,13,222,161,243,222,190,92,134,223,116,228,136,43,204,59,217,220,50,239,227,255,76,163,201,214,75,146,85,168,8,186,
81,95,223,81,196,243,92,90,0,209,19,155,213,198,200,54,206,204,51,23,80,219,168,237,167,205,38,120,170,170,17,217,152,229,22,157,193,126,191,9,166,34,144,45,66,206,162,122,29,240,252,189,211,241,240,241,
227,229,118,123,87,115,254,37,238,29,237,139,199,65,247,143,99,163,54,29,60,37,224,149,109,61,88,204,167,165,206,29,170,221,204,46,100,14,177,250,218,82,4,243,225,198,170,235,111,85,79,1,249,242,53,221,
132,200,13,55,116,112,69,78,198,67,17,251,180,23,39,48,141,212,40,89,82,216,81,174,21,79,138,151,187,76,164,142,68,223,218,165,214,172,190,202,246,151,92,60,30,92,38,206,33,137,164,164,244,7,115,34,92,
38,208,137,196,4,55,218,229,102,174,57,238,212,228,205,108,73,85,95,48,116,113,187,193,92,246,41,111,58,39,14,93,53,231,224,224,235,203,203,126,52,113,110,103,157,171,18,69,253,53,226,227,126,204,78,231,
206,46,75,209,151,217,249,46,235,154,92,24,161,36,87,78,31,43,133,159,139,29,153,35,210,129,28,110,60,181,122,119,76,106,5,167,16,84,121,136,121,119,172,74,23,81,186,110,92,37,226,68,17,76,17,114,225,
254,93,205,180,21,168,230,82,123,21,180,83,109,187,2,244,133,167,54,50,10,67,80,61,42,127,27,104,197,22,125,190,192,98,211,164,170,134,242,231,63,251,155,6,81,221,0,218,208,69,116,250,216,71,218,13,195,
228,88,28,235,99,182,10,201,53,146,47,86,127,73,243,97,136,8,151,204,31,222,132,147,96,255,169,105,219,168,227,55,38,198,113,102,216,201,166,136,235,124,147,119,155,204,200,179,14,106,149,206,86,160,79,
62,165,219,34,152,239,224,246,2,106,113,82,139,247,58,17,160,80,143,25,13,106,59,157,15,89,90,233,236,53,14,98,115,253,102,97,202,94,238,93,144,51,54,162,68,219,11,175,125,158,181,0,101,76,25,238,54,137,
64,132,235,254,197,95,254,117,238,244,154,211,245,142,87,53,61,236,24,207,115,217,55,159,234,179,177,189,56,123,54,123,159,251,104,215,81,149,165,149,136,3,246,113,83,54,16,222,140,141,211,231,18,46,213,
254,235,88,45,145,132,27,181,218,167,89,20,217,33,226,153,217,231,78,188,125,245,99,100,115,81,210,139,50,149,160,176,97,114,69,12,190,113,62,31,204,54,203,133,223,179,43,215,136,26,147,76,36,130,162,
206,78,219,92,221,58,231,126,13,219,3,120,179,103,11,189,110,99,162,142,139,139,115,205,63,132,202,246,158,22,66,20,43,53,122,242,233,217,42,34,156,212,129,106,48,212,194,108,129,79,64,94,23,239,118,119,
201,176,221,37,160,83,101,2,44,156,96,181,108,73,238,168,37,46,98,237,134,62,170,96,95,212,250,35,218,205,45,125,100,218,247,43,100,104,173,116,229,102,62,145,128,244,235,163,143,125,169,116,12,244,235,
203,155,92,39,186,8,181,120,51,234,102,18,143,167,126,224,81,187,234,16,84,213,8,27,143,36,68,73,142,162,207,103,174,205,116,177,210,169,220,45,66,155,215,231,33,99,153,15,58,111,220,199,235,58,133,245,
104,104,191,248,76,27,113,100,120,254,192,56,45,110,37,180,178,94,246,150,19,27,27,249,65,206,183,40,81,211,184,161,139,143,20,85,171,152,65,106,139,67,113,102,138,121,121,5,132,182,23,42,186,45,85,63,
160,28,198,150,41,31,50,228,155,241,86,42,254,148,211,11,184,165,73,254,238,114,79,3,162,170,153,180,185,171,42,219,97,251,52,29,149,30,149,226,119,114,24,88,93,157,124,100,178,202,42,244,139,113,143,
226,120,86,246,79,98,20,251,244,56,200,48,180,65,127,232,199,221,243,54,10,232,3,195,243,105,225,33,23,135,179,209,137,224,78,119,163,218,20,13,180,238,164,192,112,70,6,219,185,48,181,200,40,156,220,83,
143,173,69,141,218,222,93,155,170,222,91,44,255,174,69,22,144,23,67,57,29,5,215,139,151,155,196,102,27,109,107,104,215,86,247,1,101,37,151,29,11,103,205,125,208,208,222,135,102,205,199,43,170,177,68,161,
174,140,238,165,226,150,229,110,15,19,84,2,102,70,185,183,12,110,163,227,120,75,55,73,48,147,76,85,181,209,109,90,33,128,135,206,236,142,114,39,162,168,197,96,238,146,224,198,118,62,119,244,0,95,118,59,
95,142,62,54,72,181,223,100,13,208,160,138,146,181,176,237,60,196,184,199,90,98,73,125,40,212,146,25,219,194,58,67,241,242,122,21,226,11,187,238,196,180,14,229,222,4,230,147,136,108,95,156,149,89,151,
203,5,119,153,229,31,71,246,109,111,222,216,48,40,62,206,79,192,0,237,145,168,153,19,221,209,88,169,115,72,20,92,191,154,136,184,42,45,216,136,159,219,178,113,224,188,170,91,130,123,79,97,225,121,48,64,
34,175,97,22,168,155,143,104,103,255,179,182,61,95,46,208,87,47,111,55,31,76,231,126,108,185,91,248,207,126,231,231,144,72,236,26,72,221,135,143,223,224,246,159,62,191,134,109,128,210,120,254,240,83,124,
160,110,186,77,251,26,102,145,108,209,238,8,197,71,101,66,117,220,137,126,136,145,119,60,120,180,59,64,152,224,18,227,221,211,249,3,246,211,109,192,237,79,41,214,125,127,97,140,85,181,169,104,214,173,
196,127,93,127,166,228,197,70,183,56,21,177,197,187,184,142,210,19,45,108,81,211,30,160,241,224,196,64,224,218,30,190,223,154,10,152,136,98,77,37,198,128,205,125,58,95,94,223,230,182,59,111,196,69,33,
158,177,237,47,243,188,145,168,20,42,125,5,33,94,143,43,175,220,40,245,198,14,199,29,46,136,59,82,249,84,125,40,112,247,26,1,213,183,223,254,242,211,167,95,255,207,255,241,167,152,62,184,139,170,167,188,
124,252,240,177,216,123,112,194,189,235,17,243,184,185,207,182,108,127,240,7,255,235,187,239,190,168,93,87,63,78,110,230,86,155,46,5,231,93,102,183,30,239,240,35,228,242,144,121,73,44,85,28,164,158,189,
194,21,184,195,175,146,199,112,199,146,96,159,11,214,156,84,5,198,179,243,28,169,146,229,62,45,215,235,85,5,88,203,93,13,27,125,96,132,206,223,109,151,156,44,216,116,180,89,52,104,109,220,254,243,231,
87,215,165,219,107,199,223,239,111,111,95,95,175,174,164,117,143,98,211,230,102,178,220,198,113,152,216,162,70,220,23,60,178,60,245,96,255,3,207,243,135,127,248,191,191,253,213,87,43,153,243,229,195,225,
116,113,143,37,243,164,227,225,120,126,249,250,105,203,13,116,104,65,254,235,127,249,239,127,254,231,223,170,181,109,249,252,252,228,242,179,111,127,245,171,174,63,9,229,29,177,191,14,60,35,16,162,6,207,
149,109,201,112,215,239,190,251,212,179,198,185,253,252,249,107,215,226,78,23,31,121,248,242,242,2,153,87,230,135,237,202,110,87,210,115,158,159,159,191,124,254,252,244,252,140,15,127,252,120,186,94,199,
203,229,60,77,144,101,177,104,187,250,253,237,253,233,114,249,242,229,69,20,234,245,71,63,250,209,175,191,253,252,211,223,252,201,167,239,62,177,189,29,89,244,246,143,198,167,167,15,85,29,63,125,247,138,
248,137,173,175,235,250,243,151,151,231,167,39,198,28,112,217,213,240,39,22,185,119,201,119,223,125,247,241,227,71,197,46,243,55,63,250,17,190,254,233,211,87,204,51,61,41,183,224,109,15,199,227,197,228,
136,226,247,126,239,95,221,199,249,229,245,253,47,255,239,31,255,214,79,127,154,79,22,220,196,186,87,59,216,220,71,80,249,120,5,220,155,48,1,147,62,131,59,255,101,164,164,48,226,237,102,253,59,70,233,
211,171,92,117,35,79,66,84,102,246,71,127,244,255,50,38,149,156,144,217,91,103,184,108,194,156,106,57,129,153,100,163,43,68,40,61,183,65,240,24,224,190,170,244,52,183,254,54,22,188,155,29,30,147,162,243,
150,87,241,216,102,95,45,247,58,215,241,92,152,65,124,113,34,132,0,237,249,181,40,187,223,250,173,159,29,123,197,233,118,17,165,219,220,8,118,219,27,43,176,49,140,122,16,36,247,0,50,82,227,126,185,166,
130,136,35,146,207,221,50,142,229,160,87,81,178,123,41,101,0,220,47,66,143,186,107,129,219,192,63,14,67,174,252,21,201,154,177,167,108,49,10,31,187,152,207,252,114,51,12,187,172,97,111,200,159,219,192,
207,147,178,213,91,6,113,88,111,176,55,71,86,30,124,157,114,183,5,1,91,131,43,148,61,245,108,115,168,90,105,83,103,96,142,47,167,67,89,185,216,117,173,138,108,227,103,108,12,246,224,156,114,56,62,171,
42,40,101,186,100,233,147,74,16,252,232,136,45,55,222,115,221,235,166,19,15,232,54,233,99,155,74,199,89,42,162,224,176,117,190,220,73,8,30,60,212,29,48,237,208,150,139,218,30,10,120,165,187,8,23,211,108,
73,199,193,110,24,165,181,217,236,164,175,42,1,33,255,68,39,52,210,78,167,217,39,155,90,117,10,229,89,148,197,171,221,129,70,46,235,126,24,223,163,83,133,79,181,216,91,198,153,93,106,115,233,126,200,93,
127,192,44,201,59,163,187,72,124,11,177,196,243,229,252,225,233,233,251,210,40,45,145,169,153,222,32,59,110,253,104,173,150,76,77,219,35,207,205,213,212,150,240,61,11,96,46,114,178,60,250,16,80,119,164,
9,114,49,124,90,134,144,166,124,36,192,247,253,47,243,25,113,233,225,133,236,57,78,59,126,143,44,67,202,28,197,205,220,146,252,21,241,228,247,19,247,204,120,246,193,97,62,243,68,87,176,170,125,28,227,
92,186,93,103,204,103,59,79,247,183,83,255,92,136,254,194,164,101,87,118,15,63,200,141,186,182,157,241,250,32,82,63,48,128,124,186,157,19,106,123,23,144,156,230,255,193,132,58,93,85,236,167,192,249,136,
26,29,59,144,59,245,248,148,239,180,7,146,238,177,246,96,2,6,247,3,11,105,127,188,194,97,138,197,193,154,33,229,241,20,241,7,171,24,210,247,151,216,188,108,234,57,238,156,205,106,120,103,251,190,245,248,
131,84,30,246,121,55,219,55,159,113,24,119,50,64,198,120,246,90,135,71,28,235,89,211,22,11,62,187,221,210,107,93,254,64,115,156,231,207,251,62,228,199,40,50,91,38,56,1,183,186,55,160,231,91,47,166,71,
189,172,121,255,249,188,211,244,8,208,138,220,130,37,131,65,187,14,22,183,206,1,182,79,249,204,143,148,220,3,105,223,254,185,123,239,14,150,251,236,149,248,96,108,59,172,247,25,45,251,33,80,201,131,127,
76,214,255,23,96,0,123,107,114,26,122,124,52,114,0,0,0,0,73,69,78,68,174,66,96,130,0,0};

const char* MainViewComponent::buttonOn_png = (const char*) resource_MainViewComponent_buttonOn_png;
const int MainViewComponent::buttonOn_pngSize = 19557;


//[EndFile] You can add extra defines here...
//[/EndFile]
