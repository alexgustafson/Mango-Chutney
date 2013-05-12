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

#include "PadFieldComponent.h"


//[MiscUserDefs] You can add your own user definitions and misc code here...
//[/MiscUserDefs]

//==============================================================================
PadField::PadField ()
{
    addAndMakeVisible (pad1 = new ImageButton ("new button"));
    pad1->addListener (this);

    pad1->setImages (false, true, true,
                     ImageCache::getFromMemory (pad_off_png, pad_off_pngSize), 1.000f, Colour (0x13ffffff),
                     Image(), 1.000f, Colour (0x00000000),
                     ImageCache::getFromMemory (pad_light_png, pad_light_pngSize), 1.000f, Colour (0x00000000));
    addAndMakeVisible (pad2 = new ImageButton ("new button"));
    pad2->addListener (this);

    pad2->setImages (false, true, true,
                     ImageCache::getFromMemory (pad_off_png, pad_off_pngSize), 1.000f, Colour (0x00000000),
                     Image(), 1.000f, Colour (0x00000000),
                     ImageCache::getFromMemory (pad_light_png, pad_light_pngSize), 1.000f, Colour (0x00000000));
    addAndMakeVisible (pad3 = new ImageButton ("new button"));
    pad3->addListener (this);

    pad3->setImages (false, true, true,
                     ImageCache::getFromMemory (pad_off_png, pad_off_pngSize), 1.000f, Colour (0x00000000),
                     Image(), 1.000f, Colour (0x00000000),
                     ImageCache::getFromMemory (pad_light_png, pad_light_pngSize), 1.000f, Colour (0x00000000));
    addAndMakeVisible (pad4 = new ImageButton ("new button"));
    pad4->addListener (this);

    pad4->setImages (false, true, true,
                     ImageCache::getFromMemory (pad_off_png, pad_off_pngSize), 1.000f, Colour (0x00000000),
                     Image(), 1.000f, Colour (0x00000000),
                     ImageCache::getFromMemory (pad_light_png, pad_light_pngSize), 1.000f, Colour (0x00000000));
    addAndMakeVisible (pad5 = new ImageButton ("new button"));
    pad5->addListener (this);

    pad5->setImages (false, true, true,
                     ImageCache::getFromMemory (pad_off_png, pad_off_pngSize), 1.000f, Colour (0x00000000),
                     Image(), 1.000f, Colour (0x00000000),
                     ImageCache::getFromMemory (pad_light_png, pad_light_pngSize), 1.000f, Colour (0x00000000));
    addAndMakeVisible (pad6 = new ImageButton ("new button"));
    pad6->addListener (this);

    pad6->setImages (false, true, true,
                     ImageCache::getFromMemory (pad_off_png, pad_off_pngSize), 1.000f, Colour (0x00000000),
                     Image(), 1.000f, Colour (0x00000000),
                     ImageCache::getFromMemory (pad_light_png, pad_light_pngSize), 1.000f, Colour (0x00000000));
    addAndMakeVisible (pad7 = new ImageButton ("new button"));
    pad7->addListener (this);

    pad7->setImages (false, true, true,
                     ImageCache::getFromMemory (pad_off_png, pad_off_pngSize), 1.000f, Colour (0x00000000),
                     Image(), 1.000f, Colour (0x00000000),
                     ImageCache::getFromMemory (pad_light_png, pad_light_pngSize), 1.000f, Colour (0x00000000));
    addAndMakeVisible (pad8 = new ImageButton ("new button"));
    pad8->addListener (this);

    pad8->setImages (false, true, true,
                     ImageCache::getFromMemory (pad_off_png, pad_off_pngSize), 1.000f, Colour (0x00000000),
                     Image(), 1.000f, Colour (0x00000000),
                     ImageCache::getFromMemory (pad_light_png, pad_light_pngSize), 1.000f, Colour (0x00000000));
    addAndMakeVisible (pad9 = new ImageButton ("new button"));
    pad9->addListener (this);

    pad9->setImages (false, true, true,
                     ImageCache::getFromMemory (pad_off_png, pad_off_pngSize), 1.000f, Colour (0x00000000),
                     Image(), 1.000f, Colour (0x00000000),
                     ImageCache::getFromMemory (pad_light_png, pad_light_pngSize), 1.000f, Colour (0x00000000));
    addAndMakeVisible (pad10 = new ImageButton ("new button"));
    pad10->addListener (this);

    pad10->setImages (false, true, true,
                      ImageCache::getFromMemory (pad_off_png, pad_off_pngSize), 1.000f, Colour (0x00000000),
                      Image(), 1.000f, Colour (0x00000000),
                      ImageCache::getFromMemory (pad_light_png, pad_light_pngSize), 1.000f, Colour (0x00000000));
    addAndMakeVisible (pad11 = new ImageButton ("new button"));
    pad11->addListener (this);

    pad11->setImages (false, true, true,
                      ImageCache::getFromMemory (pad_off_png, pad_off_pngSize), 1.000f, Colour (0x00000000),
                      Image(), 1.000f, Colour (0x00000000),
                      ImageCache::getFromMemory (pad_light_png, pad_light_pngSize), 1.000f, Colour (0x00000000));
    addAndMakeVisible (pad12 = new ImageButton ("new button"));
    pad12->addListener (this);

    pad12->setImages (false, true, true,
                      ImageCache::getFromMemory (pad_off_png, pad_off_pngSize), 1.000f, Colour (0x00000000),
                      Image(), 1.000f, Colour (0x00000000),
                      ImageCache::getFromMemory (pad_light_png, pad_light_pngSize), 1.000f, Colour (0x00000000));
    addAndMakeVisible (pad13 = new ImageButton ("new button"));
    pad13->addListener (this);

    pad13->setImages (false, true, true,
                      ImageCache::getFromMemory (pad_off_png, pad_off_pngSize), 1.000f, Colour (0x00000000),
                      Image(), 1.000f, Colour (0x00000000),
                      ImageCache::getFromMemory (pad_light_png, pad_light_pngSize), 1.000f, Colour (0x00000000));
    addAndMakeVisible (pad14 = new ImageButton ("new button"));
    pad14->addListener (this);

    pad14->setImages (false, true, true,
                      ImageCache::getFromMemory (pad_off_png, pad_off_pngSize), 1.000f, Colour (0x00000000),
                      Image(), 1.000f, Colour (0x00000000),
                      ImageCache::getFromMemory (pad_light_png, pad_light_pngSize), 1.000f, Colour (0x00000000));
    addAndMakeVisible (pad15 = new ImageButton ("new button"));
    pad15->addListener (this);

    pad15->setImages (false, true, true,
                      ImageCache::getFromMemory (pad_off_png, pad_off_pngSize), 1.000f, Colour (0x00000000),
                      Image(), 1.000f, Colour (0x00000000),
                      ImageCache::getFromMemory (pad_light_png, pad_light_pngSize), 1.000f, Colour (0x00000000));
    addAndMakeVisible (pad16 = new ImageButton ("new button"));
    pad16->addListener (this);

    pad16->setImages (false, true, true,
                      ImageCache::getFromMemory (pad_off_png, pad_off_pngSize), 1.000f, Colour (0x00000000),
                      Image(), 1.000f, Colour (0x00000000),
                      ImageCache::getFromMemory (pad_light_png, pad_light_pngSize), 1.000f, Colour (0x00000000));

    //[UserPreSize]
    //[/UserPreSize]

    setSize (600, 400);


    //[Constructor] You can add your own custom stuff here..
    pad1->setName("pad1");
    pad2->setName("pad2");
    pad3->setName("pad3");
    pad4->setName("pad4");
    pad5->setName("pad5");
    pad6->setName("pad6");
    pad7->setName("pad7");
    pad8->setName("pad8");
    pad9->setName("pad9");
    pad10->setName("pad10");
    pad11->setName("pad11");
    pad12->setName("pad12");
    pad13->setName("pad13");
    pad14->setName("pad14");
    pad15->setName("pad15");
    pad16->setName("pad16");


    //[/Constructor]
}

PadField::~PadField()
{
    //[Destructor_pre]. You can add your own custom destruction code here..
    //[/Destructor_pre]

    pad1 = nullptr;
    pad2 = nullptr;
    pad3 = nullptr;
    pad4 = nullptr;
    pad5 = nullptr;
    pad6 = nullptr;
    pad7 = nullptr;
    pad8 = nullptr;
    pad9 = nullptr;
    pad10 = nullptr;
    pad11 = nullptr;
    pad12 = nullptr;
    pad13 = nullptr;
    pad14 = nullptr;
    pad15 = nullptr;
    pad16 = nullptr;


    //[Destructor]. You can add your own custom destruction code here..
    mainDrumController = nullptr;
    //[/Destructor]
}

//==============================================================================
void PadField::paint (Graphics& g)
{
    //[UserPrePaint] Add your own custom painting code here..
    //[/UserPrePaint]

    g.fillAll (Colours::burlywood);

    //[UserPaint] Add your own custom painting code here..
    //[/UserPaint]
}

void PadField::resized()
{
    pad1->setBounds (0, 0, 96, 96);
    pad2->setBounds (96, 0, 96, 96);
    pad3->setBounds (192, 0, 96, 96);
    pad4->setBounds (288, 0, 96, 96);
    pad5->setBounds (0, 96, 96, 96);
    pad6->setBounds (96, 96, 96, 96);
    pad7->setBounds (192, 96, 96, 96);
    pad8->setBounds (288, 96, 96, 96);
    pad9->setBounds (0, 192, 96, 96);
    pad10->setBounds (96, 192, 96, 96);
    pad11->setBounds (192, 192, 96, 96);
    pad12->setBounds (288, 192, 96, 96);
    pad13->setBounds (0, 288, 96, 96);
    pad14->setBounds (96, 288, 96, 96);
    pad15->setBounds (192, 288, 96, 96);
    pad16->setBounds (288, 288, 96, 96);
    //[UserResized] Add your own custom resize handling here..

    
    
    int i = 0;
    int j = 0;
    
    if(getHeight() >= getWidth())
    {
        int padWidth = (int)getWidth() / 4;
        int padHeight = (int)getHeight() / 4;
        
        pad1->setBounds(padWidth * (i++ % 4), padHeight * j, padWidth, padHeight);
        pad2->setBounds(padWidth * (i++ % 4), padHeight * j, padWidth, padHeight);
        pad3->setBounds(padWidth * (i++ % 4), padHeight * j, padWidth, padHeight);
        pad4->setBounds(padWidth * (i++ % 4), padHeight * j++, padWidth, padHeight);
        pad5->setBounds(padWidth * (i++ % 4), padHeight * j, padWidth, padHeight);
        pad6->setBounds(padWidth * (i++ % 4), padHeight * j, padWidth, padHeight);
        pad7->setBounds(padWidth * (i++ % 4), padHeight * j, padWidth, padHeight);
        pad8->setBounds(padWidth * (i++ % 4), padHeight * j++, padWidth, padHeight);
        pad9->setBounds(padWidth * (i++ % 4), padHeight * j, padWidth, padHeight);
        pad10->setBounds(padWidth * (i++ % 4), padHeight * j, padWidth, padHeight);
        pad11->setBounds(padWidth * (i++ % 4), padHeight * j, padWidth, padHeight);
        pad12->setBounds(padWidth * (i++ % 4), padHeight * j++, padWidth, padHeight);
        pad13->setBounds(padWidth * (i++ % 4), padHeight * j, padWidth, padHeight);
        pad14->setBounds(padWidth * (i++ % 4), padHeight * j, padWidth, padHeight);
        pad15->setBounds(padWidth * (i++ % 4), padHeight * j, padWidth, padHeight);
        pad16->setBounds(padWidth * (i++ % 4), padHeight * j++, padWidth, padHeight);
    }else
    {
        int padWidth = (int)getWidth() / 8;
        int padHeight = (int)getHeight() / 2;
        
        pad1->setBounds(padWidth * (i++ % 8), padHeight * j, padWidth, padHeight);
        pad2->setBounds(padWidth * (i++ % 8), padHeight * j, padWidth, padHeight);
        pad3->setBounds(padWidth * (i++ % 8), padHeight * j, padWidth, padHeight);
        pad4->setBounds(padWidth * (i++ % 8), padHeight * j, padWidth, padHeight);
        pad5->setBounds(padWidth * (i++ % 8), padHeight * j, padWidth, padHeight);
        pad6->setBounds(padWidth * (i++ % 8), padHeight * j, padWidth, padHeight);
        pad7->setBounds(padWidth * (i++ % 8), padHeight * j, padWidth, padHeight);
        pad8->setBounds(padWidth * (i++ % 8), padHeight * j++, padWidth, padHeight);
        pad9->setBounds(padWidth * (i++ % 8), padHeight * j, padWidth, padHeight);
        pad10->setBounds(padWidth * (i++ % 8), padHeight * j, padWidth, padHeight);
        pad11->setBounds(padWidth * (i++ % 8), padHeight * j, padWidth, padHeight);
        pad12->setBounds(padWidth * (i++ % 8), padHeight * j, padWidth, padHeight);
        pad13->setBounds(padWidth * (i++ % 8), padHeight * j, padWidth, padHeight);
        pad14->setBounds(padWidth * (i++ % 8), padHeight * j, padWidth, padHeight);
        pad15->setBounds(padWidth * (i++ % 8), padHeight * j, padWidth, padHeight);
        pad16->setBounds(padWidth * (i++ % 8), padHeight * j++, padWidth, padHeight);
    }

    //[/UserResized]
}

void PadField::buttonClicked (Button* buttonThatWasClicked)
{
    //[UserbuttonClicked_Pre]
    //[/UserbuttonClicked_Pre]

    if (buttonThatWasClicked == pad1)
    {
        //[UserButtonCode_pad1] -- add your button handler code here..
        //[/UserButtonCode_pad1]
    }
    else if (buttonThatWasClicked == pad2)
    {
        //[UserButtonCode_pad2] -- add your button handler code here..
        //[/UserButtonCode_pad2]
    }
    else if (buttonThatWasClicked == pad3)
    {
        //[UserButtonCode_pad3] -- add your button handler code here..
        //[/UserButtonCode_pad3]
    }
    else if (buttonThatWasClicked == pad4)
    {
        //[UserButtonCode_pad4] -- add your button handler code here..
        //[/UserButtonCode_pad4]
    }
    else if (buttonThatWasClicked == pad5)
    {
        //[UserButtonCode_pad5] -- add your button handler code here..
        //[/UserButtonCode_pad5]
    }
    else if (buttonThatWasClicked == pad6)
    {
        //[UserButtonCode_pad6] -- add your button handler code here..
        //[/UserButtonCode_pad6]
    }
    else if (buttonThatWasClicked == pad7)
    {
        //[UserButtonCode_pad7] -- add your button handler code here..
        //[/UserButtonCode_pad7]
    }
    else if (buttonThatWasClicked == pad8)
    {
        //[UserButtonCode_pad8] -- add your button handler code here..
        //[/UserButtonCode_pad8]
    }
    else if (buttonThatWasClicked == pad9)
    {
        //[UserButtonCode_pad9] -- add your button handler code here..
        //[/UserButtonCode_pad9]
    }
    else if (buttonThatWasClicked == pad10)
    {
        //[UserButtonCode_pad10] -- add your button handler code here..
        //[/UserButtonCode_pad10]
    }
    else if (buttonThatWasClicked == pad11)
    {
        //[UserButtonCode_pad11] -- add your button handler code here..
        //[/UserButtonCode_pad11]
    }
    else if (buttonThatWasClicked == pad12)
    {
        //[UserButtonCode_pad12] -- add your button handler code here..
        //[/UserButtonCode_pad12]
    }
    else if (buttonThatWasClicked == pad13)
    {
        //[UserButtonCode_pad13] -- add your button handler code here..
        //[/UserButtonCode_pad13]
    }
    else if (buttonThatWasClicked == pad14)
    {
        //[UserButtonCode_pad14] -- add your button handler code here..
        //[/UserButtonCode_pad14]
    }
    else if (buttonThatWasClicked == pad15)
    {
        //[UserButtonCode_pad15] -- add your button handler code here..
        //[/UserButtonCode_pad15]
    }
    else if (buttonThatWasClicked == pad16)
    {
        //[UserButtonCode_pad16] -- add your button handler code here..
        //[/UserButtonCode_pad16]
    }

    //[UserbuttonClicked_Post]
    //[/UserbuttonClicked_Post]
}



//[MiscUserCode] You can add your own definitions of your custom methods or any other code here...
void PadField::buttonStateChanged(juce::Button *button)
{
    mainDrumController->buttonStateChanged(button);
}

void PadField::addDrumController(DrumController* drumController)
{
    mainDrumController = drumController;
}
//[/MiscUserCode]


//==============================================================================
#if 0
/*  -- Introjucer information section --

    This is where the Introjucer stores the metadata that describe this GUI layout, so
    make changes in here at your peril!

BEGIN_JUCER_METADATA

<JUCER_COMPONENT documentType="Component" className="PadField" componentName=""
                 parentClasses="public Component" constructorParams="" variableInitialisers=""
                 snapPixels="8" snapActive="1" snapShown="1" overlayOpacity="0.330000013"
                 fixedSize="0" initialWidth="600" initialHeight="400">
  <BACKGROUND backgroundColour="ffdeb887"/>
  <IMAGEBUTTON name="new button" id="7d32e006f32652e5" memberName="pad1" virtualName=""
               explicitFocusOrder="0" pos="0 0 96 96" buttonText="new button"
               connectedEdges="0" needsCallback="1" radioGroupId="0" keepProportions="1"
               resourceNormal="pad_off_png" opacityNormal="1" colourNormal="13ffffff"
               resourceOver="" opacityOver="1" colourOver="0" resourceDown="pad_light_png"
               opacityDown="1" colourDown="0"/>
  <IMAGEBUTTON name="new button" id="c33024e3ca1a0405" memberName="pad2" virtualName=""
               explicitFocusOrder="0" pos="96 0 96 96" buttonText="new button"
               connectedEdges="0" needsCallback="1" radioGroupId="0" keepProportions="1"
               resourceNormal="pad_off_png" opacityNormal="1" colourNormal="0"
               resourceOver="" opacityOver="1" colourOver="0" resourceDown="pad_light_png"
               opacityDown="1" colourDown="0"/>
  <IMAGEBUTTON name="new button" id="e2c3d5cbaae04c26" memberName="pad3" virtualName=""
               explicitFocusOrder="0" pos="192 0 96 96" buttonText="new button"
               connectedEdges="0" needsCallback="1" radioGroupId="0" keepProportions="1"
               resourceNormal="pad_off_png" opacityNormal="1" colourNormal="0"
               resourceOver="" opacityOver="1" colourOver="0" resourceDown="pad_light_png"
               opacityDown="1" colourDown="0"/>
  <IMAGEBUTTON name="new button" id="821a24bb539d979d" memberName="pad4" virtualName=""
               explicitFocusOrder="0" pos="288 0 96 96" buttonText="new button"
               connectedEdges="0" needsCallback="1" radioGroupId="0" keepProportions="1"
               resourceNormal="pad_off_png" opacityNormal="1" colourNormal="0"
               resourceOver="" opacityOver="1" colourOver="0" resourceDown="pad_light_png"
               opacityDown="1" colourDown="0"/>
  <IMAGEBUTTON name="new button" id="c9e3181ecc4cc2c1" memberName="pad5" virtualName=""
               explicitFocusOrder="0" pos="0 96 96 96" buttonText="new button"
               connectedEdges="0" needsCallback="1" radioGroupId="0" keepProportions="1"
               resourceNormal="pad_off_png" opacityNormal="1" colourNormal="0"
               resourceOver="" opacityOver="1" colourOver="0" resourceDown="pad_light_png"
               opacityDown="1" colourDown="0"/>
  <IMAGEBUTTON name="new button" id="b1e2445fcddc6ce4" memberName="pad6" virtualName=""
               explicitFocusOrder="0" pos="96 96 96 96" buttonText="new button"
               connectedEdges="0" needsCallback="1" radioGroupId="0" keepProportions="1"
               resourceNormal="pad_off_png" opacityNormal="1" colourNormal="0"
               resourceOver="" opacityOver="1" colourOver="0" resourceDown="pad_light_png"
               opacityDown="1" colourDown="0"/>
  <IMAGEBUTTON name="new button" id="16d25e8854ed1fd0" memberName="pad7" virtualName=""
               explicitFocusOrder="0" pos="192 96 96 96" buttonText="new button"
               connectedEdges="0" needsCallback="1" radioGroupId="0" keepProportions="1"
               resourceNormal="pad_off_png" opacityNormal="1" colourNormal="0"
               resourceOver="" opacityOver="1" colourOver="0" resourceDown="pad_light_png"
               opacityDown="1" colourDown="0"/>
  <IMAGEBUTTON name="new button" id="e8c2af11a520884c" memberName="pad8" virtualName=""
               explicitFocusOrder="0" pos="288 96 96 96" buttonText="new button"
               connectedEdges="0" needsCallback="1" radioGroupId="0" keepProportions="1"
               resourceNormal="pad_off_png" opacityNormal="1" colourNormal="0"
               resourceOver="" opacityOver="1" colourOver="0" resourceDown="pad_light_png"
               opacityDown="1" colourDown="0"/>
  <IMAGEBUTTON name="new button" id="2d70a2b0791396c1" memberName="pad9" virtualName=""
               explicitFocusOrder="0" pos="0 192 96 96" buttonText="new button"
               connectedEdges="0" needsCallback="1" radioGroupId="0" keepProportions="1"
               resourceNormal="pad_off_png" opacityNormal="1" colourNormal="0"
               resourceOver="" opacityOver="1" colourOver="0" resourceDown="pad_light_png"
               opacityDown="1" colourDown="0"/>
  <IMAGEBUTTON name="new button" id="9f3347983cacb2d6" memberName="pad10" virtualName=""
               explicitFocusOrder="0" pos="96 192 96 96" buttonText="new button"
               connectedEdges="0" needsCallback="1" radioGroupId="0" keepProportions="1"
               resourceNormal="pad_off_png" opacityNormal="1" colourNormal="0"
               resourceOver="" opacityOver="1" colourOver="0" resourceDown="pad_light_png"
               opacityDown="1" colourDown="0"/>
  <IMAGEBUTTON name="new button" id="272153ed578f5605" memberName="pad11" virtualName=""
               explicitFocusOrder="0" pos="192 192 96 96" buttonText="new button"
               connectedEdges="0" needsCallback="1" radioGroupId="0" keepProportions="1"
               resourceNormal="pad_off_png" opacityNormal="1" colourNormal="0"
               resourceOver="" opacityOver="1" colourOver="0" resourceDown="pad_light_png"
               opacityDown="1" colourDown="0"/>
  <IMAGEBUTTON name="new button" id="2e5a9f941aa8d9a3" memberName="pad12" virtualName=""
               explicitFocusOrder="0" pos="288 192 96 96" buttonText="new button"
               connectedEdges="0" needsCallback="1" radioGroupId="0" keepProportions="1"
               resourceNormal="pad_off_png" opacityNormal="1" colourNormal="0"
               resourceOver="" opacityOver="1" colourOver="0" resourceDown="pad_light_png"
               opacityDown="1" colourDown="0"/>
  <IMAGEBUTTON name="new button" id="6cfef46d8817e80e" memberName="pad13" virtualName=""
               explicitFocusOrder="0" pos="0 288 96 96" buttonText="new button"
               connectedEdges="0" needsCallback="1" radioGroupId="0" keepProportions="1"
               resourceNormal="pad_off_png" opacityNormal="1" colourNormal="0"
               resourceOver="" opacityOver="1" colourOver="0" resourceDown="pad_light_png"
               opacityDown="1" colourDown="0"/>
  <IMAGEBUTTON name="new button" id="66edcf99efefcaa" memberName="pad14" virtualName=""
               explicitFocusOrder="0" pos="96 288 96 96" buttonText="new button"
               connectedEdges="0" needsCallback="1" radioGroupId="0" keepProportions="1"
               resourceNormal="pad_off_png" opacityNormal="1" colourNormal="0"
               resourceOver="" opacityOver="1" colourOver="0" resourceDown="pad_light_png"
               opacityDown="1" colourDown="0"/>
  <IMAGEBUTTON name="new button" id="e0f3b25d4ec980c5" memberName="pad15" virtualName=""
               explicitFocusOrder="0" pos="192 288 96 96" buttonText="new button"
               connectedEdges="0" needsCallback="1" radioGroupId="0" keepProportions="1"
               resourceNormal="pad_off_png" opacityNormal="1" colourNormal="0"
               resourceOver="" opacityOver="1" colourOver="0" resourceDown="pad_light_png"
               opacityDown="1" colourDown="0"/>
  <IMAGEBUTTON name="new button" id="37e919574569dfc1" memberName="pad16" virtualName=""
               explicitFocusOrder="0" pos="288 288 96 96" buttonText="new button"
               connectedEdges="0" needsCallback="1" radioGroupId="0" keepProportions="1"
               resourceNormal="pad_off_png" opacityNormal="1" colourNormal="0"
               resourceOver="" opacityOver="1" colourOver="0" resourceDown="pad_light_png"
               opacityDown="1" colourDown="0"/>
</JUCER_COMPONENT>

END_JUCER_METADATA
*/
#endif

//==============================================================================
// Binary resources - be careful not to edit any of these sections!

// JUCER_RESOURCE: pad_off_png, 37097, "../../buttons/pad_off.png"
static const unsigned char resource_PadField_pad_off_png[] = { 137,80,78,71,13,10,26,10,0,0,0,13,73,72,68,82,0,0,0,165,0,0,0,165,8,6,0,0,0,61,43,61,218,0,0,0,25,116,69,88,116,83,111,102,116,119,97,114,
101,0,65,100,111,98,101,32,73,109,97,103,101,82,101,97,100,121,113,201,101,60,0,0,3,102,105,84,88,116,88,77,76,58,99,111,109,46,97,100,111,98,101,46,120,109,112,0,0,0,0,0,60,63,120,112,97,99,107,101,116,
32,98,101,103,105,110,61,34,239,187,191,34,32,105,100,61,34,87,53,77,48,77,112,67,101,104,105,72,122,114,101,83,122,78,84,99,122,107,99,57,100,34,63,62,32,60,120,58,120,109,112,109,101,116,97,32,120,109,
108,110,115,58,120,61,34,97,100,111,98,101,58,110,115,58,109,101,116,97,47,34,32,120,58,120,109,112,116,107,61,34,65,100,111,98,101,32,88,77,80,32,67,111,114,101,32,53,46,48,45,99,48,54,48,32,54,49,46,
49,51,52,55,55,55,44,32,50,48,49,48,47,48,50,47,49,50,45,49,55,58,51,50,58,48,48,32,32,32,32,32,32,32,32,34,62,32,60,114,100,102,58,82,68,70,32,120,109,108,110,115,58,114,100,102,61,34,104,116,116,112,
58,47,47,119,119,119,46,119,51,46,111,114,103,47,49,57,57,57,47,48,50,47,50,50,45,114,100,102,45,115,121,110,116,97,120,45,110,115,35,34,62,32,60,114,100,102,58,68,101,115,99,114,105,112,116,105,111,110,
32,114,100,102,58,97,98,111,117,116,61,34,34,32,120,109,108,110,115,58,120,109,112,77,77,61,34,104,116,116,112,58,47,47,110,115,46,97,100,111,98,101,46,99,111,109,47,120,97,112,47,49,46,48,47,109,109,
47,34,32,120,109,108,110,115,58,115,116,82,101,102,61,34,104,116,116,112,58,47,47,110,115,46,97,100,111,98,101,46,99,111,109,47,120,97,112,47,49,46,48,47,115,84,121,112,101,47,82,101,115,111,117,114,99,
101,82,101,102,35,34,32,120,109,108,110,115,58,120,109,112,61,34,104,116,116,112,58,47,47,110,115,46,97,100,111,98,101,46,99,111,109,47,120,97,112,47,49,46,48,47,34,32,120,109,112,77,77,58,79,114,105,
103,105,110,97,108,68,111,99,117,109,101,110,116,73,68,61,34,120,109,112,46,100,105,100,58,48,49,56,48,49,49,55,52,48,55,50,48,54,56,49,49,56,48,49,56,68,65,68,69,55,65,56,69,69,51,67,49,34,32,120,109,
112,77,77,58,68,111,99,117,109,101,110,116,73,68,61,34,120,109,112,46,100,105,100,58,56,66,55,68,67,49,52,67,65,52,51,54,49,49,69,50,57,57,54,67,56,53,51,57,52,55,69,57,67,65,52,52,34,32,120,109,112,77,
77,58,73,110,115,116,97,110,99,101,73,68,61,34,120,109,112,46,105,105,100,58,56,66,55,68,67,49,52,66,65,52,51,54,49,49,69,50,57,57,54,67,56,53,51,57,52,55,69,57,67,65,52,52,34,32,120,109,112,58,67,114,
101,97,116,111,114,84,111,111,108,61,34,65,100,111,98,101,32,80,104,111,116,111,115,104,111,112,32,67,83,53,32,77,97,99,105,110,116,111,115,104,34,62,32,60,120,109,112,77,77,58,68,101,114,105,118,101,
100,70,114,111,109,32,115,116,82,101,102,58,105,110,115,116,97,110,99,101,73,68,61,34,120,109,112,46,105,105,100,58,48,49,56,48,49,49,55,52,48,55,50,48,54,56,49,49,56,48,49,56,68,65,68,69,55,65,56,69,
69,51,67,49,34,32,115,116,82,101,102,58,100,111,99,117,109,101,110,116,73,68,61,34,120,109,112,46,100,105,100,58,48,49,56,48,49,49,55,52,48,55,50,48,54,56,49,49,56,48,49,56,68,65,68,69,55,65,56,69,69,
51,67,49,34,47,62,32,60,47,114,100,102,58,68,101,115,99,114,105,112,116,105,111,110,62,32,60,47,114,100,102,58,82,68,70,62,32,60,47,120,58,120,109,112,109,101,116,97,62,32,60,63,120,112,97,99,107,101,
116,32,101,110,100,61,34,114,34,63,62,156,83,183,175,0,0,141,25,73,68,65,84,120,218,108,189,93,143,36,201,174,36,230,31,145,89,85,61,231,74,15,2,244,160,71,1,218,31,171,23,61,232,191,9,208,23,46,164,5,
36,1,23,90,237,189,123,206,116,101,70,184,187,156,164,25,201,168,217,57,152,211,61,221,89,153,145,17,238,116,210,104,102,172,255,195,255,248,223,255,187,90,203,71,169,245,115,173,245,177,230,252,56,142,
227,99,255,254,57,231,124,180,222,143,214,90,31,215,213,230,92,237,243,235,179,126,127,127,215,222,122,25,115,214,253,179,101,191,182,236,159,41,215,121,149,253,95,165,182,166,127,38,127,41,175,187,46,
254,121,151,23,239,95,171,254,253,126,207,210,122,219,175,107,101,127,86,153,99,232,251,140,253,235,254,204,50,247,107,90,149,191,47,250,94,251,243,245,247,251,115,203,199,199,135,190,78,126,166,239,159,
217,215,173,255,173,159,217,123,57,229,90,246,107,229,159,135,252,253,126,47,249,223,28,251,255,215,180,215,29,93,255,126,142,41,31,224,159,43,255,200,223,203,123,174,253,123,189,166,125,173,242,103,199,
227,225,159,165,215,40,175,193,119,149,207,27,215,208,207,151,159,147,239,42,191,151,215,52,249,51,249,142,124,237,210,87,148,231,243,89,222,239,183,190,230,177,223,251,60,223,251,215,167,190,167,92,147,
124,63,249,199,191,219,209,245,62,200,7,200,117,201,235,229,58,244,122,240,25,252,14,252,199,238,175,92,239,126,102,227,210,207,209,239,171,247,191,235,175,199,241,216,247,117,232,115,210,235,223,239,
223,228,53,251,253,228,31,249,51,94,51,191,143,220,222,11,239,33,215,35,247,117,47,23,249,172,53,237,58,228,203,174,163,247,253,53,134,220,244,253,17,243,106,173,158,251,247,239,53,215,107,191,246,181,
223,232,181,175,237,123,95,215,235,60,207,215,177,23,133,44,192,175,253,67,95,251,75,126,173,218,62,247,239,63,247,23,249,216,111,250,148,103,186,223,113,191,174,239,107,156,237,247,239,223,251,183,189,
202,21,237,55,175,75,22,74,177,155,247,249,249,81,206,125,145,175,215,171,124,238,69,163,15,76,31,207,210,27,117,225,134,232,13,170,93,190,233,254,179,253,16,155,45,2,91,120,83,255,149,135,63,246,195,
106,143,238,127,38,15,227,216,255,93,113,67,229,157,229,33,175,253,123,89,88,199,227,208,235,120,189,222,250,240,42,110,166,92,147,124,190,46,180,98,239,243,241,241,208,27,42,239,219,113,131,229,53,11,
139,67,111,234,97,239,199,215,200,66,217,55,205,94,175,11,97,234,38,233,120,157,174,202,253,7,242,157,158,143,120,255,138,197,53,176,233,100,209,157,215,169,159,41,239,231,223,87,54,71,137,133,126,97,
129,203,38,46,186,33,14,219,64,88,28,114,159,247,99,209,207,151,205,45,65,65,126,47,159,123,244,238,11,232,26,167,110,204,189,54,75,91,182,217,23,22,155,124,190,46,190,113,233,226,213,141,54,236,239,230,
254,189,252,157,110,138,107,232,103,232,70,181,143,215,107,148,123,249,124,118,123,31,9,64,251,125,118,32,193,43,100,157,238,87,236,69,41,47,93,115,92,123,241,156,251,79,223,231,251,253,218,247,225,123,
127,239,199,249,62,123,61,90,189,78,185,39,123,17,239,159,249,220,63,252,181,191,196,175,253,235,31,251,93,126,237,171,251,218,55,98,255,121,253,216,55,115,127,159,254,216,55,122,127,203,186,159,211,254,
105,185,205,186,32,103,57,215,40,143,189,219,199,126,195,183,94,88,219,139,243,51,162,194,180,136,34,95,192,190,240,176,7,58,237,230,74,36,149,29,38,95,62,71,73,253,187,253,223,5,139,69,190,180,60,92,
121,80,114,155,100,9,200,141,95,181,34,82,219,78,150,27,83,176,192,245,166,203,130,172,186,135,138,108,32,249,125,127,62,52,58,201,231,21,93,168,123,97,201,181,33,26,202,53,200,231,60,246,34,144,107,216,
55,176,116,137,144,246,148,61,66,200,34,212,107,58,47,253,252,83,35,14,174,121,63,192,199,222,211,186,121,228,186,246,181,202,247,208,239,178,23,164,92,171,44,94,126,246,192,251,29,71,199,102,222,81,116,
111,28,221,108,221,54,162,70,186,125,93,250,253,138,156,8,26,7,237,94,115,227,224,250,10,54,184,252,220,3,215,36,223,95,158,73,145,5,38,79,81,174,199,182,146,126,103,185,171,29,159,197,215,175,106,247,
249,186,222,178,170,108,243,118,123,158,123,49,105,32,226,245,94,251,123,201,247,196,123,172,253,25,59,94,236,224,120,93,123,125,183,253,17,245,220,191,158,251,245,59,50,182,239,253,62,207,125,111,15,
13,114,182,49,151,68,212,99,95,228,199,190,232,175,253,41,127,188,222,239,63,246,11,254,182,31,196,175,253,240,190,100,193,182,94,159,251,53,15,89,3,207,231,163,191,95,239,118,60,31,178,18,170,61,152,
253,85,206,11,145,112,216,81,246,227,166,200,162,227,141,213,221,160,139,81,94,111,59,146,17,96,249,113,83,185,205,202,208,99,4,59,120,255,183,70,102,236,102,59,108,236,31,57,122,228,232,88,120,239,137,
72,160,15,12,55,159,71,162,108,32,70,195,138,104,114,206,229,169,135,109,132,138,207,25,248,14,203,255,149,8,37,63,248,216,71,158,126,94,111,254,94,250,112,37,44,12,254,76,209,191,31,136,154,18,17,43,
174,91,30,224,126,98,126,173,173,51,74,218,231,203,119,149,205,91,53,90,47,93,144,182,113,247,230,145,180,167,216,2,230,70,30,216,240,140,252,188,143,150,242,88,218,160,167,199,195,162,105,95,182,73,153,
126,240,103,47,156,44,114,202,213,101,27,144,233,147,156,64,227,146,231,186,244,26,7,190,183,254,139,103,44,155,238,232,199,94,144,151,220,240,41,33,114,31,80,151,4,197,125,74,190,247,103,126,215,227,
241,220,155,89,78,96,137,111,178,118,118,252,124,239,255,91,215,177,223,228,99,231,37,159,251,77,126,237,8,247,183,215,247,247,223,246,159,253,109,95,225,175,125,1,95,251,141,63,246,101,63,246,159,29,
18,45,247,159,73,126,89,101,217,31,146,63,96,193,233,81,178,111,152,68,62,222,228,143,29,65,167,134,254,203,31,104,211,7,100,59,242,185,143,120,137,88,242,223,204,63,79,230,80,158,171,181,98,169,66,47,
71,59,252,248,212,207,168,182,96,135,29,25,186,224,61,159,195,67,209,156,9,121,39,242,28,221,4,242,185,15,68,191,142,52,66,211,143,189,193,120,236,15,108,58,166,30,242,72,27,142,197,134,227,156,185,160,
188,159,60,253,167,190,183,69,194,161,239,249,169,15,215,243,206,125,191,206,97,63,211,152,134,252,200,51,229,183,19,155,140,199,176,110,108,164,4,122,244,34,231,45,200,161,121,173,182,129,236,231,37,
95,157,203,22,179,126,119,44,192,19,167,68,195,137,197,19,138,199,61,79,53,249,187,43,165,62,186,185,52,159,108,72,215,171,44,190,125,66,190,244,90,229,26,134,228,149,90,111,140,37,57,229,126,63,89,52,
251,199,246,57,116,105,206,242,218,31,242,123,95,226,99,127,167,189,242,53,157,88,251,218,174,253,172,207,189,70,207,125,22,215,143,254,120,126,238,135,242,181,35,216,175,253,23,127,219,47,254,219,190,
77,127,236,55,145,35,253,243,154,243,185,111,206,177,223,118,95,195,33,113,120,255,152,236,21,75,184,229,139,203,13,243,132,27,121,21,23,98,65,132,178,98,232,180,92,80,35,16,142,14,249,249,189,168,228,
203,73,244,97,209,97,199,135,229,89,114,200,74,96,101,146,205,29,45,57,162,69,192,169,187,120,205,197,21,169,159,83,81,168,104,100,192,66,146,220,237,99,47,64,201,61,249,119,242,235,62,5,124,129,68,148,
95,40,122,150,109,192,86,45,162,241,232,237,77,211,22,203,137,139,29,229,216,52,146,59,78,220,3,110,166,50,151,31,215,250,176,101,147,232,194,91,40,228,108,161,250,198,211,133,98,247,119,167,97,250,240,
59,10,183,138,13,183,176,176,116,147,224,164,210,227,20,121,108,225,119,194,98,179,212,106,47,184,247,117,139,140,140,184,186,129,113,221,204,159,121,250,84,20,64,12,24,114,77,122,157,235,242,211,71,62,
119,87,199,107,191,143,172,234,41,197,205,190,168,157,79,182,247,254,110,223,251,61,143,125,63,154,222,243,243,156,251,189,175,253,251,247,94,185,239,113,174,151,252,229,115,47,81,169,184,165,250,254,
218,15,246,151,28,229,251,146,254,214,108,97,126,238,55,255,216,249,195,174,196,219,177,35,98,219,187,191,237,139,214,195,225,181,23,210,209,30,254,32,181,74,149,28,38,178,225,157,115,62,244,97,105,226,
191,236,72,237,59,74,202,2,213,168,131,72,160,145,82,22,237,178,99,212,142,16,187,9,188,1,204,241,228,243,36,18,200,235,37,34,235,194,144,34,161,32,98,160,170,182,34,195,118,183,231,142,242,176,36,90,
75,4,196,2,208,227,191,225,33,227,29,244,40,79,145,163,224,189,152,228,119,84,229,242,97,86,117,162,64,65,65,163,233,205,48,196,96,167,62,122,75,52,88,172,138,163,182,234,181,203,119,144,72,172,249,117,
177,247,213,163,17,197,69,69,68,214,5,9,84,130,57,100,79,149,54,79,15,169,104,150,164,67,109,161,26,239,118,66,33,26,30,64,43,88,133,107,84,79,197,28,17,141,102,176,135,190,246,90,94,187,88,209,169,139,
223,82,23,185,230,134,211,70,115,93,57,45,151,28,196,154,75,78,201,214,247,127,201,131,125,237,95,31,154,157,24,122,35,127,127,238,103,36,11,242,123,175,135,231,126,159,157,77,10,22,176,239,153,64,65,
82,121,239,248,247,181,243,143,95,71,111,127,236,11,251,99,255,192,151,64,69,251,200,219,137,164,156,216,71,159,10,5,237,90,124,255,42,95,76,31,48,224,21,230,38,15,124,65,249,42,114,156,45,228,47,251,
214,233,151,231,174,31,186,64,46,61,202,245,254,92,203,10,39,28,71,86,133,94,182,91,165,8,192,195,148,187,63,189,130,188,52,153,103,116,45,18,205,172,28,67,94,101,21,183,44,168,199,175,95,229,185,255,
236,141,170,83,22,5,83,143,233,55,190,232,103,104,196,193,247,209,20,0,121,38,255,209,2,8,145,132,139,81,211,131,163,251,2,232,169,200,88,128,184,124,145,203,89,38,199,62,10,62,86,231,114,211,164,136,
184,229,218,56,33,8,41,89,193,116,249,162,188,116,1,35,5,146,63,199,243,176,207,95,126,175,152,247,182,148,119,15,28,237,242,115,242,247,126,255,171,157,81,5,145,82,54,174,46,69,156,126,205,96,19,91,132,
204,189,241,212,246,125,209,156,114,73,30,33,71,115,145,204,108,62,186,30,103,154,218,204,189,160,175,125,2,188,118,192,250,222,247,236,185,175,225,177,255,252,56,228,255,246,5,62,246,67,144,69,39,69,
205,199,126,241,231,126,243,207,125,97,95,251,191,119,17,180,143,240,113,61,246,15,237,244,244,217,119,222,208,214,88,117,38,12,139,199,220,129,220,77,43,221,227,126,19,109,41,217,241,81,189,226,44,183,
35,212,139,161,86,111,185,161,69,98,195,226,120,172,22,226,134,136,28,134,121,90,20,154,192,216,228,104,100,94,41,55,251,189,23,32,49,68,162,0,94,181,114,17,35,189,139,136,96,199,180,71,94,124,150,22,
45,181,248,98,146,215,200,15,43,84,132,194,133,215,58,129,229,50,42,173,188,72,126,124,182,65,52,69,223,167,17,47,173,22,57,185,89,100,161,61,113,92,234,134,65,117,111,27,43,32,159,218,172,106,191,128,
140,120,17,167,113,46,22,43,11,54,125,247,85,60,205,233,205,158,223,149,162,115,75,152,37,35,171,230,165,211,32,50,224,190,242,131,18,48,71,213,61,51,118,229,189,223,77,138,87,201,51,143,46,199,228,107,
175,1,137,17,178,24,117,125,237,103,210,15,133,217,30,143,99,95,244,14,54,117,127,203,250,216,11,100,127,223,199,46,128,206,143,253,155,207,253,230,31,251,139,236,5,59,181,216,217,63,172,176,229,64,146,
173,57,137,87,200,203,142,99,4,20,189,96,141,166,151,222,160,11,73,183,220,80,254,163,139,98,92,190,88,249,115,13,213,160,22,3,0,135,229,247,2,213,88,241,80,180,200,177,232,160,21,31,30,66,115,248,137,
55,157,144,17,113,75,22,55,5,71,122,1,230,89,89,165,35,33,149,194,145,185,155,130,213,111,171,220,53,18,214,101,249,46,114,78,123,208,128,120,228,200,219,175,101,129,37,223,119,23,145,248,89,203,225,180,
216,210,197,220,61,26,91,154,158,34,54,22,43,43,107,93,108,205,162,160,165,9,113,34,177,185,192,98,167,40,30,41,127,126,166,230,193,244,130,179,38,232,204,54,2,80,0,54,13,80,52,234,198,197,61,213,162,
143,5,37,2,67,65,148,69,210,131,0,37,25,217,142,94,187,46,150,75,109,6,107,203,189,144,99,86,170,240,215,94,51,178,171,101,49,62,100,45,238,192,215,247,90,146,167,88,219,245,126,55,65,196,247,235,143,
253,134,18,239,143,125,195,30,31,159,159,143,177,23,235,190,40,9,173,79,249,59,73,175,119,74,212,246,131,170,211,146,236,90,1,31,48,167,122,235,69,239,47,192,142,6,66,251,152,8,251,56,238,88,180,232,177,
32,199,43,118,229,173,75,195,10,24,192,109,101,151,193,194,157,1,247,190,136,108,209,55,188,135,226,106,11,81,21,139,174,32,98,177,8,59,122,116,67,88,144,105,183,228,209,17,153,58,186,26,136,128,248,252,
161,13,0,217,132,151,195,85,22,53,1,13,93,195,55,70,235,236,106,89,37,191,119,179,230,200,2,58,115,245,207,57,60,178,89,14,108,127,103,81,118,122,36,210,207,212,141,110,29,180,243,92,142,235,18,186,209,
206,16,126,175,247,2,27,236,66,30,109,208,19,191,191,125,63,131,219,166,111,162,137,232,204,83,164,48,29,67,180,100,135,137,112,16,43,244,253,231,203,138,53,221,165,178,0,247,30,28,205,16,5,125,128,251,
8,239,15,137,133,178,206,100,205,237,207,151,227,79,138,231,125,105,173,29,182,73,20,130,111,18,58,119,34,208,5,254,145,127,247,194,148,167,39,11,119,151,81,178,41,173,229,40,175,125,159,215,78,48,187,
29,225,88,124,44,108,36,79,219,11,127,231,106,223,142,21,106,110,35,55,119,39,252,243,26,222,98,147,61,41,17,68,82,91,30,133,82,20,140,97,221,32,127,223,98,185,98,153,197,143,30,38,225,122,172,28,246,
16,217,129,40,72,25,180,115,84,253,169,232,207,93,232,94,16,144,22,188,212,142,192,230,149,172,84,226,146,126,232,231,53,20,77,200,195,14,180,225,86,45,30,229,244,180,40,53,21,17,104,4,0,104,102,107,243,
123,167,15,85,115,181,166,185,182,69,240,226,223,129,93,162,64,46,88,164,225,88,70,215,72,22,253,66,145,232,13,7,84,216,43,165,76,122,43,150,225,139,239,151,29,255,6,219,157,186,192,223,231,91,255,91,
23,85,183,69,172,128,249,209,209,150,52,88,75,54,205,121,97,225,246,195,225,182,149,242,82,125,86,154,129,84,89,152,154,1,73,208,234,214,74,222,123,233,58,46,65,112,228,132,110,245,216,1,71,30,90,151,
219,177,95,167,168,142,92,174,190,187,194,68,251,223,83,128,241,143,103,127,255,254,150,5,42,71,116,223,127,39,79,64,162,104,223,203,190,79,89,180,178,154,5,27,153,171,226,225,87,205,227,80,193,234,141,
41,232,164,200,67,227,110,151,99,22,15,226,146,227,237,101,71,250,199,199,103,68,206,125,115,190,191,95,250,26,237,217,242,225,96,193,91,94,211,172,138,215,35,212,48,76,219,197,203,33,148,7,11,0,93,128,
197,65,108,249,1,139,90,22,53,222,9,247,148,107,147,130,75,170,97,70,83,125,234,88,8,10,223,52,131,108,170,227,151,154,252,217,98,21,68,1,127,119,33,93,177,227,210,54,149,226,184,104,233,73,148,147,28,
151,240,12,211,22,222,7,185,143,182,216,165,90,79,41,66,11,200,135,69,139,117,166,176,65,246,223,88,91,213,32,170,55,97,47,129,170,100,163,72,244,63,236,30,8,100,165,16,28,223,231,97,40,137,108,66,205,
103,155,45,58,235,212,85,79,21,10,2,130,162,41,248,57,189,151,175,215,218,167,171,252,185,116,20,215,209,31,210,236,150,239,177,23,202,148,94,99,151,19,89,240,201,243,117,53,41,154,133,83,33,11,109,191,
79,219,17,190,10,159,66,114,74,89,99,85,3,66,87,166,132,4,82,201,73,5,71,146,174,77,147,202,125,127,88,219,145,83,222,83,255,91,144,248,157,199,85,217,53,187,10,213,35,92,138,152,65,168,65,143,34,43,110,
174,212,113,208,5,160,11,138,15,98,161,133,104,196,1,22,62,118,179,171,183,223,152,171,121,207,25,112,81,79,213,172,70,52,93,152,211,163,97,107,5,159,107,15,134,224,183,98,138,35,176,75,35,19,116,224,
168,75,35,36,66,174,110,54,93,200,200,221,36,15,60,181,67,51,60,201,151,163,238,141,106,92,222,203,10,128,229,15,82,2,138,84,235,86,17,91,68,65,250,99,199,178,70,176,195,126,118,255,247,11,215,202,168,
73,242,132,227,167,56,129,8,155,73,87,13,25,140,181,90,75,213,72,92,145,231,91,62,127,217,125,24,150,122,120,231,134,68,138,97,215,97,36,148,22,233,149,2,246,232,191,19,54,194,233,104,45,200,125,186,125,
125,40,12,132,103,188,246,61,90,104,59,203,205,109,186,170,36,34,46,45,144,219,94,200,109,111,184,42,107,76,254,76,210,65,93,234,114,68,43,218,47,55,68,254,114,255,225,190,177,85,206,239,157,103,74,111,
91,127,64,22,173,48,131,100,193,202,145,173,39,130,172,104,249,25,187,49,85,162,0,161,21,121,248,214,39,173,133,105,251,208,118,154,61,36,235,40,60,2,202,168,21,184,32,23,21,162,208,121,1,15,236,32,2,
24,30,198,46,81,199,209,216,144,183,50,36,250,49,107,25,131,165,2,243,116,118,18,163,169,229,137,182,248,107,141,156,81,9,19,178,56,145,240,235,130,233,17,181,223,192,87,209,59,112,2,70,102,222,156,131,
17,56,242,194,231,7,222,119,217,194,209,94,113,99,79,156,197,130,29,139,149,4,18,176,111,216,253,114,172,16,216,171,188,239,62,118,176,96,35,143,141,77,108,247,150,44,39,101,4,73,213,206,142,80,225,125,
48,244,131,140,41,246,60,200,228,226,161,113,93,151,99,180,190,161,4,226,123,189,189,32,99,254,190,175,3,221,199,174,107,71,2,217,254,121,77,30,247,125,208,245,35,157,193,105,235,10,65,67,82,46,41,165,
165,115,46,199,169,222,108,68,3,237,208,232,73,173,81,192,186,40,135,190,129,132,89,137,146,242,161,146,30,84,28,99,7,122,174,60,142,228,215,137,40,68,136,197,30,124,243,221,111,184,166,226,32,40,148,
2,42,105,132,31,138,181,205,188,211,131,234,113,34,52,8,204,195,74,53,119,146,52,165,88,169,195,131,99,116,37,32,184,97,225,24,40,190,244,225,144,74,70,184,201,242,79,187,102,158,2,108,35,178,218,149,
168,43,15,236,66,244,227,63,130,199,90,117,219,180,131,68,18,135,97,156,135,71,106,217,156,134,101,78,128,227,171,124,255,254,246,254,57,41,106,100,230,24,254,88,3,21,208,103,103,253,233,66,2,10,54,159,
54,27,128,177,46,224,171,122,159,107,245,147,192,26,31,195,59,68,242,156,136,15,79,20,168,164,169,229,194,209,138,158,203,240,102,89,15,182,150,244,141,127,253,241,135,46,64,166,93,232,84,85,166,105,214,
254,237,150,199,2,104,152,214,13,178,188,229,120,60,157,35,183,28,110,168,128,21,166,157,198,168,186,20,48,85,30,148,253,44,115,178,234,16,208,225,85,162,183,175,246,113,208,157,141,82,18,115,198,146,
118,86,127,242,171,246,185,113,163,229,191,37,239,105,218,237,121,163,144,88,222,50,35,125,235,76,11,220,65,117,28,95,53,65,87,107,21,199,26,53,82,159,6,52,27,188,97,17,204,219,145,169,253,118,127,143,
229,93,39,187,193,11,139,22,41,128,62,164,137,5,243,176,77,137,239,174,31,131,197,193,227,51,35,3,22,233,167,86,253,45,225,191,236,103,251,230,195,207,118,237,61,159,14,134,231,214,104,1,206,218,80,97,
91,99,56,96,175,137,222,246,7,104,134,44,86,152,134,16,50,50,24,10,221,29,255,222,248,46,133,249,58,184,156,242,44,222,150,151,50,88,232,66,93,150,235,62,241,158,23,34,118,126,30,172,224,15,182,134,20,
176,150,133,36,135,227,170,94,129,10,163,132,249,161,66,10,143,29,114,119,8,182,124,83,120,122,79,112,34,163,114,149,69,115,206,183,229,26,187,146,150,79,150,11,108,37,0,113,222,148,243,156,222,34,147,
139,44,215,138,139,70,175,220,22,242,242,104,165,11,13,85,119,241,184,90,144,103,45,39,167,246,212,243,182,197,36,63,211,18,119,176,250,49,172,224,250,126,56,118,98,92,129,21,226,161,200,123,72,247,165,
35,7,179,38,193,242,239,225,228,215,22,192,59,161,19,46,36,110,94,118,75,22,128,116,2,209,218,33,193,181,148,105,120,44,251,243,153,61,69,164,64,176,217,142,98,176,31,221,65,111,66,58,183,102,192,92,254,
157,236,89,78,39,125,240,31,70,226,195,201,43,221,239,65,70,31,184,128,52,162,122,75,215,162,109,53,194,75,21,228,69,78,86,162,35,203,177,80,164,22,56,254,1,167,218,181,105,206,174,39,119,83,126,161,181,
140,22,42,89,219,65,253,97,253,79,230,20,122,188,97,23,73,132,58,246,130,52,124,210,90,133,3,164,94,18,65,181,93,53,102,1,43,12,48,141,193,22,178,96,109,247,70,94,152,225,5,185,120,101,16,77,43,90,36,
163,145,135,48,198,66,175,120,196,46,67,206,198,72,67,252,141,59,126,130,250,165,244,47,252,94,241,1,228,112,82,16,200,251,57,89,164,68,183,194,143,65,252,126,128,204,43,239,241,51,210,161,91,225,199,
94,102,208,51,157,88,190,120,193,254,25,209,145,177,227,243,114,56,199,113,81,164,36,76,71,24,32,136,209,90,23,108,120,180,83,50,200,243,225,63,171,240,17,59,48,133,240,83,208,1,223,122,156,35,95,76,180,
195,129,148,228,182,225,21,231,236,193,84,162,194,160,119,167,222,73,122,32,223,175,18,208,111,13,216,239,195,79,46,82,244,8,116,146,149,36,205,10,229,133,93,232,77,235,2,65,132,9,142,158,49,67,148,179,
141,174,2,153,205,239,189,27,228,97,42,235,248,56,172,163,178,223,242,146,208,158,143,17,64,8,114,129,175,215,9,98,6,142,251,98,61,99,178,75,46,63,222,99,215,215,106,105,130,164,4,178,48,185,192,110,199,
34,10,33,50,185,121,156,15,64,26,139,9,61,72,11,145,144,219,205,239,232,43,51,50,219,102,90,218,87,87,88,7,239,207,197,97,169,197,194,166,65,62,8,6,62,163,223,74,27,108,2,152,71,254,228,27,160,0,43,157,
139,247,97,5,117,175,148,196,227,12,174,166,118,197,144,227,49,213,146,239,33,215,106,215,81,52,194,94,72,59,228,94,48,157,224,247,248,253,231,183,191,135,109,160,75,223,87,191,63,169,110,173,249,231,
146,156,44,159,161,181,7,78,16,86,255,86,24,222,59,81,51,145,175,245,148,26,241,190,13,60,219,124,124,47,228,195,199,101,43,115,151,72,59,100,203,151,106,250,196,80,137,25,14,40,88,227,148,138,89,112,
53,185,97,146,56,75,159,154,108,106,228,143,122,108,105,254,104,48,194,57,166,39,29,6,227,32,169,94,197,111,160,29,45,182,0,158,232,68,244,126,121,171,209,88,228,198,104,30,175,183,131,196,193,61,180,
202,248,74,209,96,130,208,192,94,185,128,244,127,255,251,63,252,56,51,106,157,93,15,90,95,251,104,62,61,138,79,240,29,153,42,12,164,18,118,220,6,22,107,61,241,3,17,185,5,195,126,191,231,239,211,218,158,
90,220,200,245,190,78,63,178,91,11,56,134,57,171,115,6,240,29,122,42,40,172,50,126,0,51,188,18,9,122,23,94,200,157,217,91,127,161,72,243,246,33,241,218,106,69,25,217,79,21,68,153,153,55,130,164,48,69,
142,85,171,130,127,239,66,171,31,247,62,119,1,19,157,11,136,181,132,230,226,32,204,76,180,40,153,166,76,79,9,34,111,86,124,184,145,151,89,110,36,231,131,244,250,33,57,31,34,227,35,201,21,24,244,43,228,
2,90,153,63,63,244,129,87,20,10,202,102,193,3,43,137,165,253,231,254,82,255,239,127,248,255,202,247,247,119,249,79,127,254,214,247,150,36,120,96,183,188,223,92,100,200,115,84,236,37,252,194,234,157,141,
2,208,184,85,82,199,46,207,67,200,4,42,133,108,119,180,208,248,157,8,103,128,49,205,136,227,69,65,58,150,73,0,105,56,18,217,191,174,246,100,21,91,178,156,123,105,30,71,232,231,74,69,134,124,150,226,182,
82,60,117,48,181,17,133,164,112,9,153,193,4,246,106,152,146,110,6,162,1,197,138,53,59,30,155,211,215,20,219,194,73,198,133,198,156,57,183,11,181,141,170,221,36,203,25,11,10,43,35,148,88,154,195,92,183,
3,53,113,178,76,58,213,228,207,158,10,219,173,242,245,249,81,254,248,245,165,157,157,255,242,159,254,40,127,252,241,229,212,54,249,124,217,244,36,15,215,218,110,132,227,139,92,1,144,80,172,5,122,58,38,
220,83,127,159,105,194,209,90,16,90,53,42,73,116,10,157,69,10,171,19,249,65,213,115,159,253,108,13,2,111,91,245,167,231,155,87,249,151,127,249,15,229,127,254,223,255,143,29,32,78,39,85,24,89,245,112,248,
193,146,221,19,13,147,234,108,102,195,169,163,93,198,11,206,149,167,0,216,239,183,245,166,21,238,208,231,123,105,235,127,141,25,253,226,19,226,45,141,228,211,218,142,18,33,201,178,70,90,179,208,71,103,
158,83,19,179,187,164,63,211,227,19,204,155,83,225,30,0,252,120,0,251,209,96,145,86,149,44,12,28,143,11,249,34,97,38,110,248,10,70,144,167,42,68,246,201,110,23,224,126,94,122,13,146,163,11,51,191,33,98,
157,175,113,211,60,45,92,252,57,94,122,175,27,186,79,18,101,95,8,58,4,211,85,95,5,197,231,1,157,81,1,123,136,84,183,239,110,145,244,63,254,219,223,193,134,95,90,184,254,55,255,245,127,85,254,221,127,247,
223,42,111,224,192,73,161,100,106,192,101,60,49,228,61,5,155,229,145,45,93,188,166,197,240,67,223,87,240,224,129,122,196,137,56,250,154,17,199,222,9,0,148,187,143,249,163,226,141,114,195,122,16,41,40,
61,213,133,186,148,106,228,68,207,127,253,143,255,86,254,167,255,229,159,245,136,92,144,206,202,223,201,130,228,141,235,186,56,161,53,33,53,13,157,7,46,193,150,32,9,110,154,66,182,250,164,28,22,120,103,
179,142,16,56,174,129,49,202,17,121,152,22,70,43,77,164,19,44,104,236,200,14,56,138,233,4,241,14,61,182,139,69,193,172,225,49,154,96,245,35,141,100,138,227,232,113,20,33,135,154,204,161,65,191,171,169,
71,157,55,155,43,23,113,93,203,90,116,246,189,90,69,65,98,88,42,177,63,223,64,107,58,8,111,41,66,241,74,155,36,220,137,124,120,224,122,216,151,39,100,183,64,61,51,230,84,7,236,19,247,190,161,129,240,239,
255,239,127,41,255,235,255,246,207,122,4,107,253,160,248,109,68,203,249,83,194,204,14,16,82,21,197,73,33,52,179,91,80,111,40,70,27,9,115,171,128,72,100,215,125,255,254,93,94,251,223,214,66,143,161,23,
73,46,226,254,229,207,127,252,195,41,247,130,33,202,155,74,158,242,207,255,231,255,165,77,253,130,92,131,21,186,227,147,160,151,233,34,97,245,118,244,196,160,182,92,118,178,2,198,3,86,138,217,50,169,41,
161,14,62,76,7,231,87,244,154,229,251,48,185,151,77,99,96,125,1,88,60,252,200,50,46,98,247,30,114,69,68,225,205,34,171,156,39,131,23,31,233,33,42,128,124,93,158,42,216,226,3,167,178,55,226,212,174,193,
86,105,44,136,22,86,176,77,111,17,57,100,9,42,90,179,142,155,115,38,25,209,141,80,252,112,184,140,218,249,134,226,137,210,102,210,212,122,226,119,54,224,170,236,145,19,74,155,94,88,77,39,155,212,22,167,
213,4,148,242,239,255,159,127,41,127,238,148,140,1,76,136,29,214,55,111,122,175,249,188,252,164,67,81,216,18,128,79,38,148,202,131,81,140,201,123,54,139,128,232,249,106,5,104,55,255,249,241,169,199,248,
137,221,185,64,155,210,199,189,191,176,202,15,8,13,236,93,246,251,207,63,53,119,148,66,229,31,223,47,187,16,20,54,150,166,52,143,116,19,221,35,242,39,181,66,68,211,95,111,158,10,254,33,135,85,202,127,
116,118,172,227,131,109,130,27,111,145,28,252,75,82,168,208,171,38,132,161,95,30,36,15,121,144,170,41,234,33,199,181,156,114,225,24,58,76,207,221,1,136,31,118,13,124,240,60,6,11,58,93,36,55,155,118,102,
70,75,15,11,36,84,133,6,137,181,180,137,58,160,161,74,249,69,165,146,178,122,30,204,197,54,97,22,32,139,220,9,205,115,248,253,152,140,172,196,95,11,63,59,10,35,162,43,141,65,96,85,175,154,29,161,169,197,
251,236,52,51,240,148,67,55,155,65,60,255,250,159,254,158,8,46,36,98,93,32,202,88,119,141,164,141,232,254,4,158,41,107,75,158,59,17,19,146,109,142,161,185,132,129,209,186,19,177,64,164,172,163,164,83,
171,55,185,24,30,23,160,207,179,210,154,111,104,111,246,7,255,125,47,78,237,184,176,243,243,56,0,8,95,70,184,1,101,209,5,255,200,85,168,195,209,69,183,236,24,180,158,246,116,130,240,184,12,122,178,138,
217,148,129,198,100,25,70,240,232,197,143,153,142,94,48,127,53,10,151,92,135,117,175,104,30,16,172,109,244,123,203,136,135,180,138,187,84,80,212,85,113,157,90,248,36,6,182,29,177,197,55,132,245,249,77,
87,94,17,109,71,146,211,178,199,205,227,156,5,157,166,54,20,192,129,133,206,252,208,8,43,203,9,188,165,4,11,157,145,51,167,4,108,1,54,20,85,186,209,147,14,167,33,31,215,231,69,168,6,12,123,114,76,171,
59,95,116,215,222,19,94,19,88,73,254,76,242,76,22,194,204,11,137,211,178,48,27,40,136,184,97,185,97,8,168,219,41,251,182,116,75,143,111,240,27,79,197,168,208,176,247,62,244,66,20,107,158,231,233,142,195,
49,183,80,180,40,190,53,77,160,78,140,205,250,201,213,77,2,200,214,113,145,83,1,89,98,17,96,141,27,186,64,186,48,188,161,250,145,154,1,99,191,249,233,136,153,120,152,204,107,232,220,192,52,162,128,58,
22,185,28,8,14,200,13,169,20,164,187,135,147,69,106,73,42,243,32,116,112,49,232,123,160,119,156,219,157,43,193,60,217,148,129,210,3,254,93,245,255,195,134,198,251,145,119,204,7,76,38,85,228,181,205,55,
186,125,207,188,120,3,107,36,38,218,147,41,2,145,0,189,102,234,161,176,240,136,173,141,235,12,58,157,72,126,33,205,149,239,247,119,69,84,46,237,214,201,191,36,91,211,25,100,97,99,242,95,35,234,44,7,248,
217,155,255,126,125,35,63,174,70,91,228,238,151,135,247,160,180,146,218,153,110,4,216,142,29,47,219,230,196,177,40,95,92,242,72,21,86,73,203,235,219,126,230,247,190,208,233,37,236,138,110,205,24,168,6,
79,63,218,93,117,56,193,40,106,212,191,212,155,184,170,225,198,23,127,136,203,139,226,2,2,135,237,198,225,5,140,131,190,100,210,172,146,204,0,108,183,91,111,187,187,228,215,123,205,90,157,31,198,136,119,
4,160,135,146,15,84,179,133,254,175,69,209,22,128,50,222,199,105,101,116,206,96,225,150,96,161,232,100,161,176,65,159,155,57,51,35,246,79,157,18,123,207,43,69,234,160,183,93,206,150,178,251,138,136,91,
151,47,228,1,251,151,70,103,17,10,220,168,99,177,216,234,105,83,46,222,252,243,120,47,234,189,75,211,64,147,19,178,247,197,46,20,78,3,74,79,132,216,77,178,199,209,9,97,185,184,14,152,100,173,94,88,44,
92,236,27,78,18,5,15,161,36,39,5,50,128,228,248,87,172,171,216,49,32,85,24,197,73,172,188,87,238,81,19,122,42,197,139,6,195,213,46,199,250,214,92,30,245,200,102,161,220,32,235,163,43,170,203,214,129,2,
160,194,103,181,74,243,44,127,152,40,218,116,247,147,41,141,60,146,169,66,152,56,161,181,71,230,12,153,238,40,212,24,125,26,136,10,92,61,183,35,20,74,191,158,165,4,232,249,18,105,8,100,129,57,96,115,166,
57,117,53,182,9,235,13,76,55,252,177,120,161,64,242,8,91,118,114,79,120,58,80,180,96,233,81,28,17,68,29,90,74,113,200,24,162,29,76,24,28,44,117,22,113,137,241,28,158,110,148,68,89,203,235,132,57,165,247,
255,17,8,172,13,250,68,222,125,121,43,153,81,186,121,50,46,71,138,82,225,171,154,3,232,67,46,172,104,151,146,51,88,153,105,27,143,109,72,73,236,79,59,178,175,185,160,93,9,161,83,5,196,146,19,110,232,53,
64,42,109,183,7,51,178,203,24,152,219,172,148,167,183,29,203,45,162,92,231,219,143,61,154,6,144,68,236,218,19,147,35,65,119,211,28,90,97,209,210,120,173,107,221,162,183,242,251,224,22,55,19,185,152,100,
142,234,206,104,225,23,180,232,105,68,122,91,11,142,164,111,80,103,4,225,120,69,146,95,1,89,105,145,7,245,99,255,193,22,98,38,169,21,52,216,70,154,135,178,137,0,249,241,28,87,170,154,7,78,23,178,248,45,
31,103,154,166,21,52,112,215,76,235,187,25,50,128,160,108,207,10,93,52,20,159,164,8,202,17,205,8,202,98,150,238,112,76,193,140,136,115,134,217,65,53,167,13,202,134,91,41,81,49,85,182,143,104,153,130,234,
244,157,212,127,30,190,129,245,117,116,129,142,143,167,48,127,161,11,14,221,14,21,126,70,104,173,110,82,21,44,156,226,139,179,165,188,178,1,208,165,29,224,202,2,165,196,166,182,99,229,72,66,171,233,80,
207,66,91,139,139,121,173,192,245,180,219,162,44,236,11,230,4,167,147,57,136,193,86,167,107,77,223,12,204,197,180,24,92,197,163,74,73,167,12,197,87,122,60,203,253,57,131,238,182,126,88,190,44,20,143,154,
110,204,129,28,187,248,17,95,19,225,22,42,65,231,76,218,6,170,183,150,36,79,23,189,86,151,59,207,136,224,128,116,250,113,248,247,161,41,88,119,35,173,150,62,47,186,102,197,233,119,203,33,46,22,98,181,
132,244,216,91,180,112,138,123,237,60,209,88,245,203,171,113,249,158,130,214,48,29,58,175,211,225,174,166,59,230,176,188,234,124,189,93,160,117,1,10,146,95,31,48,15,80,18,47,152,210,154,63,254,254,141,
21,110,175,215,5,188,95,167,121,197,113,160,237,216,162,151,155,36,183,193,97,43,158,75,14,208,245,89,221,81,98,59,215,136,29,79,114,2,236,255,184,216,134,83,251,153,245,87,199,67,73,249,207,11,134,157,
165,240,62,50,61,17,13,187,178,229,140,147,85,248,223,35,128,123,30,231,86,113,214,91,228,100,52,174,183,72,23,69,79,67,235,177,225,161,55,28,221,146,83,151,181,188,105,161,58,29,228,59,142,233,2,102,
107,200,203,8,178,243,62,59,137,26,208,149,27,119,65,156,198,99,212,23,45,22,23,45,11,253,225,176,176,205,232,3,114,125,219,0,48,34,35,14,13,115,8,74,38,228,117,194,88,90,181,120,133,95,128,247,50,184,
40,1,4,166,11,122,63,86,129,44,21,192,113,190,128,5,170,149,242,37,193,155,84,90,27,112,165,143,7,218,94,218,131,53,6,203,231,243,35,100,178,232,10,48,95,26,231,233,71,152,131,178,173,38,57,68,199,3,104,
56,18,16,221,86,152,127,30,212,56,184,111,226,133,7,21,188,79,111,89,114,59,167,99,130,45,65,202,120,189,216,72,109,77,152,56,248,113,94,110,76,167,137,60,54,156,49,188,115,2,186,23,43,100,98,146,71,63,
188,210,93,100,28,149,56,74,249,48,88,64,105,210,15,158,107,118,128,171,201,169,141,66,61,101,56,185,34,50,196,123,204,165,121,116,143,212,185,179,235,58,16,127,154,46,24,53,30,192,130,102,48,208,92,29,
72,133,127,62,224,29,42,4,136,27,207,17,71,184,171,7,90,116,106,22,58,73,37,233,234,31,112,3,33,94,124,130,76,210,22,186,52,194,252,81,95,198,25,20,163,2,149,96,7,211,120,192,16,117,208,52,64,31,196,240,
182,28,91,89,11,157,4,182,193,24,209,90,218,197,107,68,33,161,237,200,5,193,59,110,58,35,165,21,45,17,1,51,207,51,142,161,122,35,218,50,1,167,6,197,163,30,118,57,173,83,50,236,227,0,183,238,100,68,193,
25,110,104,180,132,201,213,243,114,105,113,20,5,6,125,157,193,127,156,195,9,172,1,131,13,47,190,114,129,68,139,67,187,151,135,47,126,125,127,84,167,23,72,15,158,103,210,176,106,102,238,101,104,111,216,
240,112,166,15,13,104,199,133,182,106,117,25,134,225,145,237,70,28,89,217,224,0,148,59,71,67,128,218,176,243,67,76,153,78,118,11,252,85,22,18,228,154,218,233,55,193,110,154,26,100,130,20,125,73,71,103,
129,233,110,139,172,194,65,205,170,173,247,205,170,78,126,232,215,31,127,40,30,105,196,209,233,84,45,217,21,92,176,92,28,220,237,71,22,184,51,210,96,119,187,40,11,69,146,91,25,123,78,85,188,117,86,128,
187,209,229,129,209,96,101,220,146,154,32,192,66,43,85,253,203,113,195,160,222,47,146,114,171,61,64,99,81,135,209,41,249,156,4,216,253,186,50,174,90,151,47,30,190,62,196,95,17,89,216,219,118,243,216,82,
227,116,74,255,6,65,36,22,63,53,230,197,165,17,81,36,50,117,96,75,52,243,88,217,39,15,91,197,234,105,142,97,198,104,151,150,26,184,50,62,151,124,77,90,195,76,50,151,230,72,148,187,32,152,240,158,22,240,
90,105,249,200,232,72,149,106,246,191,92,72,1,104,54,134,141,216,157,186,229,158,132,178,250,101,97,98,161,106,190,129,210,158,50,76,149,108,158,166,121,17,14,223,129,98,195,186,15,221,119,62,157,51,248,
16,91,178,251,112,59,105,10,240,189,226,95,65,225,231,38,41,209,158,244,27,132,40,120,129,165,194,197,181,220,87,221,142,75,54,148,111,20,169,85,110,182,35,100,175,175,31,55,151,176,17,255,33,136,93,114,
97,129,136,192,99,139,60,129,154,212,149,36,242,22,119,30,6,95,213,125,123,134,51,193,75,146,61,48,109,105,201,63,169,33,95,142,212,34,114,117,26,44,232,235,0,116,91,228,55,248,133,4,156,236,82,82,217,
5,99,91,115,229,83,32,228,38,230,123,14,201,139,219,211,140,144,119,16,174,107,193,68,103,113,195,136,204,247,228,130,150,128,36,235,231,66,58,165,224,124,5,13,255,164,13,114,49,155,143,183,128,155,101,
154,208,190,68,146,77,175,110,138,204,180,11,34,71,150,68,2,53,46,125,121,164,241,2,66,23,182,17,61,92,235,12,29,12,165,162,236,154,120,196,164,140,115,21,55,85,117,28,175,181,32,97,200,151,123,154,232,
77,176,47,250,43,94,239,211,59,15,140,96,76,178,109,209,22,111,135,54,224,137,100,133,243,152,95,174,130,92,225,253,232,242,16,194,57,243,38,155,200,166,82,140,114,185,77,233,204,39,253,126,15,223,40,
180,21,236,88,80,220,192,84,76,94,36,204,142,203,37,17,126,196,34,79,28,208,162,59,139,200,69,110,208,149,187,117,116,141,118,38,8,47,203,205,85,135,23,89,37,57,148,48,213,136,158,248,218,139,233,5,236,
53,78,182,14,156,153,82,10,37,14,63,30,144,253,78,95,184,29,77,13,229,239,162,117,44,109,70,229,231,234,69,73,159,185,84,192,66,205,220,201,168,14,68,161,83,147,67,133,30,73,239,55,20,133,102,1,162,59,
190,198,17,81,211,132,5,18,105,31,207,71,161,150,210,167,39,160,173,215,147,181,114,245,78,69,72,85,79,104,202,233,34,187,240,224,60,55,116,23,141,226,236,24,199,255,148,224,81,110,160,246,253,117,11,
46,234,53,153,52,205,155,209,214,194,131,177,84,165,123,42,80,113,146,176,135,78,141,146,19,61,106,189,129,238,186,89,18,235,136,253,117,111,9,34,237,224,253,102,90,192,214,175,233,162,102,68,188,4,47,
117,42,61,231,245,151,106,63,247,196,149,149,3,137,111,187,165,33,197,89,241,29,93,22,157,185,160,169,219,225,221,52,147,135,44,21,182,209,255,211,155,32,168,228,213,131,233,124,185,95,125,73,169,72,209,
63,187,18,140,22,19,54,52,53,48,12,14,26,10,232,189,245,56,156,203,143,76,246,198,39,18,91,70,2,221,97,32,111,82,248,116,128,128,225,182,125,45,96,4,159,58,128,157,198,202,156,24,87,174,114,53,31,75,59,
187,131,213,179,110,11,16,160,251,12,91,23,107,133,93,30,97,26,108,143,121,68,70,107,115,57,253,222,219,162,244,7,167,96,106,173,155,143,99,71,138,50,32,249,200,38,248,92,220,107,102,28,210,34,6,113,91,
18,155,111,99,93,82,126,233,253,226,199,35,165,2,0,167,241,29,138,179,213,219,205,234,133,64,59,113,90,23,190,165,162,40,140,29,150,251,196,223,101,185,225,138,177,192,183,100,69,239,60,204,49,189,115,
212,91,72,64,242,228,10,110,204,7,116,91,5,132,95,45,74,81,104,210,106,199,186,59,31,55,22,83,163,206,89,109,221,101,5,67,136,174,71,20,236,61,38,35,219,254,243,207,143,79,235,248,16,11,83,164,190,251,
76,27,2,221,236,83,51,191,41,169,119,75,152,199,129,101,39,96,12,39,226,242,216,27,16,69,241,134,184,45,30,40,110,5,99,72,88,12,148,52,137,129,71,105,73,133,90,104,87,44,74,153,79,123,75,172,250,229,233,
65,206,79,125,113,32,159,156,99,222,138,20,119,209,69,43,45,234,43,244,159,83,14,205,136,116,135,166,34,125,27,110,44,48,189,31,222,128,50,240,179,92,4,70,182,122,202,211,59,114,75,118,176,149,231,200,
162,112,22,168,67,75,106,91,78,183,203,97,238,175,159,115,13,136,9,151,227,189,134,163,118,207,247,137,88,208,179,104,194,0,150,66,64,26,83,168,207,60,52,86,167,98,217,33,140,83,50,7,102,35,201,191,77,
119,129,124,57,16,98,101,225,81,129,70,70,141,14,71,18,33,216,126,237,75,156,26,184,162,229,130,100,103,227,120,147,29,46,40,189,23,10,168,14,105,233,151,33,14,39,45,36,209,59,125,119,216,165,32,212,16,
227,76,174,32,14,179,133,87,138,147,74,107,98,195,148,12,97,36,82,1,127,46,88,55,213,219,161,215,251,140,74,51,117,96,248,0,22,134,42,113,97,230,13,208,129,185,113,241,187,133,76,98,51,17,143,100,113,
211,29,6,50,150,85,241,97,86,213,91,159,209,50,28,183,98,141,20,58,126,150,179,231,161,91,207,104,7,91,144,236,155,55,160,3,237,182,73,105,74,113,220,78,133,149,242,215,154,212,141,220,72,166,179,74,6,
3,221,60,60,85,227,243,124,254,240,109,183,33,5,70,29,140,78,19,121,160,202,171,212,192,134,150,225,60,47,55,221,212,8,37,189,73,184,166,49,185,254,192,184,13,78,40,144,191,55,133,163,89,214,201,215,254,
250,227,143,48,126,63,223,110,177,194,92,101,49,218,225,120,100,66,29,237,180,229,186,115,18,143,139,211,241,187,179,191,121,140,197,116,179,48,14,240,254,121,162,225,177,98,119,222,96,194,94,169,115,
225,48,129,154,216,60,51,141,97,9,40,165,7,128,142,32,53,221,43,189,196,209,239,69,194,10,187,4,226,156,105,83,17,97,32,201,55,196,101,229,182,153,238,255,84,151,7,39,236,75,175,145,185,158,247,230,231,
250,203,130,94,201,220,128,179,123,148,247,122,142,216,8,40,154,242,4,185,153,208,135,138,133,103,174,31,86,0,190,33,117,200,247,129,239,69,84,133,239,41,193,69,234,12,178,228,245,122,213,215,148,42,65,
39,36,168,119,188,46,184,249,62,255,98,131,172,15,162,31,94,226,75,1,98,244,168,14,226,231,159,193,52,106,236,162,140,192,26,19,59,168,129,226,63,224,163,19,198,161,205,231,229,68,164,89,174,205,166,227,
45,173,168,241,67,222,35,161,71,100,158,36,230,239,67,1,24,160,19,23,199,143,48,45,245,7,7,48,57,79,215,42,9,74,201,158,68,94,89,3,90,243,145,34,81,125,89,167,133,210,172,164,11,247,133,227,28,212,88,
48,61,57,173,17,128,102,215,201,82,140,150,70,221,145,88,241,254,97,18,80,111,159,193,238,76,46,20,73,222,205,242,92,121,79,21,119,97,140,161,230,199,36,106,160,154,87,207,33,184,171,16,151,108,45,88,
67,3,22,139,209,201,137,174,210,2,87,183,36,235,23,13,26,56,159,74,47,43,228,174,152,141,227,185,149,236,134,91,69,109,93,10,151,17,72,174,5,130,48,209,122,126,97,129,154,164,154,63,224,197,184,56,53,
12,85,219,5,19,255,134,113,110,140,18,126,204,99,202,214,100,47,23,176,208,5,182,15,105,91,244,226,38,195,199,161,140,31,38,162,181,180,244,144,3,194,113,172,242,214,142,235,70,252,34,68,180,166,51,170,
90,205,93,156,230,209,157,185,38,23,98,198,234,216,199,38,110,74,102,82,73,172,35,191,7,57,87,205,163,95,202,93,78,18,237,209,226,212,180,71,202,41,249,208,179,129,107,65,158,23,206,36,204,71,147,118,
29,11,143,10,85,194,113,44,200,104,249,125,98,202,24,135,84,245,222,147,16,238,136,60,20,3,10,40,29,161,200,79,3,155,18,137,167,145,133,229,232,95,212,19,23,208,214,46,171,146,152,103,42,25,211,11,140,
233,122,140,71,199,220,66,180,191,164,245,167,126,133,192,156,106,26,55,34,31,38,233,192,241,124,96,184,210,3,149,223,112,63,196,133,121,60,139,131,69,145,18,16,234,160,77,180,141,244,232,200,63,65,42,
133,87,208,252,97,79,146,153,57,100,58,59,93,205,125,202,97,119,135,8,87,91,200,5,108,86,32,13,245,75,216,69,67,1,89,225,255,109,199,84,117,120,43,43,20,11,242,55,18,65,140,48,29,209,183,193,209,141,0,
51,251,191,229,135,212,150,209,183,37,35,130,134,40,158,177,67,194,43,49,76,203,120,162,28,190,84,75,152,157,250,8,22,55,207,143,81,118,11,77,141,231,231,103,176,175,106,124,175,3,90,238,6,48,95,242,250,
199,243,145,200,28,197,189,69,121,191,175,164,93,242,94,60,70,207,200,245,125,253,250,195,2,148,30,117,168,102,33,180,113,11,99,201,39,149,134,4,64,181,165,49,30,47,29,234,147,166,90,77,236,192,90,110,
88,165,187,52,112,158,13,170,47,38,241,73,186,231,254,217,66,35,115,189,180,70,133,183,115,18,103,178,84,113,49,22,25,205,196,251,146,237,180,247,229,91,60,192,130,2,136,208,83,63,30,158,62,208,54,249,
54,64,106,174,219,136,20,66,55,202,21,20,178,106,171,46,205,245,129,155,48,109,58,213,121,44,138,162,193,137,97,37,201,28,86,88,153,120,5,236,199,235,93,159,30,100,218,174,230,2,217,87,157,209,49,251,
171,15,28,173,148,32,179,242,247,9,103,137,163,74,149,234,68,91,212,82,175,228,197,153,38,16,179,34,87,13,55,17,9,156,160,205,137,227,197,79,193,55,102,31,133,79,17,112,214,26,182,48,191,191,127,107,241,
220,152,127,120,11,75,4,66,175,111,131,118,80,214,203,55,234,66,109,7,16,221,104,86,180,95,251,189,127,254,41,120,20,133,66,3,68,4,78,123,96,126,130,93,61,32,66,87,222,156,70,201,234,146,209,220,2,139,
201,176,54,28,202,101,192,213,24,154,110,0,159,108,241,56,190,153,157,35,175,138,19,52,212,211,88,60,230,146,252,92,118,120,114,27,145,114,222,149,217,223,180,190,35,80,190,74,32,11,53,152,218,147,204,
155,185,18,243,188,251,194,96,30,69,150,140,243,6,96,92,26,223,169,161,234,143,22,40,117,232,35,41,3,243,8,153,152,7,212,252,26,56,113,247,150,214,80,251,228,246,213,253,46,133,238,135,19,167,137,203,
178,216,125,43,185,123,68,218,87,42,34,103,216,177,92,96,171,211,141,143,27,146,247,85,7,18,128,107,97,94,168,202,139,208,112,89,78,169,226,40,115,220,139,70,217,220,40,40,172,26,191,98,110,203,190,16,
57,190,165,173,40,243,12,69,233,200,126,185,70,27,228,135,144,213,220,70,203,209,195,144,250,234,142,132,215,192,218,35,140,82,29,46,106,202,243,156,63,204,72,89,112,242,72,188,88,252,48,159,73,51,121,
10,8,195,13,138,188,238,199,211,112,217,111,28,183,73,81,134,232,174,155,204,83,131,104,47,214,68,238,101,14,153,109,85,130,41,21,125,106,62,152,48,39,29,247,126,116,9,59,26,151,243,122,49,85,252,123,
145,16,211,124,162,109,143,233,18,76,19,56,101,247,10,25,131,171,9,57,39,8,16,81,73,221,31,18,126,245,116,184,46,4,20,78,173,56,194,83,8,224,248,184,146,41,25,168,144,217,190,208,186,63,15,231,194,114,
178,46,83,154,23,160,56,237,165,11,228,232,88,86,169,158,79,20,112,28,135,249,81,98,199,52,127,179,39,140,174,10,0,214,15,225,80,182,134,57,54,237,54,130,142,189,239,57,194,165,87,1,243,49,131,164,75,
102,77,131,197,94,106,75,217,131,136,110,142,249,101,86,135,132,200,42,247,60,54,29,73,89,107,98,55,96,220,115,178,22,201,118,88,255,213,164,113,158,183,99,145,223,199,10,140,187,129,212,194,241,229,45,
196,100,214,154,13,162,12,87,108,209,91,231,41,53,239,86,134,108,193,254,231,68,104,153,129,190,208,153,41,104,227,242,88,181,194,42,36,175,225,165,20,82,13,25,128,208,224,71,68,88,204,225,60,181,58,60,
157,166,231,82,13,114,3,28,110,26,222,182,53,119,19,48,132,220,214,39,170,122,242,99,229,116,254,199,63,254,225,238,110,44,216,168,118,109,140,20,164,90,233,17,177,48,29,224,97,33,87,5,64,16,142,139,235,
23,233,71,5,131,146,212,16,85,142,114,41,104,80,252,12,207,175,194,126,142,228,93,185,200,67,181,194,21,172,108,99,159,27,235,40,92,20,86,50,93,26,16,21,233,24,103,106,194,87,184,86,176,232,88,43,70,35,
185,59,132,71,174,254,151,193,73,49,214,184,223,129,233,212,66,243,118,224,10,140,147,185,21,123,222,213,173,71,130,35,185,96,53,88,18,44,53,179,73,106,53,158,129,30,185,24,24,53,127,88,14,50,210,222,
0,123,228,207,29,42,81,206,110,84,63,160,146,55,75,141,89,140,174,245,134,110,9,69,31,157,51,74,226,147,134,115,241,113,115,120,43,57,122,35,223,63,225,2,71,25,54,103,102,230,105,29,5,150,138,21,250,34,
217,108,154,194,85,219,80,202,137,40,11,147,128,139,201,33,140,126,37,14,255,95,102,168,36,23,5,201,194,194,113,165,9,184,228,146,173,186,91,195,235,207,63,117,97,14,246,54,65,127,162,35,215,128,160,41,
159,138,54,188,242,112,175,69,82,203,140,188,90,156,64,218,177,107,73,229,58,16,254,11,18,241,243,12,77,77,171,1,11,145,68,18,162,251,40,118,86,146,131,102,166,121,48,92,122,120,176,39,175,31,22,5,14,
184,143,113,155,3,206,66,132,57,69,118,243,200,24,105,75,178,4,30,201,244,17,191,229,211,105,98,69,150,100,228,57,144,124,47,231,8,52,182,50,215,77,234,235,105,147,155,227,79,207,245,29,218,89,235,38,
225,96,15,125,96,220,11,59,112,5,17,154,41,128,108,248,143,143,167,94,215,227,65,215,229,192,89,197,202,197,141,94,153,202,121,15,193,142,121,57,101,245,84,45,54,148,74,115,108,245,19,7,70,247,254,222,
17,79,48,197,253,151,170,199,233,105,142,162,142,57,182,227,235,13,204,77,115,66,46,52,90,125,160,154,212,158,50,92,184,92,42,75,150,9,25,205,20,207,83,175,226,187,24,36,167,25,90,29,118,7,178,253,9,31,
226,76,85,106,182,132,38,78,72,200,196,231,16,58,195,60,186,68,100,205,91,158,21,81,106,156,49,66,206,162,69,187,97,137,121,200,145,155,16,48,87,77,96,248,92,211,53,48,140,222,213,73,28,86,169,114,254,
248,112,25,235,186,21,139,244,40,95,105,190,163,15,150,111,7,54,74,115,58,219,13,253,240,20,96,197,233,82,131,214,215,147,237,12,109,101,168,118,180,209,44,211,139,29,186,171,145,79,75,3,217,48,65,136,
57,232,222,178,108,119,125,82,240,15,144,138,160,179,167,185,255,11,111,40,63,168,99,55,112,244,254,22,124,146,90,18,82,138,144,127,136,200,92,142,29,173,36,155,73,92,21,18,146,163,76,58,0,76,222,221,
70,176,220,244,193,236,158,92,144,96,248,176,202,100,244,190,198,252,49,213,33,11,242,39,64,244,234,238,16,188,201,121,210,150,211,220,18,4,225,93,11,159,240,0,87,185,156,102,180,234,32,175,99,132,16,
106,177,69,74,221,114,77,208,23,28,129,0,215,92,127,201,85,9,144,123,126,157,34,117,45,185,29,24,164,235,219,236,241,18,236,109,110,58,58,123,200,194,33,113,56,203,132,111,150,138,165,254,103,213,145,
53,105,187,201,155,35,46,187,64,218,230,41,71,110,231,164,37,54,248,8,244,112,154,73,246,113,211,140,207,187,75,136,91,29,34,157,122,170,107,155,169,31,155,26,13,176,82,149,47,4,131,37,25,210,206,221,
190,118,245,43,236,160,2,225,184,180,20,141,68,219,53,199,211,2,72,128,113,144,109,157,65,194,60,166,182,52,106,248,225,248,223,129,220,163,98,238,33,109,62,88,193,234,200,60,55,225,7,108,148,58,62,62,
165,96,134,198,37,11,164,56,135,167,112,4,11,170,249,149,13,244,87,96,112,14,213,112,110,55,57,165,137,180,48,65,137,227,160,166,208,143,39,50,240,28,183,34,101,165,78,140,119,147,86,113,43,109,242,54,
121,84,102,241,158,183,62,33,173,160,43,110,94,68,196,127,77,191,244,184,117,200,169,191,159,137,187,186,146,13,32,243,103,53,93,160,250,49,241,43,29,66,66,48,153,152,61,233,162,81,216,15,14,72,50,136,
86,228,127,8,25,61,116,2,73,216,21,26,255,193,222,75,59,127,71,7,29,238,129,168,39,15,77,58,37,48,187,42,194,70,23,76,81,110,46,6,165,75,238,248,144,57,125,186,160,30,238,89,201,22,157,44,84,177,36,214,
213,142,98,160,39,35,205,150,76,0,194,60,212,100,159,133,204,244,57,147,89,128,85,99,1,179,44,87,41,70,117,95,92,82,203,232,72,197,98,79,145,110,221,110,82,245,235,171,137,9,30,237,182,212,90,76,131,80,
153,71,122,49,209,67,190,234,13,3,247,212,92,183,116,131,109,85,139,176,156,241,152,58,64,180,205,46,203,251,217,43,197,223,146,16,129,11,93,183,92,172,17,171,101,4,203,76,162,9,226,199,121,190,157,117,
190,146,36,152,90,169,149,252,145,28,99,76,13,133,160,10,46,212,10,152,24,130,118,226,4,195,236,1,151,146,216,92,166,92,100,43,209,188,228,223,201,134,166,57,54,107,109,198,105,38,150,3,133,131,234,189,
113,211,10,136,20,189,132,97,212,2,218,175,62,223,234,185,99,174,184,106,68,48,141,118,68,93,118,22,233,119,44,66,239,107,131,174,143,9,83,84,223,7,87,145,17,99,205,219,220,29,250,222,144,227,216,209,
238,148,136,109,140,159,128,122,152,200,123,46,201,1,86,73,244,84,74,2,190,211,241,69,197,37,129,241,172,119,118,223,242,19,121,46,239,215,154,55,40,100,206,149,138,158,229,94,60,162,118,100,191,188,38,
27,155,153,132,254,237,135,225,215,72,147,190,116,176,232,21,212,59,106,191,115,206,92,124,196,113,200,82,194,128,32,82,32,138,206,188,193,224,19,131,227,216,118,111,161,57,125,211,208,152,236,241,48,
39,95,101,117,193,99,146,88,36,245,62,180,251,227,61,151,239,242,181,139,106,153,162,102,78,200,230,215,41,62,2,226,224,214,228,8,37,174,119,41,97,162,57,179,250,216,71,184,24,238,191,199,21,199,114,129,
48,12,6,71,20,252,80,145,214,146,211,33,43,85,13,255,231,25,14,21,192,25,89,108,188,209,138,83,12,18,169,0,97,170,149,60,18,185,120,86,2,156,61,167,161,35,88,143,99,188,166,25,213,70,66,192,208,122,68,
19,234,215,61,130,243,122,87,102,18,181,219,144,35,194,79,55,5,101,186,198,146,212,127,196,118,91,154,63,67,131,169,128,154,234,109,241,213,148,6,248,6,16,78,1,159,83,18,205,145,75,144,141,104,217,165,
34,60,230,156,203,36,158,163,241,63,23,207,24,119,74,159,222,207,231,195,107,2,122,140,170,30,170,63,130,62,136,10,186,3,157,121,60,142,219,32,129,204,118,202,5,170,164,82,178,0,7,7,190,42,103,226,1,63,
244,125,223,78,142,63,150,227,142,166,237,152,86,165,2,114,9,167,234,90,96,139,230,0,89,226,83,242,71,178,74,138,85,230,77,7,103,54,119,185,208,41,102,204,75,209,75,55,192,219,38,106,177,59,81,40,29,128,
92,128,213,167,207,70,163,1,211,10,101,164,3,189,184,33,28,197,198,194,70,23,95,178,156,163,51,238,76,132,13,246,183,7,140,20,148,245,222,146,219,45,62,215,55,86,234,206,56,211,158,201,122,141,194,130,
188,204,150,152,246,81,128,69,33,230,61,244,4,125,185,209,41,237,156,147,47,15,191,119,199,189,99,254,150,45,94,248,253,178,51,114,134,174,216,170,188,187,127,68,180,213,212,232,26,96,157,131,7,0,233,
139,77,237,189,50,201,83,3,72,116,106,154,15,228,18,178,55,211,19,126,166,14,41,197,102,145,252,82,130,145,189,102,23,214,191,255,180,238,142,146,196,133,140,64,76,208,184,66,230,5,222,13,230,41,200,203,
6,141,80,161,201,145,252,82,90,147,58,45,1,121,31,115,34,73,1,108,76,239,153,224,136,26,28,73,8,179,72,119,170,48,57,229,110,12,143,229,121,131,122,44,49,158,78,16,118,13,115,242,244,230,63,23,166,131,
101,15,32,206,234,102,222,57,112,228,100,121,66,73,21,171,71,191,244,224,22,116,45,154,83,145,157,131,98,45,51,137,92,90,10,104,37,71,215,92,125,150,100,247,204,174,14,71,226,17,39,92,41,207,102,78,153,
29,113,53,82,121,209,24,81,254,150,47,103,250,158,155,59,20,255,78,235,7,6,73,185,2,73,223,157,54,225,238,116,81,111,179,54,167,187,131,84,71,102,104,139,227,94,71,251,189,56,186,122,206,48,173,149,117,
33,50,8,121,221,231,215,167,89,1,46,180,245,90,50,102,122,159,230,206,123,96,4,72,195,76,103,201,3,165,18,151,85,46,24,231,163,217,120,56,245,34,84,235,192,208,216,196,204,195,154,120,126,41,231,113,142,
89,81,191,32,134,124,195,199,194,146,176,101,230,179,76,40,16,58,21,91,132,16,100,121,231,130,99,47,158,54,121,128,145,151,36,12,118,156,104,47,77,238,33,173,69,184,120,189,74,197,231,43,213,110,1,91,
117,247,51,42,51,195,155,241,70,28,73,81,53,183,26,243,144,163,204,162,114,118,80,130,194,196,23,211,245,227,181,185,174,155,174,188,121,122,175,167,3,158,106,180,27,99,200,205,93,157,58,86,188,104,202,
220,132,149,90,175,228,173,114,241,228,209,212,222,168,104,197,139,219,5,187,111,118,184,52,194,214,224,42,48,175,108,56,225,232,186,76,252,85,134,164,54,201,245,154,180,252,36,121,254,126,41,86,217,208,
195,212,78,13,134,69,54,228,15,3,163,222,150,218,0,218,130,251,128,22,227,98,161,180,48,97,9,71,53,119,9,25,202,150,115,152,135,226,10,59,43,28,115,205,168,106,36,13,140,153,188,135,44,167,84,77,122,45,
105,162,109,143,40,1,166,138,113,33,161,135,153,9,19,76,5,7,157,28,106,46,198,82,75,176,98,26,27,181,203,7,134,86,173,132,37,218,188,239,0,224,75,98,195,47,14,151,255,17,29,131,185,51,147,233,192,242,
98,133,41,8,61,198,75,234,51,115,179,232,164,141,68,129,243,113,117,147,209,210,96,24,162,28,116,233,245,141,131,103,16,48,17,212,140,43,242,102,78,234,200,110,114,97,221,13,239,116,14,124,69,31,91,245,
243,228,38,212,48,163,165,188,152,90,44,94,247,137,251,203,197,110,11,117,71,189,235,181,23,146,224,141,32,247,94,213,206,255,227,249,81,218,176,214,220,192,104,95,51,72,45,58,0,74,64,137,75,213,104,223,
78,252,53,210,173,237,152,129,25,132,186,67,231,93,91,172,14,111,160,61,53,140,233,24,168,96,137,63,50,143,201,15,177,186,83,67,185,41,239,124,124,239,188,146,221,223,116,223,243,2,181,36,39,163,17,120,
38,92,164,209,34,105,99,178,181,137,113,6,23,84,158,17,185,124,230,246,8,157,145,75,35,58,38,55,172,187,113,63,199,28,151,132,127,178,55,93,147,84,227,230,250,187,194,51,41,59,133,172,132,125,102,253,
144,123,70,206,113,43,162,122,154,36,65,162,49,229,189,252,252,14,3,90,146,124,227,251,26,64,127,193,139,148,57,177,206,249,198,2,230,128,47,27,221,114,164,35,126,248,140,207,235,244,49,204,62,232,212,
8,59,214,38,214,234,123,237,197,38,231,188,124,238,243,215,175,34,151,216,81,92,200,223,169,223,61,72,154,114,148,61,156,143,39,145,113,234,107,117,160,186,220,36,117,0,123,104,4,229,148,171,204,254,46,
73,163,173,246,131,136,70,140,132,20,192,59,171,7,190,145,3,42,55,135,149,130,117,106,252,191,21,118,211,70,179,111,126,60,184,214,6,122,107,234,163,111,163,230,146,156,55,87,202,225,108,155,242,92,63,
218,163,227,113,19,103,149,176,133,209,254,124,178,16,148,27,255,192,228,11,151,54,96,147,80,207,84,235,221,65,151,71,124,76,241,42,110,207,210,155,105,104,2,104,175,158,42,84,184,126,100,61,119,173,100,
85,13,144,33,166,23,89,245,102,248,159,233,107,197,201,219,44,86,232,242,65,59,107,90,202,116,72,173,57,187,146,173,46,89,95,190,129,8,45,98,26,91,135,177,131,83,13,37,85,84,56,64,142,36,225,84,238,60,
81,22,86,131,218,172,176,97,191,67,172,210,211,106,115,211,77,138,189,198,249,118,227,82,78,177,237,197,42,184,235,188,238,56,151,236,14,248,158,19,44,45,43,116,210,43,185,244,150,164,98,212,221,187,74,
162,73,173,155,227,236,76,212,55,10,232,89,104,176,170,204,118,123,217,242,36,155,32,120,63,60,51,122,56,102,37,181,61,189,17,144,42,219,234,83,14,238,30,66,49,45,98,222,112,63,58,110,88,68,73,78,119,
110,134,90,110,221,169,146,228,185,53,177,121,46,120,200,231,25,63,52,88,136,118,100,116,148,142,212,54,93,105,131,249,120,64,55,15,195,240,37,248,88,207,52,42,134,57,235,251,50,33,217,27,233,138,188,
230,9,82,133,2,234,184,46,201,19,101,177,61,124,138,173,157,28,28,54,59,28,114,130,5,141,56,240,234,238,193,240,72,129,124,150,14,231,252,214,69,245,64,167,71,71,134,96,32,143,68,174,7,136,27,114,251,
78,82,142,40,193,76,250,17,151,154,82,139,13,178,173,134,109,84,252,7,250,229,113,92,221,221,29,184,203,179,0,190,164,74,150,121,145,70,89,46,118,186,114,176,160,184,77,104,8,3,167,24,140,26,19,194,194,
167,242,112,137,64,79,196,141,92,188,172,31,210,213,126,132,139,45,55,28,255,46,107,83,172,137,112,248,120,19,222,51,18,34,50,39,179,192,113,109,166,98,201,13,15,60,2,37,179,170,214,125,136,39,233,102,
196,42,195,20,191,184,182,222,38,193,77,239,242,144,32,172,212,53,240,108,221,13,36,153,128,9,44,120,160,233,176,96,244,117,94,54,13,55,59,28,43,58,192,239,4,163,45,207,43,37,218,75,122,132,97,92,154,
131,250,40,99,80,247,181,91,34,88,147,176,60,190,190,124,5,171,251,154,38,215,251,24,221,81,211,11,11,37,5,155,22,196,126,182,135,69,160,247,167,109,60,179,70,5,82,251,211,212,0,205,67,10,111,84,0,224,
217,244,147,63,83,125,222,78,42,112,120,227,219,221,91,49,22,121,146,168,166,42,146,3,78,153,155,218,32,41,18,11,102,154,182,240,215,86,163,99,153,45,42,92,206,173,100,94,71,117,34,171,235,7,184,1,244,
13,119,3,86,151,188,150,100,16,27,147,20,228,122,173,131,214,253,58,220,43,252,97,131,170,88,128,149,228,219,73,195,126,70,46,233,118,221,8,30,51,20,152,97,254,85,18,147,156,134,1,61,76,27,82,151,238,
196,9,208,129,80,8,143,178,150,132,178,56,118,58,189,34,247,96,229,118,131,39,76,211,204,224,74,3,135,146,68,217,182,91,246,162,235,247,239,242,248,252,74,182,123,6,163,112,248,187,210,235,21,167,180,
164,86,170,111,121,15,237,137,75,47,93,114,136,21,115,25,105,162,111,192,235,242,65,238,132,45,106,4,63,173,188,233,118,203,138,84,169,82,169,195,227,76,102,121,31,122,124,231,254,118,242,26,106,80,20,
198,56,188,35,152,220,51,250,201,140,146,195,199,57,183,155,197,114,206,241,124,58,22,88,83,14,172,175,200,37,179,221,30,141,89,221,138,6,96,125,73,156,201,153,8,16,43,19,164,21,160,126,58,44,229,4,232,
108,124,15,46,105,232,154,138,247,192,59,108,180,165,215,44,243,23,137,205,112,22,58,97,153,60,32,129,118,47,37,141,74,161,180,164,97,124,31,93,228,50,207,243,194,115,229,72,188,233,122,248,150,196,111,
53,161,17,144,69,244,176,69,132,69,205,161,213,244,83,88,65,152,160,80,123,136,182,250,243,193,105,105,168,142,62,220,192,84,22,227,120,19,161,127,248,92,240,11,3,149,238,110,12,37,34,242,209,83,36,132,
222,227,113,96,34,193,113,155,203,152,189,121,72,217,231,181,25,246,216,195,112,159,11,235,186,92,122,203,34,195,149,116,156,106,129,190,59,123,191,29,249,142,141,49,94,9,58,10,221,53,255,53,112,152,139,
167,122,65,69,41,45,211,5,230,182,101,5,236,147,125,217,169,167,41,41,74,26,108,22,102,5,174,123,39,84,84,98,49,103,114,73,30,152,21,99,71,202,109,238,141,79,22,163,120,14,221,172,204,15,232,128,124,58,
68,112,217,47,201,135,165,14,218,4,54,103,121,17,16,111,152,132,171,247,148,158,230,190,153,150,15,185,15,154,97,247,94,60,103,166,55,79,140,139,145,45,164,184,225,72,60,133,48,196,184,168,90,78,208,48,
107,135,112,8,231,237,169,44,226,251,27,33,125,56,208,235,189,105,103,162,180,164,203,54,98,197,2,180,163,48,195,12,137,110,101,226,155,193,104,28,117,70,50,5,249,55,89,187,176,64,145,72,77,83,87,78,73,
112,19,84,54,8,114,203,25,4,18,226,156,204,111,121,205,97,30,31,6,165,3,93,149,218,250,173,227,196,13,225,9,253,205,117,35,96,27,70,86,90,236,117,247,232,108,183,116,129,174,109,45,45,136,236,140,113,
27,92,239,234,205,250,151,145,120,55,247,226,21,46,192,145,251,23,7,211,39,188,217,107,109,201,59,29,3,69,1,19,53,72,147,57,28,139,242,96,122,13,113,177,78,164,2,82,0,137,71,126,200,76,204,46,70,220,159,
37,7,165,253,139,77,177,149,47,72,198,49,18,96,154,221,87,118,101,36,114,1,95,178,249,211,251,198,72,87,5,198,68,146,79,210,133,181,162,138,165,152,201,237,135,75,249,49,0,190,42,73,195,59,21,217,144,
192,61,187,163,136,88,16,198,79,216,128,80,154,74,235,151,123,85,59,125,80,40,231,62,230,193,155,190,219,147,107,24,163,39,177,179,108,150,234,102,88,52,156,74,150,40,124,191,236,94,193,8,236,188,194,
117,159,183,51,146,148,34,23,120,214,191,191,98,17,244,230,240,15,139,63,39,249,82,92,214,251,141,149,147,7,76,221,8,190,237,78,162,102,7,47,207,113,52,52,224,17,234,0,140,74,118,66,76,114,225,149,197,
171,150,61,240,6,34,157,208,230,172,119,159,229,77,11,233,1,39,12,39,58,99,60,11,55,76,110,247,54,185,44,233,228,84,9,171,64,224,223,114,12,194,90,163,233,196,218,11,228,223,6,39,132,15,197,39,101,152,
147,228,42,7,5,254,239,211,91,95,110,110,15,27,152,146,114,36,125,72,71,79,139,117,186,69,49,211,129,202,69,71,113,127,181,209,105,124,239,137,14,69,185,57,236,30,49,200,20,159,53,97,53,199,27,207,72,
155,135,193,115,220,9,177,50,70,135,220,167,102,218,48,230,8,167,8,175,142,195,48,42,27,14,24,4,18,122,238,218,82,174,90,139,131,204,161,94,236,46,77,53,197,97,73,210,138,229,121,115,54,99,253,153,22,
184,176,203,101,184,160,174,205,153,78,128,48,171,114,64,222,77,98,175,219,120,150,76,84,166,45,97,117,194,174,113,34,86,26,4,118,160,177,193,122,128,8,128,207,246,150,14,224,62,201,164,168,25,62,5,174,
122,85,175,132,105,105,11,74,62,217,196,184,82,111,186,125,193,39,142,24,137,130,162,237,150,7,126,225,136,179,215,77,132,236,7,134,172,67,195,147,212,119,60,162,56,252,199,61,14,155,130,96,24,147,146,
108,163,145,152,147,106,54,104,145,199,209,33,206,56,143,81,198,166,71,182,69,120,93,103,50,152,135,80,235,39,193,216,57,150,195,69,87,37,141,38,81,124,48,181,30,131,136,177,110,4,222,108,118,223,146,
76,131,48,83,77,149,190,75,126,175,113,3,183,203,186,71,118,230,124,229,38,233,45,238,97,233,173,71,118,158,112,188,200,247,61,161,111,207,3,152,158,31,6,181,101,207,248,80,44,78,47,54,154,75,100,155,
229,214,201,95,41,83,247,152,219,182,36,15,86,78,45,190,175,107,197,23,141,171,194,116,150,250,115,229,189,238,133,39,11,147,3,26,158,90,200,217,207,234,98,111,112,198,26,160,147,29,56,186,68,169,168,
69,14,35,4,122,201,90,89,162,82,103,199,69,171,67,63,114,250,141,250,229,242,84,159,167,147,142,233,49,221,18,134,108,20,103,255,28,38,94,59,142,35,217,216,69,91,141,175,213,193,79,20,149,172,100,150,
127,227,240,165,138,117,165,138,16,185,33,243,72,210,212,42,39,21,248,16,204,229,69,201,205,164,137,5,68,9,181,225,196,134,205,78,189,228,17,146,142,230,250,113,84,254,114,255,216,255,101,170,144,245,
53,172,196,157,149,15,189,20,89,87,28,106,95,88,201,39,181,98,78,49,8,154,143,235,74,196,151,240,50,47,56,125,134,35,9,19,57,237,74,125,233,142,238,85,104,132,4,49,185,192,31,245,19,41,193,117,210,58,
116,195,90,244,233,205,77,197,136,49,39,158,65,243,1,80,178,160,104,185,12,210,43,171,100,206,213,147,5,162,231,189,120,90,195,101,150,237,38,89,217,162,247,214,206,139,200,37,41,99,80,87,215,233,166,
76,189,183,219,236,110,5,153,209,45,168,45,236,141,23,147,125,68,223,1,133,30,135,206,183,180,200,148,193,98,137,72,40,28,93,29,81,163,106,79,202,191,149,132,86,149,71,54,37,164,169,99,17,221,155,234,
131,61,189,227,129,188,144,62,157,121,190,245,116,209,214,248,49,223,103,221,24,244,55,237,81,146,123,28,158,66,84,127,184,156,239,232,67,179,146,68,196,163,157,114,44,31,105,140,221,116,54,22,39,88,172,
196,170,167,129,170,203,75,208,93,10,2,54,55,225,195,135,128,174,212,180,104,61,228,24,202,182,58,232,148,1,121,238,21,194,50,218,19,62,48,65,152,54,211,106,138,198,193,178,152,202,43,19,235,180,12,186,
64,233,23,166,121,23,138,186,12,22,255,227,23,170,167,83,115,50,246,99,63,127,125,89,187,16,199,133,14,23,151,162,71,194,243,239,223,90,125,31,232,84,20,52,246,87,13,224,91,216,210,124,152,37,29,87,21,
95,160,214,128,52,186,83,186,234,109,7,178,80,34,95,50,79,197,242,49,197,72,228,179,113,64,22,233,175,82,211,13,110,174,39,183,63,158,41,223,173,14,24,215,4,102,251,2,79,45,187,152,219,93,111,44,238,91,
196,206,93,169,164,131,228,232,150,155,57,42,251,224,232,152,244,164,227,206,86,48,242,253,57,171,221,117,55,165,58,199,179,128,85,20,154,243,24,52,176,80,11,200,66,127,105,112,73,90,166,218,48,187,114,
186,181,14,241,103,69,26,232,186,150,198,44,83,179,19,212,54,156,174,201,120,75,115,248,218,124,246,230,116,205,253,94,95,95,95,182,40,101,246,162,20,35,239,127,252,169,166,251,203,74,42,173,150,184,24,
158,255,244,95,40,6,121,170,61,176,81,221,150,225,16,229,123,31,245,114,51,190,246,130,253,124,28,55,170,88,69,84,152,137,62,69,231,86,157,74,1,165,30,205,0,248,179,218,189,88,229,150,195,81,218,169,21,
61,123,199,174,222,203,45,191,224,45,218,175,225,189,25,179,6,103,170,136,43,88,212,32,55,164,57,220,140,190,14,63,165,161,165,185,88,200,246,46,254,185,201,91,146,139,152,51,33,51,217,130,168,68,86,78,
170,135,146,208,0,103,194,7,115,164,75,71,59,217,225,110,210,149,204,90,179,202,179,211,53,3,3,235,41,7,62,96,105,163,180,179,214,83,190,107,207,33,8,214,160,62,36,115,5,203,209,135,143,202,166,229,116,
79,42,3,137,144,15,184,109,76,159,46,214,124,228,31,187,126,147,124,5,185,88,89,84,62,176,17,96,167,80,146,62,63,191,20,191,148,221,242,254,183,127,181,162,128,144,7,104,251,79,116,112,206,215,105,141,
119,6,0,133,16,154,31,247,7,118,79,243,97,73,21,157,28,155,217,184,146,70,36,228,15,244,115,140,81,196,62,139,123,222,57,120,154,23,58,147,166,154,153,66,154,19,78,66,241,74,176,80,200,80,237,231,78,184,
116,220,225,150,88,220,108,15,122,223,59,185,106,100,138,216,1,255,243,159,35,69,232,80,76,12,56,100,22,227,6,82,151,44,212,75,11,139,190,71,68,37,168,143,183,252,115,220,245,48,100,23,141,32,93,204,17,
211,56,106,175,122,124,218,84,144,121,51,35,203,115,135,200,135,236,72,225,194,179,125,250,60,243,232,8,89,183,231,120,88,151,102,32,37,112,101,171,27,225,54,207,161,217,23,175,108,104,72,90,40,199,207,
199,175,95,74,244,21,234,26,102,252,162,133,102,184,146,122,6,202,112,80,225,93,234,36,128,151,86,118,186,43,36,15,5,91,68,94,251,214,249,58,144,159,166,27,168,55,25,182,114,132,99,104,103,231,234,69,
31,131,115,151,53,240,152,204,57,154,243,14,83,4,201,102,5,23,58,55,156,77,232,195,151,234,125,64,168,79,129,40,225,242,150,73,23,87,74,13,152,19,123,69,153,24,241,92,96,185,56,201,71,55,53,67,204,59,
127,30,235,101,221,221,233,114,111,61,32,179,26,163,239,176,41,220,55,41,9,181,26,20,2,100,251,80,88,166,247,151,81,156,150,223,128,100,44,29,234,62,38,80,109,114,56,37,132,252,77,255,94,43,54,248,28,
55,114,140,209,24,47,103,253,103,108,152,147,72,106,26,228,58,198,229,27,64,20,142,34,40,107,114,92,171,210,240,109,57,201,196,220,196,149,108,244,52,90,73,210,187,115,78,89,213,75,142,79,136,188,8,235,
176,235,113,32,172,23,215,103,91,133,190,138,81,214,26,230,173,144,57,78,27,59,182,167,228,40,160,166,165,36,7,138,154,132,245,150,132,143,100,116,26,238,21,14,169,36,109,143,203,14,18,95,209,142,187,
16,149,29,248,30,235,199,40,60,78,160,45,56,90,104,109,146,237,73,230,173,232,40,137,69,84,220,246,37,231,123,28,101,124,155,237,227,173,201,233,236,164,88,216,53,73,15,146,23,81,114,22,81,201,74,79,88,
112,50,39,229,49,77,219,25,155,48,86,92,134,192,149,125,145,178,152,224,176,11,35,101,28,195,197,230,38,11,157,160,254,133,130,230,132,36,102,141,240,8,109,253,8,72,136,35,241,84,166,125,58,10,49,192,
46,250,220,245,137,110,81,181,101,129,25,169,2,184,50,82,98,71,168,207,63,254,166,96,182,210,216,209,19,214,137,100,242,225,223,191,149,202,214,245,13,79,31,109,71,242,128,230,129,62,111,207,252,138,132,
162,84,152,204,83,197,151,160,24,10,211,71,50,92,37,144,190,48,217,213,58,43,112,106,211,106,245,225,166,82,110,47,146,138,151,12,235,164,161,140,222,89,8,211,166,232,64,149,21,174,190,60,130,57,125,149,
36,18,46,148,195,117,77,229,47,54,43,208,27,39,239,161,84,125,255,112,112,155,148,53,3,106,98,43,214,91,136,164,231,57,91,105,186,230,165,36,131,6,41,58,67,230,26,71,167,243,60,161,209,161,17,109,231,
180,92,106,191,147,102,156,167,135,187,134,112,50,8,54,232,128,15,165,54,35,160,90,240,252,53,13,48,120,195,208,213,167,171,77,146,164,13,72,191,193,134,122,42,203,31,78,14,129,12,83,79,113,96,163,97,
83,37,103,78,142,89,97,11,189,141,2,223,191,62,203,165,8,253,167,193,62,143,195,245,211,116,238,213,197,202,150,149,96,157,20,231,39,239,15,78,71,229,209,138,106,34,188,16,83,1,67,209,190,46,158,212,73,
161,85,96,216,163,220,219,108,222,210,211,147,0,174,111,137,189,114,147,209,22,19,108,165,121,75,119,29,115,98,199,16,164,206,199,118,16,78,194,102,187,187,107,89,141,17,119,201,118,155,69,138,68,12,234,
86,72,59,203,102,4,113,84,206,91,26,193,239,248,2,7,129,77,138,195,137,181,53,152,246,104,56,144,133,48,71,12,206,242,129,164,189,221,7,149,54,171,1,110,195,177,126,16,145,191,100,61,160,134,184,208,66,
164,182,137,72,155,53,23,58,136,36,214,251,62,146,26,64,59,132,19,179,102,22,13,230,37,90,105,254,248,114,160,84,123,193,72,198,197,181,87,96,29,241,27,188,118,181,62,161,9,103,68,59,33,28,107,46,217,
77,195,151,82,30,88,49,116,222,206,206,199,109,14,142,207,132,100,116,162,233,85,137,153,142,114,135,22,230,147,103,202,150,181,181,240,208,101,225,38,254,225,68,190,52,71,204,84,156,76,55,216,154,67,
27,211,143,246,25,199,40,63,199,123,229,248,78,244,133,12,126,100,15,162,136,218,253,173,27,59,156,122,161,114,212,219,140,240,98,96,136,23,5,11,12,255,135,16,177,169,239,38,14,154,76,88,87,234,245,103,
114,49,153,70,84,93,146,137,175,81,233,202,19,62,34,114,83,166,57,224,245,190,210,0,0,170,64,179,201,63,211,26,193,41,103,101,223,251,161,120,99,129,233,127,246,218,212,225,79,231,72,50,149,238,228,96,
53,37,144,181,35,139,234,189,147,75,93,225,211,194,127,7,229,138,165,189,254,240,227,233,199,202,27,96,185,44,194,174,147,109,141,25,179,48,155,241,0,144,42,19,29,140,209,29,199,177,26,211,19,222,193,
131,111,44,82,86,50,237,199,68,174,60,59,124,33,231,113,247,221,196,111,12,105,108,248,81,94,239,151,23,21,205,115,195,226,71,252,74,2,49,30,81,121,88,59,43,221,149,76,168,252,200,77,102,162,92,124,13,
2,40,170,25,173,3,114,252,120,125,185,145,64,194,46,165,186,137,0,251,225,11,163,249,56,38,142,16,147,14,173,2,7,214,143,228,84,80,16,102,225,28,161,149,156,139,157,249,158,124,142,56,150,112,194,172,
225,186,70,114,69,43,97,188,143,160,195,8,168,181,8,102,52,46,14,149,7,113,151,136,8,181,225,174,109,7,215,129,141,2,186,57,219,36,91,112,70,165,215,121,124,126,98,162,194,210,188,80,77,134,196,94,131,
14,175,66,92,149,149,47,199,9,137,15,72,110,117,18,153,8,201,15,219,109,203,101,154,251,117,143,238,195,57,21,30,162,179,24,221,99,1,226,102,163,42,210,169,86,50,34,117,231,90,96,146,185,149,22,145,237,
46,77,32,121,132,5,70,200,83,87,184,4,167,227,186,164,40,116,55,176,207,211,37,2,227,188,249,185,223,92,53,142,176,94,78,48,86,158,52,203,197,48,230,72,26,163,250,151,137,174,55,75,234,188,163,146,247,
37,245,73,53,85,230,44,194,180,233,33,239,133,162,47,87,250,92,88,220,64,217,109,141,71,183,183,54,211,112,1,139,108,134,77,22,120,97,82,67,78,54,211,5,253,150,234,119,176,80,69,227,5,151,79,55,229,167,
251,239,137,212,235,210,13,189,35,230,66,18,218,255,248,165,64,184,58,75,144,185,242,128,245,49,242,202,46,48,16,42,101,173,178,96,16,37,109,70,133,156,229,125,170,193,14,114,39,38,42,55,221,17,62,193,
181,198,140,106,3,46,99,138,152,155,99,97,112,104,248,205,217,209,121,133,6,218,224,134,251,238,239,96,232,184,236,193,143,183,56,110,104,213,226,253,101,228,62,215,15,166,208,205,140,223,213,141,182,
148,135,91,61,135,32,63,43,17,163,235,84,254,178,81,110,254,69,116,57,99,202,146,21,137,105,102,36,103,246,116,76,122,107,9,130,202,232,66,30,109,18,10,193,102,249,96,173,73,58,123,69,33,232,215,17,20,
54,70,184,134,169,102,222,117,35,247,116,80,70,11,176,61,185,215,201,159,73,142,205,84,226,56,98,244,11,105,120,230,85,117,96,196,73,32,31,178,73,62,148,252,35,100,0,113,197,250,253,109,46,181,162,70,
67,98,122,192,228,189,66,136,164,240,134,168,20,145,231,212,228,113,173,25,159,48,63,80,205,201,232,146,149,108,148,217,234,163,35,133,238,196,98,116,168,240,179,44,206,186,89,37,17,114,215,2,8,191,110,
243,113,8,135,212,52,76,138,216,225,1,121,70,72,21,86,56,155,37,69,35,245,44,236,49,143,25,51,122,72,252,117,193,25,172,73,252,216,77,147,98,215,109,99,5,46,216,252,132,128,109,76,90,244,238,188,70,225,
63,222,215,201,30,197,205,143,157,60,194,220,146,236,112,206,172,113,66,46,12,19,171,83,217,198,221,74,177,134,207,188,234,216,91,119,214,63,109,89,220,113,217,157,221,90,154,204,91,61,61,155,108,100,
164,185,144,53,77,179,224,168,146,14,102,151,231,185,216,28,58,181,22,44,126,29,146,117,90,107,186,189,247,98,252,216,199,183,48,57,84,95,45,64,45,170,235,215,235,219,37,162,29,172,157,5,215,4,91,120,
150,176,234,84,50,180,38,191,181,43,210,156,47,24,122,151,234,218,103,207,99,104,46,0,22,137,246,176,107,115,64,86,160,40,78,128,200,61,108,218,31,123,100,72,42,74,206,217,161,197,10,143,225,153,136,19,
37,153,6,176,0,96,78,24,198,168,137,189,93,99,114,107,79,254,228,236,209,27,182,26,228,14,146,75,56,97,131,243,179,51,201,246,22,141,125,66,110,204,51,82,29,84,242,45,111,140,148,201,12,117,222,70,159,
4,14,154,37,18,217,171,146,122,251,234,122,156,225,114,233,73,63,120,206,196,97,116,71,79,218,70,208,172,24,246,137,209,219,132,157,66,35,78,141,82,73,118,48,225,231,126,66,134,50,48,164,235,207,63,255,
244,218,197,92,241,228,253,64,182,21,151,12,53,244,148,155,138,27,47,201,231,3,35,76,212,38,15,248,152,26,166,10,216,153,116,196,39,87,58,8,2,7,140,252,245,117,231,59,242,146,26,157,14,227,70,154,181,
31,123,188,185,40,56,20,106,153,209,141,73,218,100,234,58,114,203,144,20,182,57,87,18,158,13,55,187,39,33,120,101,242,3,7,125,150,122,155,160,224,36,222,31,10,190,146,91,165,240,248,238,64,41,106,38,94,
184,198,230,78,59,99,139,146,178,131,246,195,39,156,65,192,39,105,220,114,210,225,19,201,114,199,135,50,143,154,138,66,222,17,91,188,203,211,25,118,207,194,204,181,57,157,110,38,133,128,33,20,209,164,
96,191,252,167,204,130,169,8,193,115,226,161,130,93,75,244,59,65,218,166,220,226,153,112,93,118,245,132,175,75,190,167,242,121,109,101,191,3,47,108,230,98,161,176,129,180,20,133,201,33,97,23,249,156,228,
151,162,17,87,154,84,161,244,179,97,160,83,215,40,155,137,166,21,83,111,9,108,251,40,55,231,20,78,175,94,123,139,49,206,52,148,167,229,29,133,243,62,196,93,232,82,0,234,25,77,12,116,15,239,114,85,222,
181,96,115,235,177,151,204,3,234,141,20,91,110,121,157,23,52,73,200,147,83,12,215,180,211,133,162,213,27,7,210,43,248,60,33,34,185,162,133,213,224,116,66,6,45,159,103,82,94,58,134,185,130,148,194,197,
215,106,112,54,221,152,106,173,212,13,43,183,57,62,78,118,158,35,53,20,150,187,91,112,100,53,57,10,76,59,212,105,153,170,209,218,156,209,20,198,16,200,181,221,52,213,212,153,7,48,74,142,69,201,27,149,
121,166,205,77,186,110,45,213,38,71,231,195,225,30,1,130,63,193,36,70,215,66,142,115,132,125,93,44,98,222,73,204,11,126,131,74,56,189,134,15,162,175,73,53,72,123,61,19,167,173,27,195,251,66,68,176,8,103,
67,208,243,12,108,239,1,230,81,195,248,66,148,56,20,231,77,98,96,167,180,212,142,238,116,252,28,129,92,221,88,98,28,91,86,85,102,44,145,58,27,106,119,6,30,66,12,155,111,119,102,79,106,11,102,67,131,90,
155,23,68,52,78,200,83,207,126,250,94,230,249,230,43,212,189,232,118,245,155,133,244,76,200,197,74,67,146,152,15,79,86,184,189,253,197,132,213,167,252,114,18,153,247,242,203,77,243,227,125,242,60,39,146,
86,53,176,130,124,191,78,179,144,121,134,158,136,202,203,1,89,200,201,25,241,43,236,179,31,48,125,189,23,170,195,92,215,196,197,140,137,237,245,251,207,125,148,191,204,82,90,108,255,62,191,244,24,151,
252,78,125,171,197,208,232,136,57,49,66,230,120,253,254,109,111,42,116,43,68,29,170,244,234,109,108,240,3,51,180,131,189,92,65,182,136,185,47,65,175,114,61,119,178,12,89,152,43,205,74,150,122,24,18,113,
139,99,106,135,51,202,87,54,30,165,6,7,57,224,74,115,95,178,211,132,19,71,230,76,19,34,210,52,52,222,249,100,161,146,141,246,163,171,185,156,174,197,207,96,107,50,104,103,205,169,97,57,15,44,105,64,103,
174,146,105,217,152,137,32,205,77,178,218,205,42,71,2,78,73,243,203,51,129,132,179,36,41,153,37,243,137,30,163,20,147,57,59,168,112,206,79,139,227,28,139,75,211,187,185,28,167,38,246,56,174,225,1,108,
162,208,37,243,188,185,218,51,238,173,244,205,155,124,216,231,31,191,110,70,235,18,105,212,31,70,6,56,189,95,209,86,2,219,90,22,107,71,27,77,10,165,175,63,254,208,99,90,152,57,95,2,190,247,22,62,218,94,
65,238,155,113,171,180,209,238,66,235,80,80,128,9,168,33,39,242,78,206,165,158,39,121,130,171,254,154,174,30,62,145,246,112,209,59,43,248,130,47,207,214,36,85,115,198,104,154,169,80,154,55,166,17,189,
145,178,86,39,230,2,217,226,191,32,171,205,255,212,22,196,100,31,240,73,144,31,180,53,31,54,112,93,55,113,26,35,7,59,68,92,136,180,59,201,224,126,78,63,78,20,152,4,21,120,84,219,92,198,225,213,57,105,
115,121,35,180,180,169,216,30,110,233,68,200,218,244,140,167,142,4,101,249,166,134,86,234,151,4,171,239,151,162,52,68,40,100,65,74,91,145,133,24,217,251,205,69,137,48,138,48,25,229,229,205,114,25,240,
84,125,202,104,115,246,246,130,87,165,249,146,55,117,98,99,200,215,234,27,67,127,180,34,93,49,37,245,26,17,165,230,152,206,178,225,200,93,7,208,83,190,225,50,223,52,51,71,109,176,111,116,173,232,200,80,
111,205,223,171,255,141,56,109,64,248,118,60,31,193,0,154,201,208,147,173,195,201,169,177,253,110,110,239,67,239,107,202,103,99,193,121,175,158,203,166,197,20,136,108,24,112,27,187,199,57,66,171,252,101,
92,93,73,98,52,22,12,244,68,247,188,180,198,169,194,116,128,50,3,3,64,230,95,166,169,57,161,2,196,23,170,28,105,149,51,64,240,69,181,225,19,29,56,235,135,17,237,74,71,176,108,240,202,49,220,216,160,2,
241,204,9,235,104,33,241,180,10,171,153,229,85,184,32,61,174,26,88,19,207,185,129,42,103,155,177,137,1,65,43,150,152,74,36,124,124,126,184,255,184,126,164,159,247,135,21,64,116,33,59,49,184,189,90,59,
16,35,175,195,150,46,145,2,114,4,179,92,179,59,65,182,149,144,185,214,52,102,217,39,47,96,164,137,251,84,98,36,175,94,131,204,133,196,49,67,33,24,141,156,90,114,173,80,55,185,236,245,157,189,41,157,29,
94,210,68,218,31,184,91,75,140,112,230,111,37,10,18,182,244,181,240,248,49,128,62,155,82,185,25,192,173,75,82,130,126,54,135,111,194,150,164,23,121,38,226,74,142,193,5,216,113,248,24,205,31,54,43,87,152,
158,22,211,94,71,206,220,189,199,78,118,185,231,131,53,158,131,50,229,129,90,16,191,38,2,242,128,90,146,57,225,235,251,183,30,229,172,13,104,23,243,196,252,73,141,220,239,19,222,66,97,29,40,31,244,66,
235,90,113,96,9,215,210,255,238,28,242,195,97,225,176,221,24,90,177,54,8,201,237,161,126,128,30,37,196,13,89,108,218,74,74,85,160,121,15,141,36,23,40,206,2,55,93,244,105,85,151,90,193,93,78,91,163,210,
173,64,134,160,179,125,122,187,225,117,244,59,231,3,120,96,220,115,214,214,132,28,54,12,81,157,217,157,58,48,110,149,151,148,146,183,97,165,45,250,194,225,64,24,118,35,230,88,246,112,81,24,253,45,73,26,
46,183,54,99,64,40,222,247,38,63,37,205,226,161,160,173,252,152,158,230,243,197,147,231,207,173,120,227,204,241,52,121,66,189,137,30,15,207,53,111,163,239,198,184,231,210,192,58,179,225,108,131,103,208,
1,108,19,214,122,206,14,146,103,151,33,42,55,51,3,156,21,12,124,240,30,222,156,15,222,221,195,210,230,49,54,44,92,64,84,90,142,203,241,199,29,222,15,136,206,155,77,140,213,206,75,178,62,217,23,249,231,
191,253,39,31,254,35,199,197,31,59,39,61,48,82,88,21,143,73,129,120,96,98,105,182,71,177,97,227,182,216,57,36,200,219,123,218,113,104,129,169,173,226,56,161,28,201,13,78,179,222,43,39,222,230,179,100,
86,20,61,89,213,136,221,222,56,128,29,11,223,43,234,52,114,132,3,57,57,227,133,246,44,60,74,105,218,69,85,35,39,68,80,155,29,184,220,74,199,251,186,137,215,120,140,230,232,220,56,163,50,153,13,220,56,
161,32,71,91,223,250,121,99,170,19,61,176,169,176,17,153,72,222,40,24,53,99,184,237,25,84,57,92,191,90,242,1,91,190,208,224,144,251,127,189,223,142,63,91,93,49,127,152,156,94,183,81,126,34,163,9,4,96,
168,177,62,11,72,49,79,181,181,16,228,100,141,172,131,105,66,9,62,165,26,0,224,56,52,167,178,166,11,213,154,239,67,127,223,208,96,151,47,161,76,34,12,122,82,172,82,123,223,152,92,32,194,50,45,40,150,79,
194,50,30,101,115,107,151,2,27,150,210,130,25,195,5,216,168,224,115,108,139,116,51,72,75,193,48,137,220,108,185,179,66,205,230,167,63,232,90,183,201,9,63,142,42,99,190,212,36,29,104,110,148,117,227,66,
38,183,190,27,47,17,86,135,62,10,57,113,56,231,13,147,13,166,122,182,79,33,227,220,135,220,83,7,51,131,253,227,80,154,51,202,175,240,87,199,184,24,31,99,236,86,43,65,66,142,98,170,187,86,38,15,117,146,
104,120,161,77,106,186,27,203,249,15,192,60,145,6,96,140,245,117,58,89,154,254,239,202,169,252,245,133,66,212,54,177,116,108,136,57,43,152,14,155,242,5,34,143,232,186,200,181,101,142,222,204,195,165,185,
63,101,69,126,161,195,125,116,37,127,232,100,136,19,134,4,18,9,229,247,4,71,201,124,57,135,233,98,104,176,172,121,74,51,79,198,153,162,203,128,125,135,218,44,147,12,161,94,68,61,229,57,135,203,111,115,
46,56,64,177,175,237,238,95,73,175,161,123,143,58,186,68,61,205,50,100,223,188,252,32,235,214,27,141,44,42,225,154,236,80,184,9,8,165,148,155,198,39,85,196,53,136,24,25,96,110,36,59,48,181,97,47,120,133,
223,17,39,199,202,42,111,45,245,245,17,125,39,102,4,177,221,73,71,11,173,226,243,117,151,240,117,143,163,186,120,59,51,180,110,213,35,166,155,109,61,14,63,169,230,12,187,152,208,229,152,252,153,172,173,
90,2,211,180,14,78,144,147,31,152,114,246,64,170,247,245,249,229,125,119,195,80,187,181,133,241,172,85,50,115,96,130,151,22,27,206,51,140,93,60,138,189,176,242,120,146,5,169,156,200,169,120,101,149,99,
68,141,46,13,151,42,56,54,181,89,143,163,143,46,24,139,112,138,219,58,35,159,42,213,7,215,243,72,171,61,152,219,204,195,30,152,158,219,146,187,88,73,146,137,44,228,58,208,171,109,224,112,122,75,14,46,
108,3,59,61,60,10,103,176,192,231,188,169,43,75,74,17,242,144,206,172,30,204,192,121,174,226,87,202,33,71,218,124,5,99,85,252,216,166,187,70,114,124,139,89,57,156,97,222,156,223,234,140,122,186,89,164,
30,188,13,130,234,119,79,206,25,58,33,2,225,148,157,248,72,227,22,122,31,50,66,90,11,15,246,44,143,208,147,234,10,143,120,178,228,143,52,117,140,14,114,11,46,26,50,16,84,166,35,211,134,80,48,73,83,49,
88,119,142,249,102,19,147,42,165,163,9,186,142,62,241,132,171,130,30,227,28,64,169,61,112,252,10,189,206,208,9,15,104,49,65,39,252,120,130,184,121,141,132,41,134,3,109,168,9,1,218,82,215,92,77,222,75,
182,138,31,17,169,135,43,213,93,30,154,238,78,113,172,148,221,2,47,196,244,55,95,69,78,248,26,20,204,231,177,200,229,230,88,86,211,60,157,108,233,236,130,178,228,88,150,201,32,156,229,147,199,148,48,114,
215,196,86,207,22,209,212,179,103,151,219,154,134,20,148,84,109,175,18,222,224,25,196,239,96,239,155,166,250,112,44,55,187,130,40,195,220,197,92,205,231,113,171,135,207,243,225,134,97,154,166,161,158,
32,92,229,83,36,208,98,20,210,247,170,229,70,140,153,137,96,205,1,6,21,35,77,228,250,204,242,239,225,198,3,154,10,98,188,31,83,39,229,242,86,187,43,234,69,126,114,232,17,156,210,22,105,251,34,137,0,77,
95,218,137,117,174,152,0,81,45,154,22,124,248,152,203,251,167,185,111,205,27,162,56,39,39,21,176,170,166,10,15,66,48,106,110,88,245,30,24,191,215,209,143,109,105,110,98,214,56,243,139,6,248,62,238,70,
84,153,40,225,118,40,237,166,224,203,160,116,1,172,114,97,228,176,10,234,240,80,51,89,216,141,82,19,150,71,90,217,109,128,83,158,171,157,56,152,238,188,6,101,39,133,85,86,60,61,110,198,253,142,81,38,242,
177,15,162,106,247,217,144,153,149,196,133,144,103,119,47,111,137,206,155,148,195,175,147,244,189,31,169,146,213,11,195,90,208,188,135,18,249,49,221,195,140,103,139,231,146,102,192,48,108,162,136,170,
22,207,200,173,233,210,1,35,85,53,41,208,194,70,65,207,161,225,84,59,20,115,1,173,199,66,108,6,9,201,226,61,62,62,124,192,163,10,125,180,83,51,181,45,169,210,74,114,238,52,151,140,106,145,226,47,21,120,
145,212,9,99,167,130,188,241,128,128,157,51,26,59,250,237,180,185,230,77,190,174,235,230,7,73,144,188,56,145,183,69,110,150,166,186,134,101,160,105,104,156,134,118,35,123,32,138,209,32,161,199,188,65,
5,245,101,178,154,107,170,35,63,164,38,135,142,29,100,1,177,208,137,89,224,137,165,147,176,200,152,204,134,57,141,176,73,97,207,219,23,20,138,65,235,190,4,173,45,79,169,136,99,30,40,192,8,35,4,206,20,
159,240,58,231,134,98,27,53,123,194,79,12,138,117,19,9,182,39,91,71,171,115,97,72,168,165,24,198,36,143,220,157,234,130,43,157,48,15,204,173,148,104,78,185,198,1,83,2,158,136,77,255,2,161,121,66,238,240,
124,60,28,201,23,7,140,235,245,93,62,190,190,172,116,7,158,216,42,172,136,65,253,162,39,77,3,133,139,96,120,182,57,105,30,109,174,219,40,225,137,197,68,50,70,166,81,81,171,93,123,76,28,187,241,32,57,40,
29,144,144,143,63,89,49,234,110,18,182,72,206,104,127,245,245,41,158,247,106,190,131,205,151,53,208,60,186,110,102,255,169,125,72,122,156,207,49,215,7,137,162,195,231,208,84,108,154,22,131,166,106,68,
149,9,242,107,238,99,179,225,192,14,143,27,31,104,69,27,139,63,43,11,71,122,111,205,65,7,35,22,122,246,45,208,6,46,68,206,26,242,60,189,113,65,30,78,48,230,125,88,126,98,148,232,98,149,40,158,76,194,91,
252,189,175,212,78,157,51,34,251,9,151,55,130,232,202,167,84,83,209,239,239,120,40,80,178,201,17,43,209,241,196,13,81,31,193,207,15,199,32,135,217,96,184,22,216,91,147,45,220,15,86,73,189,211,212,27,165,
217,192,196,124,240,240,41,55,145,209,164,174,132,212,41,12,197,244,89,52,120,79,59,234,144,11,186,69,11,132,249,53,122,203,29,110,15,62,75,134,6,10,137,42,70,172,148,63,167,109,202,68,200,237,137,97,
100,157,141,234,254,60,172,192,41,117,208,215,63,186,55,14,168,115,31,73,145,24,227,246,202,189,117,9,47,158,172,209,97,228,189,124,134,122,108,10,226,188,6,245,28,63,156,125,167,75,46,216,152,160,219,
198,79,217,175,59,209,1,100,167,255,185,50,141,32,92,59,96,154,191,128,177,48,239,231,244,90,54,15,122,202,141,163,11,196,121,155,49,49,238,60,175,48,97,125,62,252,216,247,100,108,104,165,93,210,180,250,
174,70,4,52,42,85,7,3,177,19,70,21,44,215,45,62,231,154,31,170,161,234,80,72,104,178,144,41,137,73,93,86,76,180,133,91,44,25,64,34,131,109,37,11,176,96,249,82,127,118,27,134,39,225,197,221,106,155,179,
219,153,183,117,204,253,89,53,162,44,171,238,236,28,193,168,196,142,68,41,9,239,76,42,193,53,71,82,3,86,207,51,221,198,111,197,84,217,123,155,178,38,253,117,140,130,142,241,36,43,156,214,116,83,158,183,
35,56,87,229,204,159,15,240,6,188,136,105,209,158,196,238,76,54,205,24,93,221,42,164,186,151,23,118,156,201,147,38,164,56,86,24,68,224,59,5,143,63,99,248,100,113,126,66,71,211,132,69,139,55,6,146,137,
173,174,23,156,174,122,130,1,41,105,240,29,162,3,219,128,2,128,94,198,170,92,188,6,112,65,29,173,38,21,22,32,129,234,248,128,230,134,154,95,97,1,216,113,54,188,21,53,111,172,20,144,95,175,233,15,202,5,
75,0,219,7,248,126,117,128,163,216,195,132,202,251,216,208,81,235,231,15,35,133,48,39,116,146,3,7,7,157,241,112,23,186,53,2,238,115,135,19,206,97,217,173,215,218,19,17,163,7,53,46,188,113,206,176,163,
46,43,69,205,104,31,234,44,155,243,186,121,143,231,97,160,244,40,154,222,159,110,166,222,118,234,88,104,152,38,114,218,144,35,236,99,110,94,119,247,13,151,69,0,172,79,190,239,13,109,62,234,117,6,26,33,
244,155,164,169,87,214,132,155,241,86,116,237,184,98,149,225,63,254,42,229,144,84,237,85,75,34,10,155,12,98,174,233,24,37,79,36,101,165,83,177,48,44,79,30,136,202,60,81,7,123,250,134,160,216,184,59,109,
222,119,232,74,132,94,36,115,4,119,110,147,31,190,178,113,152,124,99,120,79,107,110,179,169,99,209,20,154,128,254,153,3,126,4,112,215,2,160,5,205,74,160,40,1,230,243,8,12,141,198,111,51,204,226,205,227,
14,237,176,6,201,118,130,49,153,53,18,252,76,166,205,243,100,232,99,71,38,181,183,20,147,185,42,199,52,199,72,187,233,211,109,199,200,35,248,202,109,162,2,243,85,206,158,97,238,24,240,78,232,126,66,163,
158,109,97,154,195,96,131,144,11,34,184,10,170,18,239,128,172,162,108,63,232,188,72,247,72,90,49,129,109,77,47,124,10,166,135,201,253,119,95,116,142,85,129,143,229,130,59,242,114,51,254,114,199,99,217,
117,81,163,212,135,141,210,78,214,225,78,178,64,3,101,122,91,210,210,25,233,232,48,205,162,84,67,200,24,84,50,234,179,53,204,233,161,93,155,130,25,134,106,166,46,246,126,50,221,94,170,205,183,69,51,105,
47,74,18,238,146,134,181,208,154,170,230,125,157,38,199,50,57,46,204,63,60,170,64,79,162,152,212,203,161,2,22,39,29,94,230,11,209,133,243,185,25,13,15,240,46,169,13,247,98,36,29,157,61,79,80,72,172,153,
32,88,44,183,178,91,142,235,133,49,107,158,243,194,222,58,119,255,69,127,119,39,249,174,91,49,84,210,12,156,68,90,243,254,114,89,105,184,85,130,134,152,223,205,107,0,46,91,190,33,238,14,108,43,21,106,
211,125,136,162,139,130,148,99,97,34,48,200,35,10,82,59,164,83,188,91,195,105,179,52,193,202,248,38,59,59,193,47,8,47,81,205,81,65,170,8,237,119,8,203,100,67,188,97,173,216,210,115,228,172,76,230,211,
52,94,213,5,171,230,173,58,71,103,134,190,132,254,50,50,131,230,245,214,5,35,92,201,130,234,109,236,69,68,87,214,150,6,248,104,151,103,25,137,182,39,63,159,5,39,92,93,156,45,124,117,200,51,20,8,72,114,
74,211,135,4,140,163,196,10,40,236,40,211,172,24,20,68,199,52,181,135,41,161,69,206,99,136,135,243,254,74,180,20,147,54,136,180,181,86,239,29,18,135,50,192,37,229,112,78,14,63,114,69,226,15,94,101,30,
61,146,37,26,213,23,30,102,121,39,120,40,89,180,187,195,45,141,0,242,144,119,58,19,103,171,192,48,94,133,142,9,147,113,131,57,20,221,46,26,212,106,39,236,232,110,249,167,111,57,71,12,93,5,157,108,142,
152,33,94,82,126,91,146,60,153,145,154,167,66,109,127,117,46,166,176,143,156,77,158,100,150,38,52,151,1,115,108,30,239,139,26,241,235,52,210,239,87,76,107,160,232,10,218,105,145,67,104,251,232,137,65,
62,238,209,88,141,118,182,162,141,116,249,17,87,28,147,34,198,37,108,147,2,182,77,73,189,210,229,99,231,140,75,215,161,175,97,84,211,182,21,8,24,156,130,69,156,148,95,146,59,159,78,16,142,139,209,173,
108,174,155,242,207,219,102,43,250,229,217,57,141,244,187,204,163,180,167,146,142,50,151,93,36,159,33,154,101,145,153,211,162,243,211,146,49,190,91,204,176,82,167,137,2,133,254,132,159,208,205,105,100,
242,39,27,107,109,203,142,43,205,206,169,137,142,55,156,237,111,246,123,195,225,178,138,201,95,97,232,112,207,81,105,120,91,86,185,77,221,101,111,156,215,50,192,167,101,212,119,223,74,122,93,98,6,229,
137,2,238,169,248,110,220,83,61,37,193,122,242,123,212,109,0,66,163,211,170,106,60,224,156,176,188,79,61,213,174,69,97,1,8,195,250,97,208,195,155,4,14,12,13,253,148,227,254,10,144,251,54,114,24,149,159,
131,220,48,88,165,75,44,105,96,154,99,166,2,130,34,43,74,78,9,162,91,149,9,176,252,136,49,190,20,166,133,122,145,210,210,233,192,118,30,105,114,7,180,203,95,140,78,137,169,113,129,243,134,246,228,206,
155,71,212,149,18,182,47,90,129,158,151,99,112,57,143,242,185,132,90,149,134,219,220,76,70,163,29,32,115,144,59,96,222,192,22,240,209,67,202,64,51,42,126,31,44,82,230,156,29,67,92,173,50,190,82,187,48,
72,24,7,136,19,116,38,241,41,28,96,245,223,12,3,136,39,38,107,27,14,93,184,13,40,24,243,150,246,72,49,124,96,188,74,115,151,226,238,138,88,242,96,27,11,17,98,138,23,180,30,179,152,209,145,138,189,180,
249,110,179,247,180,113,127,152,177,85,158,255,247,18,243,126,149,210,34,175,2,64,234,158,223,104,237,49,225,45,200,89,178,252,147,16,130,143,61,209,22,213,51,221,220,195,115,178,176,48,105,152,50,129,
17,190,80,98,58,187,136,253,110,169,14,73,204,16,252,45,77,63,243,209,30,73,248,85,242,108,200,31,122,33,182,228,108,114,66,115,27,27,14,69,82,239,244,228,74,230,122,105,66,89,110,8,245,78,164,136,226,
133,13,231,7,249,112,38,140,118,105,200,219,73,229,91,101,221,36,25,217,99,125,38,32,253,62,15,104,222,6,172,210,90,123,140,121,139,196,13,248,162,57,166,216,125,119,2,9,16,129,119,162,200,81,94,97,10,
69,152,158,33,65,121,234,232,236,233,13,15,226,169,180,166,246,73,24,13,237,96,120,68,135,61,9,60,94,36,54,252,82,187,233,169,189,109,70,191,207,63,254,176,252,5,187,71,101,17,24,3,124,173,233,38,166,
60,6,216,103,94,201,135,82,253,176,175,24,36,69,175,107,33,253,234,23,151,252,20,131,74,115,110,51,206,43,58,8,96,183,143,121,239,100,80,16,79,217,4,7,85,82,48,213,209,98,172,37,230,137,215,4,198,103,
107,233,229,27,160,187,161,85,134,93,56,149,130,57,31,253,122,136,88,240,72,117,109,123,109,169,59,20,242,136,60,198,239,222,50,140,50,159,246,214,244,5,42,153,37,132,168,147,73,197,217,66,91,59,39,186,
1,102,228,237,99,222,60,179,248,25,94,39,204,123,127,126,2,75,117,177,28,238,151,110,70,200,42,232,26,204,212,205,176,207,171,124,191,190,93,104,118,107,61,179,19,180,127,21,91,233,197,225,78,50,251,70,
24,66,7,142,168,134,65,234,146,83,190,118,158,40,236,159,39,6,61,202,117,190,126,255,25,237,62,97,19,203,244,91,76,26,168,200,99,124,39,130,52,154,137,175,3,100,78,101,151,11,4,196,201,180,107,186,113,
255,68,158,75,40,165,164,129,160,138,96,165,190,115,166,153,249,232,139,214,176,232,163,183,203,168,126,157,87,106,83,158,94,192,112,250,23,35,235,3,17,130,157,138,154,188,51,25,97,56,173,44,42,123,139,
194,28,37,60,110,84,180,176,11,204,149,173,3,212,165,250,113,40,145,150,202,203,192,98,167,115,49,61,237,129,242,116,166,65,247,76,37,106,158,33,78,204,208,25,88,221,173,249,140,132,82,220,76,224,162,
60,101,140,191,176,229,57,157,150,122,124,78,10,35,227,60,195,60,252,57,121,205,131,243,121,32,56,99,239,59,207,80,39,97,68,3,226,245,254,214,197,118,225,203,232,209,177,243,72,233,136,28,8,179,131,3,
124,228,65,177,98,245,33,226,59,87,128,231,128,96,86,47,116,125,92,31,141,105,8,45,1,206,67,108,92,150,13,139,242,153,131,139,81,110,57,174,70,139,184,2,44,181,52,139,68,122,60,186,249,124,246,168,68,
43,11,12,33,237,58,189,79,79,194,27,242,43,39,21,220,24,49,153,231,89,127,104,184,151,119,144,136,0,56,53,109,5,11,157,145,103,174,96,139,147,160,177,126,120,0,149,181,210,160,210,225,54,121,222,199,70,
177,118,129,188,203,46,87,228,179,22,233,5,37,169,169,112,178,60,212,58,36,181,253,117,216,61,157,134,9,132,147,88,237,85,52,158,109,167,137,21,39,221,214,28,125,153,122,12,183,240,59,220,55,104,194,185,
183,234,24,110,121,237,183,174,9,67,2,212,254,208,137,29,24,60,159,184,170,154,15,171,194,141,172,97,88,3,43,22,9,23,92,241,126,17,49,217,60,109,158,225,80,171,191,112,224,178,7,210,252,104,106,222,29,
8,106,84,65,149,237,211,84,121,19,211,48,246,252,16,173,178,28,49,241,212,187,46,235,38,30,171,232,16,177,218,102,107,139,108,154,76,103,155,164,207,185,41,192,240,222,240,90,63,70,42,151,184,30,94,19,
19,120,82,205,178,108,131,163,145,217,38,165,59,110,245,129,0,235,38,221,37,2,208,188,75,2,49,23,72,209,44,122,156,141,180,238,69,89,115,45,80,216,14,246,30,51,112,172,168,169,238,33,206,52,132,227,160,
29,204,158,227,70,230,136,153,223,61,52,234,169,73,192,136,150,243,102,245,40,157,185,72,12,135,14,111,51,10,246,12,104,170,128,157,206,205,175,178,92,177,11,215,89,242,79,4,23,234,60,138,229,113,114,
161,178,56,69,103,45,100,140,239,239,223,96,4,89,129,114,36,54,206,77,20,133,174,208,1,91,23,234,144,179,85,95,88,176,4,29,74,112,74,194,47,86,237,195,12,43,59,121,21,218,192,212,192,200,176,136,20,126,
241,60,170,133,18,147,16,13,200,202,134,133,21,39,15,208,105,13,48,26,162,243,113,27,63,151,201,181,180,11,244,42,55,143,215,163,177,212,53,220,243,155,19,43,124,48,59,135,29,185,251,91,191,33,21,173,
134,142,156,199,179,207,54,119,114,252,252,139,228,130,128,52,201,30,217,187,61,147,157,233,42,220,19,165,175,209,222,187,222,73,210,190,233,221,83,243,237,174,34,62,102,25,137,161,13,254,140,89,150,182,
176,150,183,53,181,69,234,196,236,169,159,47,134,86,97,247,13,43,155,253,26,155,82,60,37,82,218,206,227,155,178,83,35,15,8,22,26,182,186,79,179,109,185,160,171,40,48,26,160,51,134,94,144,140,204,133,125,
52,177,48,230,64,110,57,170,45,62,179,85,225,152,100,201,51,178,141,71,201,66,165,21,237,47,219,97,54,104,242,66,207,60,8,22,203,233,118,225,18,214,156,144,64,240,154,62,226,70,135,59,224,163,195,145,
207,51,13,151,111,55,161,153,222,44,56,164,105,251,110,204,191,232,115,34,21,9,114,137,79,139,133,153,189,15,128,122,192,54,48,201,67,122,94,52,105,129,186,159,59,37,31,183,94,116,77,14,22,203,79,150,
44,72,99,212,229,204,26,26,106,73,0,48,249,66,76,163,200,83,116,221,212,192,8,9,78,213,35,180,198,130,233,113,60,124,26,237,9,200,232,230,158,7,207,82,166,7,217,1,46,6,175,218,9,100,16,37,117,37,112,42,
208,1,63,169,98,212,251,137,132,250,194,136,138,75,189,26,187,196,104,55,83,37,43,58,136,11,242,197,143,16,104,17,62,58,175,52,56,84,6,69,65,179,209,186,227,153,119,167,177,153,116,58,213,105,111,122,
51,231,2,129,181,187,127,58,5,240,53,141,151,83,217,232,117,66,120,22,186,244,1,188,236,192,77,37,175,147,56,222,152,195,123,183,100,40,184,17,62,118,249,128,223,251,92,89,98,139,207,193,232,225,159,132,
96,22,6,118,205,193,214,17,156,119,34,165,168,24,222,158,117,72,220,44,116,60,206,38,84,165,196,160,121,225,44,240,191,75,13,183,222,5,85,0,23,173,145,151,205,54,101,50,40,144,29,245,211,97,3,197,166,
121,3,157,55,75,110,234,183,135,231,180,21,149,126,243,211,72,27,35,144,248,70,151,107,58,117,207,230,248,96,243,233,27,201,23,19,92,76,64,76,237,194,24,121,119,21,180,180,174,112,131,29,100,246,60,205,
106,218,0,236,195,36,13,114,244,191,222,238,76,54,147,115,26,77,216,169,198,243,106,217,35,67,129,151,81,241,254,235,2,165,222,185,151,200,181,216,106,228,77,239,40,194,22,230,252,60,145,239,148,228,183,
110,109,76,43,116,244,59,246,142,73,187,203,251,243,6,36,23,55,164,242,105,95,244,246,73,121,102,69,209,229,116,59,20,37,197,49,55,144,91,70,76,191,117,34,108,50,147,202,208,75,199,6,178,98,44,186,78,
33,17,54,88,140,158,102,44,190,156,112,2,8,97,98,142,13,139,165,6,60,80,137,183,94,24,130,230,214,76,106,76,211,135,1,70,186,1,222,167,71,222,49,169,228,68,245,157,244,230,63,231,93,58,143,33,225,203,
42,101,86,114,201,184,141,204,83,149,195,121,222,38,120,180,131,102,236,4,47,65,155,146,218,117,93,65,159,50,74,149,69,37,217,253,50,79,71,13,171,228,239,139,113,12,53,148,35,89,45,112,125,93,9,255,210,
164,247,243,211,133,79,217,253,97,128,136,192,193,77,171,100,139,103,75,13,56,140,61,70,106,76,103,10,209,217,43,31,59,212,136,155,219,218,189,251,81,48,69,215,97,140,21,59,152,233,9,139,53,23,243,167,
153,213,121,62,12,69,112,204,203,8,115,232,40,143,143,135,143,46,246,137,99,46,211,173,46,31,48,192,28,197,164,131,249,195,225,37,90,255,113,116,32,115,204,108,64,122,211,114,39,219,194,155,97,106,242,
134,39,124,229,197,82,242,30,239,224,57,50,199,238,45,160,169,145,248,176,238,208,140,105,34,236,123,55,144,50,10,20,9,3,204,247,35,57,246,49,133,96,165,239,22,60,5,213,101,29,195,181,57,106,80,128,93,
40,121,92,1,211,131,221,157,14,190,165,86,96,151,149,248,18,157,42,40,88,70,140,181,197,74,134,8,109,248,174,239,151,73,41,145,34,48,7,227,68,2,238,48,146,41,58,28,55,46,8,201,202,186,123,141,211,137,
150,18,210,148,32,133,109,11,0,242,24,200,4,243,207,21,56,166,225,102,119,153,132,236,236,195,45,246,106,138,106,205,137,189,244,25,247,225,236,96,248,120,63,255,194,144,166,227,225,41,76,79,218,154,149,
64,115,245,30,95,119,34,4,77,248,13,240,247,9,68,182,216,230,244,188,181,182,118,51,206,226,253,46,56,154,249,250,249,83,36,182,74,154,162,6,175,246,154,61,140,134,23,81,92,132,238,36,71,179,3,84,216,
71,158,172,54,45,40,157,208,54,61,129,170,168,155,47,28,163,229,125,62,62,158,222,39,119,143,167,137,191,148,177,37,19,51,109,166,128,230,192,199,52,34,32,57,149,42,108,36,9,3,53,28,171,98,65,96,120,124,
67,187,177,162,229,72,147,78,22,39,212,167,208,92,128,208,204,128,87,54,43,90,119,210,64,37,203,156,77,146,105,118,108,56,89,150,166,3,132,47,104,1,205,7,178,146,1,42,31,150,54,179,20,164,175,238,208,
65,102,60,231,9,18,8,38,195,136,139,215,245,51,96,166,19,46,9,98,66,73,157,144,43,4,91,248,111,230,184,55,59,234,100,178,117,37,64,60,6,7,160,168,43,81,200,153,2,146,199,254,225,169,70,73,57,172,210,193,
220,99,179,248,70,181,168,124,185,7,188,83,234,146,103,39,35,127,243,190,125,116,237,140,88,97,195,229,157,177,239,41,218,129,38,192,225,247,233,0,62,250,122,189,225,123,62,141,79,140,247,39,125,175,45,
101,107,12,61,170,117,241,157,198,22,234,80,5,138,177,254,0,4,242,41,126,144,234,202,58,188,65,175,198,253,0,106,7,42,243,140,123,177,225,79,99,44,194,34,94,197,113,34,153,15,234,140,73,15,156,176,96,
63,51,60,178,62,176,235,56,1,44,203,68,221,59,17,0,249,129,145,192,236,44,113,199,247,100,11,205,136,164,221,145,185,0,62,159,33,39,64,255,90,158,29,101,29,241,121,200,153,123,68,207,155,24,45,153,170,
198,152,144,30,239,49,102,234,89,79,87,98,222,70,250,97,99,101,170,220,202,19,199,86,249,11,129,152,194,53,119,187,67,148,86,10,27,37,47,213,250,247,78,71,35,81,195,249,10,213,205,148,57,125,13,154,1,
253,179,55,218,169,244,198,52,31,162,17,62,235,208,2,81,63,62,64,91,203,142,29,236,245,75,122,214,168,118,84,185,171,68,177,82,111,246,201,7,219,87,105,224,209,121,154,247,185,238,16,141,106,83,91,140,
218,110,130,155,2,185,129,94,193,14,19,161,149,18,243,87,120,116,147,242,111,9,121,72,56,7,186,49,122,142,36,210,169,207,198,70,78,34,185,10,93,55,200,252,169,169,55,156,109,234,184,120,229,6,157,175,
183,63,36,194,81,63,251,209,132,142,248,115,52,243,226,67,46,133,206,107,45,185,154,229,225,73,128,161,18,104,30,71,224,114,50,9,23,125,169,28,168,52,65,225,139,205,220,129,14,228,9,182,141,30,154,116,
172,139,225,41,222,160,80,113,255,247,43,108,186,125,92,33,17,9,99,0,153,212,249,74,100,139,234,28,2,135,213,28,219,172,62,9,237,160,22,203,123,228,118,255,77,170,13,89,74,138,238,92,252,86,112,89,203,
151,197,205,153,196,114,237,72,131,192,23,167,119,169,193,128,153,160,170,195,46,108,230,74,139,156,239,208,196,219,76,11,78,52,232,245,40,193,28,30,66,57,173,5,136,202,227,135,237,194,14,207,107,61,90,
18,177,85,162,152,170,247,102,204,18,116,226,106,177,177,112,236,55,55,192,88,76,3,134,71,195,234,218,105,139,26,135,183,208,98,182,77,245,93,30,196,137,137,150,100,76,103,96,231,200,165,22,62,113,117,
185,92,52,127,126,109,213,225,23,99,207,95,128,121,138,159,42,11,145,179,182,144,102,176,48,140,134,70,189,77,81,32,109,47,166,62,76,144,77,142,27,43,104,156,54,153,97,165,147,129,19,219,88,93,251,204,
241,90,124,242,215,192,48,88,154,121,101,5,106,30,50,112,93,111,51,67,203,169,5,144,6,14,252,138,121,234,205,55,166,193,120,56,93,246,253,16,7,232,129,110,142,5,19,99,138,53,249,154,66,233,186,190,191,
13,146,104,38,84,47,216,57,34,40,235,120,205,74,134,167,5,201,45,217,219,13,55,95,137,16,215,240,35,74,25,59,224,220,17,188,173,203,142,17,178,165,53,170,205,24,107,65,43,226,134,200,113,194,187,104,97,
140,179,132,250,113,25,44,36,95,226,50,83,36,14,45,249,193,4,167,9,129,45,8,46,174,176,123,110,9,130,90,110,58,192,113,111,174,152,116,154,215,114,70,181,251,14,177,32,169,33,5,14,32,47,72,34,11,60,72,
146,112,103,198,63,57,83,8,148,188,60,28,96,185,145,106,247,2,132,208,15,11,10,182,52,237,180,123,122,191,58,59,127,104,247,139,110,21,115,56,92,68,107,152,150,59,97,201,63,201,59,114,136,240,188,70,197,
56,17,233,94,160,5,82,6,252,64,222,105,211,227,58,158,53,71,190,88,170,163,130,190,102,86,147,114,10,191,213,145,109,175,155,1,224,83,12,238,229,15,39,76,236,89,65,125,255,249,59,18,209,195,22,65,73,147,
165,114,62,36,36,221,94,35,148,179,138,37,40,173,80,131,186,177,53,39,153,134,169,83,137,174,210,53,110,204,28,197,237,56,50,229,120,56,217,152,125,110,175,60,221,232,116,121,30,163,69,11,34,151,62,126,
40,7,201,234,142,105,175,213,21,135,58,45,13,93,45,63,214,144,135,114,120,17,229,16,38,19,181,13,68,147,44,14,183,202,115,184,105,72,90,136,15,34,71,179,170,186,38,115,182,36,65,88,217,123,115,220,180,
72,196,40,51,33,217,25,233,215,233,69,23,167,137,229,137,17,172,160,71,186,103,97,177,221,124,194,111,113,4,228,17,8,195,152,110,220,202,141,96,157,152,238,152,47,59,122,19,82,155,159,233,128,164,20,100,
96,85,13,104,85,3,220,175,175,47,124,55,82,221,107,236,82,70,56,109,31,130,177,211,197,181,1,124,55,103,224,176,186,67,193,50,193,0,209,169,171,240,148,225,66,156,128,7,104,12,207,174,80,182,233,211,220,
6,60,205,220,51,183,247,234,254,96,132,136,76,54,186,143,146,171,28,156,84,125,192,61,23,49,43,104,215,197,36,181,163,192,95,3,36,90,139,198,119,3,128,158,229,27,168,80,31,199,35,24,66,224,150,46,95,128,
38,71,160,108,54,19,89,217,57,98,107,178,225,132,65,38,232,98,52,6,132,210,34,82,145,73,227,139,169,150,31,38,87,52,87,152,55,116,67,115,202,155,77,76,248,169,179,229,71,97,91,73,19,47,6,58,95,121,88,
128,79,158,72,19,111,73,154,41,203,88,98,42,123,24,23,254,219,158,253,192,115,115,238,234,154,110,142,64,170,162,124,254,11,164,231,182,64,13,35,25,182,178,33,47,36,6,113,225,213,222,228,82,217,45,137,
15,61,185,205,202,151,18,135,13,74,6,30,84,35,226,203,168,65,212,184,92,86,160,45,48,182,234,174,233,213,30,251,180,45,185,229,142,196,44,162,182,152,71,46,61,131,152,99,177,253,231,152,103,50,62,125,
222,24,211,160,194,213,228,164,198,214,38,238,174,155,82,245,6,83,166,51,113,2,122,56,253,162,175,206,209,125,227,10,79,76,31,19,130,130,137,3,214,31,224,32,210,98,175,250,28,25,187,15,170,123,66,145,
80,19,115,136,81,223,60,193,139,31,187,222,10,214,235,28,94,184,185,127,120,182,50,164,39,125,210,171,251,140,111,74,106,199,242,220,149,160,118,161,28,3,80,143,123,99,182,234,173,91,62,135,111,137,130,
45,114,196,129,41,105,156,235,93,144,154,13,180,172,249,76,44,144,217,134,111,133,58,12,80,201,234,52,105,230,225,237,161,166,21,182,145,93,47,215,13,191,41,217,164,123,236,235,237,67,130,130,59,89,189,
202,36,102,120,97,238,163,226,106,144,97,184,180,130,163,121,149,205,220,188,107,81,160,97,238,8,245,156,7,168,138,75,24,186,251,92,154,116,92,92,58,73,13,118,37,169,181,55,33,247,140,94,122,245,74,188,
210,215,219,103,37,150,4,107,149,155,22,101,13,78,154,152,33,178,194,2,167,132,52,163,67,218,140,56,223,183,104,73,45,139,193,87,246,253,42,121,148,107,38,240,27,154,242,218,48,190,248,10,166,120,239,
62,64,213,252,30,171,46,80,86,206,36,209,248,92,197,118,120,186,115,65,157,234,56,231,140,161,92,36,108,80,176,215,193,253,212,94,247,14,46,98,235,247,224,180,15,37,147,52,239,36,113,126,78,89,229,214,
154,13,118,122,73,17,52,57,47,75,221,242,0,171,156,17,203,207,249,253,171,208,216,141,252,187,60,79,235,224,18,10,18,175,199,41,40,102,60,162,222,105,18,67,102,92,147,57,243,160,75,2,32,161,140,185,121,
159,60,29,223,164,141,213,74,217,38,29,99,95,49,87,167,33,234,161,151,76,42,94,75,99,130,137,163,173,18,218,161,160,146,25,213,234,132,127,16,77,237,205,156,106,133,216,234,135,182,219,204,3,134,87,191,
45,49,139,136,149,106,212,195,34,231,72,14,146,169,171,139,167,66,74,203,241,33,172,134,13,143,237,183,81,207,132,184,6,42,244,133,105,24,33,70,131,164,129,93,45,20,32,162,119,26,190,216,237,222,61,113,
114,113,83,19,89,49,73,195,211,35,36,9,221,68,95,172,74,183,49,211,228,155,46,156,50,220,4,121,200,43,61,214,31,152,90,203,28,157,0,252,167,88,150,35,55,109,90,184,128,191,247,245,245,105,31,54,77,188,
35,220,201,86,238,3,125,106,18,42,201,238,126,66,213,102,249,160,249,161,175,25,221,13,82,196,58,136,158,236,129,118,246,189,233,91,169,209,40,212,141,121,128,209,137,170,108,64,162,73,145,219,225,122,
231,117,55,28,109,237,71,14,180,124,168,165,87,206,36,15,224,1,147,120,74,147,3,154,118,89,175,223,218,96,7,252,54,99,52,227,116,99,171,154,152,52,198,209,172,62,154,47,51,156,168,80,84,147,251,11,69,
78,235,33,149,173,70,122,33,209,132,6,179,181,221,7,173,46,56,1,235,145,46,24,234,25,6,172,89,120,151,141,27,56,255,70,173,26,169,69,74,62,72,156,224,230,158,66,64,76,56,222,144,77,4,226,202,212,71,241,
94,170,105,5,199,98,171,176,174,107,250,38,12,116,73,161,68,86,43,39,42,9,211,12,86,140,252,242,44,21,243,22,146,102,129,30,69,232,84,23,104,108,179,144,71,183,20,40,191,32,250,114,254,31,58,17,210,50,
146,61,46,194,31,185,73,11,95,130,28,69,115,112,176,48,46,81,148,220,205,142,98,193,136,16,229,230,214,150,141,3,86,106,117,209,161,193,44,97,236,168,34,252,162,248,95,9,217,230,224,172,234,30,227,145,
59,20,136,62,13,130,128,54,221,31,56,98,143,56,44,253,209,97,234,73,234,216,5,111,30,78,241,202,190,233,110,208,207,41,186,78,225,170,202,176,161,205,12,199,52,211,184,32,83,211,216,227,118,172,113,197,
12,29,50,120,104,118,69,212,128,243,180,43,43,240,36,215,229,209,236,64,59,35,99,111,49,168,169,182,155,101,99,246,56,118,6,20,138,217,233,88,110,241,35,155,247,83,16,28,166,59,178,158,100,32,189,26,71,
232,136,188,167,87,238,31,31,159,112,139,182,202,91,121,152,196,76,213,234,15,56,161,124,184,22,5,96,208,136,23,165,60,212,67,31,82,187,177,205,23,139,26,200,90,165,225,46,221,31,29,137,151,216,50,100,
126,43,179,70,134,1,33,167,228,68,134,240,55,28,201,108,52,230,67,211,120,159,116,171,76,30,160,255,36,169,108,116,182,176,160,51,140,104,194,62,48,116,235,194,223,188,232,40,76,185,44,231,12,2,121,80,
253,9,7,56,225,87,230,122,29,112,137,70,58,140,140,214,214,171,126,159,16,89,205,149,199,167,44,240,60,79,151,230,114,241,106,53,255,124,38,38,213,252,203,136,103,206,162,241,166,64,138,170,61,77,194,
229,20,54,22,73,244,72,114,171,149,18,131,78,249,123,138,224,88,104,229,209,122,132,152,8,91,217,117,246,189,160,190,66,150,139,170,186,165,142,22,243,101,206,63,159,224,166,102,213,102,12,68,40,24,42,
122,56,198,221,26,108,62,42,70,148,241,77,57,233,193,143,36,142,92,19,152,103,47,174,175,175,47,236,138,110,94,150,52,191,132,185,102,30,197,102,122,241,17,83,172,56,5,130,102,250,197,118,81,41,97,204,
223,104,73,146,140,172,8,24,179,127,156,171,75,89,56,66,167,183,214,160,181,206,168,113,89,152,179,168,250,163,207,47,131,112,40,75,112,235,230,233,3,170,50,71,146,109,67,119,12,78,223,141,17,185,213,
248,46,172,180,153,50,244,254,136,209,201,72,85,244,200,60,47,7,204,117,19,192,98,47,6,205,87,207,33,11,4,112,28,104,144,45,180,99,194,91,9,222,64,178,208,38,119,53,70,57,143,187,109,161,211,232,154,223,
95,194,121,156,6,76,73,134,228,241,84,129,170,82,241,227,17,69,25,61,110,232,142,209,155,23,51,36,225,80,188,199,83,204,77,39,90,26,34,37,247,253,122,159,216,95,214,96,159,200,187,30,56,142,244,8,25,83,
115,197,226,3,129,204,57,227,96,21,44,13,117,113,205,250,48,74,27,165,151,221,1,85,206,105,161,211,194,229,209,163,185,49,255,244,228,154,212,125,58,75,248,52,173,100,114,58,0,156,115,142,204,192,16,83,
51,110,109,78,41,171,122,243,62,92,232,117,130,213,226,131,163,244,117,237,6,5,185,46,104,6,239,49,23,94,235,182,120,155,27,121,209,133,110,38,150,13,77,4,40,89,101,110,70,131,89,209,69,117,248,60,242,
1,147,253,196,170,219,39,148,149,22,120,107,50,70,229,196,52,22,86,20,165,213,220,142,92,229,182,216,111,166,89,152,219,72,88,71,78,17,34,37,157,237,93,216,184,228,8,254,241,48,227,129,35,21,46,226,156,
214,225,211,148,7,85,201,166,58,176,225,14,16,93,136,98,120,97,70,169,134,12,227,89,76,86,147,182,162,166,105,85,214,48,55,71,44,21,64,9,54,121,94,49,215,69,205,6,154,58,251,255,211,63,253,13,157,158,
225,164,82,66,68,100,218,76,120,4,53,23,148,37,121,193,24,238,188,70,145,88,216,250,197,24,17,86,133,254,222,105,22,142,219,196,120,203,17,202,188,36,154,207,109,67,246,208,115,244,108,105,192,104,1,228,
227,140,116,58,164,205,225,90,36,142,200,59,48,214,141,68,147,219,48,167,218,110,211,216,40,54,99,62,26,30,66,43,36,33,184,151,153,188,75,92,148,199,37,143,206,10,223,248,172,52,109,53,229,192,204,185,
65,201,203,246,130,28,128,144,237,19,233,146,183,128,213,114,227,82,113,201,32,116,99,156,163,214,120,43,129,229,242,233,104,166,223,57,29,2,226,196,52,121,15,37,250,148,233,20,199,38,139,77,142,186,79,
88,252,173,132,210,51,127,34,36,163,60,56,68,158,79,33,103,62,15,191,81,79,148,243,223,251,8,165,155,87,69,133,238,170,198,82,146,113,18,129,229,211,137,27,196,25,185,123,233,169,248,198,4,91,59,165,22,
180,32,65,118,157,201,3,92,89,47,148,116,180,136,44,6,58,55,207,155,98,62,34,132,254,45,102,26,106,155,181,132,198,154,170,68,85,107,194,15,94,30,242,3,100,103,118,193,200,232,102,180,227,56,186,238,86,
50,51,200,205,232,240,184,232,108,221,167,221,178,61,71,92,246,194,12,156,112,94,123,36,195,131,51,6,160,174,96,74,177,199,205,25,137,49,178,14,211,220,208,227,110,255,63,89,87,218,37,55,142,28,1,16,100,
117,183,36,175,53,111,103,109,239,255,255,119,254,232,145,186,138,36,0,231,17,145,64,239,234,205,60,29,93,7,9,38,144,87,100,196,54,137,17,88,42,99,35,129,200,165,117,196,132,207,242,221,38,25,247,168,
209,114,29,191,80,232,164,188,80,237,20,240,156,223,193,19,96,94,249,216,67,194,16,108,192,217,250,219,182,203,212,208,48,164,79,217,186,130,218,162,17,100,30,96,153,5,177,211,99,159,23,122,227,20,209,
178,210,207,63,126,2,13,84,204,232,38,49,149,163,136,27,64,15,41,4,56,221,216,46,160,91,218,221,66,10,89,23,213,220,47,93,91,66,7,34,151,216,197,214,121,105,147,120,127,237,21,7,49,194,88,248,206,225,
106,215,186,99,90,248,136,210,152,174,125,186,234,28,179,206,172,203,5,96,56,98,177,54,185,190,183,133,51,9,162,71,115,230,189,5,113,23,107,151,60,85,220,189,119,232,147,215,200,170,189,176,63,121,43,
39,255,251,140,227,188,114,80,34,233,81,99,246,178,25,74,92,121,82,222,52,210,107,111,179,144,78,205,76,114,65,173,242,213,236,153,199,134,144,247,124,251,246,30,179,227,37,127,165,177,102,171,152,158,
205,16,230,168,56,76,6,185,17,234,101,90,5,242,218,183,61,163,26,217,92,187,125,204,84,211,120,47,218,150,136,189,38,252,159,131,210,197,144,33,7,216,126,11,40,142,117,97,190,191,63,210,255,178,169,143,
153,26,62,224,144,21,81,247,166,15,152,52,43,10,123,66,113,247,192,197,133,246,34,92,230,163,176,255,93,130,96,53,230,147,243,228,49,159,133,91,184,46,12,234,55,170,235,170,145,148,89,242,41,153,9,216,
14,218,65,242,10,153,105,128,32,126,68,231,131,220,71,81,51,53,156,69,9,228,52,117,208,19,64,206,132,126,109,152,113,215,228,167,238,179,224,30,172,104,132,110,69,181,193,107,170,186,46,21,234,92,213,
26,27,91,0,58,120,90,59,46,114,15,84,78,34,239,40,184,122,142,3,74,190,125,2,41,86,218,25,67,238,92,142,252,154,232,165,18,7,9,99,68,38,151,255,252,175,191,27,128,194,14,45,80,208,28,193,106,183,197,132,
170,126,196,75,60,29,195,3,195,67,20,55,106,245,104,247,167,24,113,205,83,131,8,211,15,161,60,5,50,22,96,254,74,84,255,111,180,174,34,94,66,166,199,247,233,67,213,138,188,22,201,31,114,82,126,151,29,244,
231,31,255,25,106,1,118,51,208,158,14,250,58,196,45,238,130,64,206,30,4,85,147,98,153,9,192,136,49,0,143,71,118,32,166,137,211,92,197,145,242,50,210,123,64,122,132,234,100,142,2,234,11,242,169,66,173,
43,207,41,59,184,32,62,96,237,209,19,213,98,195,79,172,20,164,188,144,236,79,213,218,66,194,85,187,238,22,39,71,9,29,116,146,117,77,66,170,208,50,36,5,32,75,45,136,167,25,143,185,246,57,244,103,128,222,
161,71,35,95,38,93,52,133,8,200,122,70,112,238,202,96,151,198,100,94,171,97,144,78,24,241,239,148,209,195,78,214,255,144,188,225,159,255,253,103,76,145,18,252,187,138,64,145,230,250,130,128,172,182,36,
201,81,228,149,14,31,41,142,25,114,112,19,233,38,172,118,66,212,69,58,174,33,30,80,223,143,41,182,27,202,163,13,126,223,30,36,107,89,221,79,86,77,114,118,195,240,201,205,124,255,150,254,71,62,252,93,78,
204,255,251,235,119,122,41,243,214,162,57,195,197,236,11,43,88,70,247,200,251,191,197,36,63,188,55,154,3,40,154,70,250,34,135,193,254,57,137,254,25,103,145,103,145,161,0,117,171,13,17,132,228,205,79,230,
101,70,157,69,112,189,150,186,253,219,252,185,247,222,75,20,124,35,91,94,24,214,42,39,20,65,230,191,109,115,114,207,36,75,210,29,181,59,61,29,38,249,195,148,10,212,100,234,56,14,140,230,34,129,218,230,
220,59,21,127,123,212,251,134,1,173,255,21,202,54,54,63,209,217,89,163,46,186,30,40,199,227,205,170,39,204,142,173,216,13,172,163,37,162,77,219,150,57,90,138,123,245,58,245,135,28,56,63,190,125,164,127,
252,249,135,185,219,57,181,216,156,119,10,64,112,210,133,235,245,234,97,101,152,87,142,253,98,230,42,68,161,18,216,67,82,54,35,125,40,217,154,83,110,109,33,121,193,236,184,33,102,209,90,164,94,192,235,
243,105,245,201,43,102,96,252,53,62,205,150,108,39,188,94,103,244,153,31,111,71,250,89,126,164,63,126,254,45,125,74,204,106,157,34,244,118,89,255,188,105,32,218,218,2,34,250,77,92,130,247,127,75,20,156,
89,108,14,156,38,145,49,108,157,237,179,115,161,66,1,234,70,84,210,247,251,159,63,99,120,190,64,175,48,70,23,138,115,113,218,14,133,232,81,3,57,147,185,209,117,142,4,201,211,192,172,80,40,77,64,185,139,
124,151,228,196,217,48,235,19,90,137,216,208,68,226,144,175,73,219,167,196,138,217,131,5,17,234,109,28,78,100,30,41,193,222,161,247,160,159,127,90,143,126,122,149,3,66,74,61,78,225,203,190,111,7,58,135,
107,56,117,110,80,47,133,151,218,65,250,101,149,19,249,190,215,233,136,48,125,159,106,185,107,183,238,251,199,135,11,182,214,205,12,141,27,90,59,93,106,96,161,215,62,38,0,218,168,112,234,164,103,41,101,
78,149,122,251,241,8,37,14,77,144,217,97,171,236,154,24,4,31,115,219,68,137,27,204,74,225,72,98,144,172,155,25,218,4,192,224,35,103,251,176,96,159,53,215,120,199,131,56,140,99,82,12,80,107,156,201,13,
247,130,6,205,29,39,68,65,75,50,197,192,19,201,217,29,128,241,22,1,179,189,174,143,160,26,97,128,109,215,10,185,225,79,189,86,141,63,109,154,110,247,17,225,199,110,11,201,236,242,166,88,192,227,155,25,
199,151,98,242,90,22,217,189,166,186,131,45,216,90,169,8,214,91,104,99,23,123,48,132,117,169,199,208,202,4,249,195,47,200,157,20,12,227,147,196,73,55,254,227,120,183,48,164,117,42,82,248,193,96,222,9,
6,222,48,224,165,239,53,226,49,203,154,223,237,243,158,24,11,217,2,83,74,102,51,111,77,62,142,135,207,82,139,97,177,125,25,234,94,121,159,92,73,10,176,193,179,210,60,225,135,132,95,110,196,30,98,252,237,
199,15,123,254,223,148,175,20,174,154,243,219,13,53,106,118,134,118,16,163,149,29,115,64,224,175,84,111,70,12,195,110,243,223,126,130,26,180,109,33,167,200,238,165,225,186,55,199,79,170,81,213,152,229,
240,22,88,2,149,243,156,177,222,66,31,113,43,83,142,227,6,217,148,30,186,118,30,2,149,163,15,105,164,233,2,249,58,47,1,232,205,211,37,239,233,151,60,248,247,183,71,148,90,232,126,67,244,19,238,251,188,
207,101,164,213,103,63,186,5,244,110,248,154,201,89,253,237,221,233,102,40,104,111,181,176,164,167,64,130,75,243,135,127,171,54,37,9,255,245,20,1,163,172,94,123,195,28,142,215,212,174,160,99,214,107,209,
46,18,193,171,57,229,53,131,20,23,186,69,89,71,141,212,226,110,20,185,55,184,84,239,104,120,60,118,142,51,88,110,229,47,40,161,32,123,183,205,128,106,192,230,73,98,198,70,183,174,208,229,162,238,106,84,
122,37,21,195,96,254,222,13,70,253,150,154,38,29,123,93,136,87,39,5,159,62,184,15,35,197,117,163,102,25,72,55,137,86,85,88,99,204,11,231,211,1,146,10,178,157,152,102,14,194,44,174,147,161,207,246,201,
225,233,155,248,138,228,136,7,96,199,70,175,140,123,40,125,161,130,160,228,60,116,215,117,89,13,242,117,94,246,224,30,168,71,50,30,178,204,53,244,155,119,160,181,65,185,140,192,79,91,140,118,186,229,17,
179,228,78,218,63,103,105,56,188,244,254,120,243,128,26,53,190,138,145,4,186,31,51,186,219,79,234,221,240,127,61,184,210,89,108,38,87,34,75,40,251,206,13,83,129,214,241,36,77,191,83,25,192,204,213,182,
52,105,154,147,3,6,44,73,113,108,190,207,173,195,141,123,109,206,239,255,77,94,151,75,10,188,167,157,66,48,34,59,201,15,119,115,123,225,8,110,183,216,236,138,216,182,89,153,203,0,192,246,128,122,40,38,
80,173,87,189,209,65,25,100,136,86,233,207,212,80,172,206,183,239,145,148,112,206,218,214,7,239,177,90,180,252,249,41,27,254,97,247,171,167,232,17,238,187,228,180,32,191,180,106,226,224,28,38,141,59,214,
115,7,49,196,27,244,110,50,230,107,210,221,231,252,253,208,215,249,90,41,58,168,129,102,167,19,115,106,215,63,66,222,217,104,191,21,36,142,120,221,158,53,199,3,250,181,146,9,108,145,136,88,241,26,58,58,
236,14,48,59,220,205,88,79,163,161,38,4,106,202,4,167,101,140,181,134,14,95,180,33,115,14,55,109,199,249,230,133,119,27,98,175,126,218,48,56,214,163,94,31,252,123,121,247,141,83,247,69,83,16,77,194,37,
158,89,107,100,172,155,181,146,131,159,146,72,160,157,210,207,96,156,85,131,213,184,120,183,50,150,143,35,176,108,83,43,7,174,146,45,250,133,241,80,94,7,103,164,15,212,74,9,3,59,66,252,211,19,33,253,217,
239,95,191,36,86,251,134,216,217,55,153,174,161,159,176,142,13,184,80,132,87,119,248,93,18,71,2,102,181,221,123,97,150,138,8,29,125,86,143,195,67,134,74,210,83,18,224,95,222,137,51,220,130,25,169,198,
61,94,93,208,247,156,64,34,177,138,18,64,106,76,29,132,248,60,202,75,12,119,244,32,176,94,56,64,60,23,112,163,28,113,105,109,202,103,123,1,127,15,174,37,221,4,106,83,219,64,82,139,80,64,195,173,124,169,
223,67,86,151,216,111,29,41,104,87,236,75,146,23,213,131,54,184,119,48,105,184,64,167,222,232,11,83,105,12,162,79,36,16,148,116,83,200,90,13,121,140,41,70,89,128,49,212,27,210,247,191,193,69,104,32,255,
174,82,41,117,202,3,211,184,244,53,54,47,12,172,158,186,62,63,9,220,93,250,6,56,231,16,86,201,49,246,105,109,64,100,175,14,22,64,248,193,150,97,207,145,165,178,44,164,177,145,141,251,34,203,126,123,219,
209,63,175,75,145,127,68,141,144,27,65,79,116,243,40,165,4,165,53,91,134,106,128,100,60,214,78,26,165,227,182,152,83,1,181,226,238,138,94,58,98,64,4,184,97,86,217,180,0,46,211,249,160,206,192,152,250,
123,158,193,197,89,121,173,72,220,198,150,98,38,93,175,179,228,242,69,43,61,161,10,66,193,79,130,62,172,3,99,9,140,199,241,90,117,49,254,35,13,77,196,99,104,140,91,112,191,43,139,26,59,91,36,76,72,117,
139,216,188,163,62,235,96,95,199,51,84,246,142,181,246,103,154,222,64,210,21,188,33,131,96,128,240,176,81,55,11,64,208,178,202,68,128,92,40,63,144,164,40,195,173,152,11,67,253,239,243,243,55,234,87,61,
84,28,56,251,210,251,36,251,247,69,239,65,122,69,182,135,199,227,8,55,25,162,229,10,52,254,216,131,153,129,24,198,3,8,236,212,83,204,31,219,181,25,149,136,3,69,42,231,204,243,236,171,111,112,41,134,116,
34,82,8,49,173,62,4,226,15,55,48,207,90,189,145,24,206,116,199,70,166,26,108,6,115,29,225,123,250,119,134,13,9,136,27,14,143,233,253,190,161,123,181,2,108,117,35,102,123,200,94,29,208,239,126,190,124,
22,198,155,31,221,244,142,200,20,82,144,221,83,235,134,21,126,82,231,104,24,179,31,37,230,172,83,30,81,87,116,44,164,39,77,122,141,22,18,149,20,30,144,136,120,174,239,195,18,200,22,252,148,128,222,13,
89,51,204,218,141,216,172,28,175,181,174,225,238,118,115,94,103,24,127,245,145,142,81,6,180,95,94,56,138,173,22,7,56,213,78,129,75,3,35,140,97,117,67,12,70,217,66,111,254,250,12,70,215,160,13,105,45,10,
190,108,222,235,247,232,13,48,104,79,1,0,110,94,12,7,139,153,79,192,121,38,234,201,202,102,167,144,101,242,72,100,10,88,24,20,76,66,48,131,55,249,189,75,242,161,217,102,158,210,197,36,183,215,221,236,
229,165,20,165,27,26,182,254,153,174,214,209,60,53,56,148,42,54,68,204,148,247,9,79,211,29,71,18,121,19,194,42,91,112,235,240,251,249,119,106,213,232,195,102,193,253,13,149,9,75,78,130,38,166,7,60,140,
227,9,250,139,241,175,101,241,232,193,251,137,76,126,163,137,169,212,159,189,107,25,103,63,220,125,91,29,56,7,12,141,113,40,171,22,86,101,176,166,128,63,95,91,123,208,63,219,218,83,127,200,19,145,0,132,
16,160,236,188,154,179,33,194,129,52,20,212,71,1,46,215,15,48,79,114,88,205,96,14,192,206,159,226,41,245,136,26,182,176,228,159,81,241,249,135,197,27,35,99,152,31,22,63,36,94,144,67,179,75,8,39,22,93,
138,92,71,11,44,213,14,81,79,141,41,14,200,47,19,65,19,167,32,42,251,44,61,61,64,53,172,31,17,77,127,184,89,253,28,51,6,78,252,169,94,15,8,169,210,66,247,183,45,93,12,139,155,56,139,188,87,48,18,111,137,
236,114,44,103,48,128,223,54,47,93,85,204,157,124,65,166,39,63,29,11,200,179,188,166,121,72,104,241,22,53,207,146,61,187,173,104,33,250,108,243,22,170,8,21,98,73,86,68,182,242,80,133,182,12,197,54,221,
216,204,253,139,225,190,129,240,84,241,170,90,210,217,40,233,130,36,129,110,79,239,83,55,25,215,235,192,232,115,137,13,186,135,216,20,103,238,167,92,128,207,197,172,184,87,85,249,96,166,207,141,69,148,
21,225,127,140,157,99,22,137,220,220,232,181,203,115,178,183,200,53,15,57,253,135,92,171,217,8,249,57,155,107,57,14,198,251,22,139,130,62,80,126,110,239,177,216,187,133,92,196,166,255,48,100,1,252,50,
229,9,136,237,13,243,44,237,30,146,141,14,53,82,253,129,30,177,156,151,49,183,15,162,171,219,74,49,18,0,143,14,157,154,28,68,2,35,77,150,9,215,231,25,17,164,107,29,48,229,234,64,214,209,227,212,13,180,
180,189,102,71,32,157,102,139,114,33,199,63,48,51,62,22,230,89,198,178,215,5,222,113,208,230,117,180,24,243,66,58,191,198,185,158,11,148,201,122,70,6,51,196,100,140,255,230,136,192,48,254,88,98,6,88,10,
113,130,208,49,231,218,45,177,26,255,2,128,158,80,56,47,168,95,86,204,183,66,114,25,64,209,28,80,255,189,109,19,55,20,190,13,13,213,231,112,221,62,142,104,243,177,49,97,30,20,161,137,26,252,221,238,16,
0,32,45,11,19,48,127,166,144,196,230,116,33,106,210,228,250,97,182,223,71,142,241,13,69,249,103,111,203,142,177,153,199,30,242,61,102,67,110,47,110,156,114,77,67,50,114,177,157,203,254,44,182,49,228,222,
140,252,103,14,17,106,88,85,54,121,195,38,111,245,153,82,61,5,229,75,187,236,164,46,187,89,140,82,162,67,249,37,31,34,207,169,200,102,108,25,180,123,89,140,32,227,194,242,150,151,108,123,171,81,92,86,
67,155,226,63,61,72,64,11,186,51,44,69,208,128,101,95,45,49,85,179,19,134,165,167,80,149,0,20,138,243,220,78,121,61,251,183,13,89,222,1,244,185,99,249,78,43,81,116,116,139,136,59,36,117,52,107,158,214,
30,172,5,68,176,23,122,207,227,11,167,228,11,198,30,154,130,229,107,27,116,68,119,199,19,15,74,7,55,204,74,107,7,141,46,78,255,221,232,75,106,5,65,152,3,93,13,68,189,116,178,6,224,114,20,78,162,54,38,
171,36,57,102,228,1,158,64,101,130,3,122,86,27,164,80,22,102,252,211,130,123,184,193,197,169,27,64,197,23,110,64,253,216,123,39,9,214,150,183,32,96,221,33,192,37,47,242,161,175,199,49,110,239,233,15,121,
221,232,98,46,178,2,6,72,149,107,235,226,145,212,174,228,4,221,197,202,244,63,49,103,241,180,122,162,202,51,26,178,78,118,210,86,181,228,214,44,178,149,117,108,93,222,208,206,215,217,223,62,222,187,4,
202,77,127,44,23,215,134,13,217,181,140,147,69,141,56,203,34,101,162,65,88,26,96,43,43,181,20,115,29,20,195,180,29,26,70,168,60,69,143,47,68,162,102,64,70,253,236,240,46,69,161,220,224,201,209,197,57,
81,207,42,232,22,221,183,119,19,108,119,119,50,202,246,208,174,73,33,24,218,35,99,205,80,138,184,49,74,192,147,145,167,43,117,118,198,152,163,163,122,130,145,135,145,138,8,206,42,230,198,205,211,153,189,
221,146,39,75,113,131,38,97,94,38,17,111,116,181,136,200,38,36,206,73,28,28,103,240,168,62,154,162,88,82,131,160,5,247,228,28,11,222,23,4,150,149,174,16,171,219,8,236,50,108,54,144,77,231,47,196,4,5,175,
45,161,18,102,243,220,16,150,178,231,186,123,9,79,253,15,177,145,122,250,216,168,244,86,66,234,80,127,118,182,59,166,55,228,187,134,157,145,98,49,242,185,77,174,167,169,253,201,59,155,132,1,250,187,156,
114,254,51,121,111,215,131,79,15,65,125,159,158,154,85,12,174,203,110,50,131,212,23,25,101,230,144,131,81,182,161,156,160,183,146,76,203,63,220,154,104,35,160,149,147,180,154,111,131,162,67,182,210,128,
18,22,25,34,100,155,243,221,148,55,70,176,126,45,220,142,132,116,177,197,118,157,179,43,164,6,102,11,107,69,242,35,218,99,154,40,133,18,43,226,212,8,250,241,235,216,103,215,101,32,17,112,81,191,49,31,
2,78,144,158,123,0,49,28,124,122,5,176,151,39,244,4,131,80,49,204,141,214,13,52,199,124,79,173,83,207,134,247,153,1,207,123,28,30,142,100,12,228,177,112,239,80,46,204,40,105,229,226,117,6,141,55,33,119,
21,93,31,61,201,52,11,103,59,150,67,105,238,166,253,187,40,74,106,201,72,229,9,205,225,173,102,147,5,4,212,22,48,54,147,158,145,228,170,22,195,230,20,216,3,54,10,56,143,85,192,221,169,207,92,13,84,203,
104,236,127,107,141,87,146,207,129,251,16,123,110,93,54,185,238,112,177,165,114,75,62,112,203,223,205,182,228,249,203,219,238,166,102,36,199,76,247,128,209,7,242,171,39,192,77,173,181,245,91,189,253,184,
197,122,117,115,92,217,116,31,155,6,146,5,3,93,125,147,0,80,253,183,156,52,121,96,136,95,251,205,154,144,84,212,180,70,238,144,56,217,109,214,183,30,123,44,178,238,91,74,92,24,28,46,239,32,207,100,91,
211,219,132,222,21,64,137,103,164,232,46,133,155,69,41,73,141,103,192,125,21,168,222,86,40,89,240,225,19,89,164,223,123,65,248,212,88,54,134,171,52,232,233,123,93,61,174,223,147,177,41,35,178,170,201,
134,112,18,234,117,189,143,104,189,81,170,153,108,183,20,134,119,8,215,25,177,225,64,72,17,20,129,48,124,79,166,38,5,51,51,92,11,19,113,130,51,142,245,164,112,50,242,38,142,218,230,169,108,70,100,119,
41,219,108,96,244,60,185,131,38,101,86,20,184,25,171,210,208,88,100,136,152,29,0,24,109,175,106,56,100,196,169,22,74,116,148,204,136,228,178,156,164,111,230,161,219,45,70,115,202,207,37,42,57,47,121,159,
14,134,221,247,243,190,197,235,220,242,121,77,15,70,53,202,91,189,181,92,96,147,197,149,63,183,75,46,84,12,177,92,90,112,151,139,124,73,44,186,203,177,106,242,203,250,166,34,254,66,222,179,13,237,152,
203,106,221,105,22,96,79,0,80,181,166,21,93,31,80,234,17,66,181,158,36,95,221,209,8,54,133,140,33,246,215,235,140,147,41,136,1,48,18,122,131,7,177,229,27,131,101,22,207,216,123,56,182,97,6,9,4,143,205,
156,107,61,236,200,225,86,213,192,245,26,140,93,120,33,56,93,69,50,167,54,225,136,250,170,205,99,163,119,239,175,27,95,53,186,215,153,162,160,156,65,161,25,8,114,158,204,231,217,98,212,132,121,241,1,16,
5,193,11,51,203,47,65,197,162,247,254,178,74,65,13,178,169,152,30,108,72,50,203,36,163,117,4,127,137,58,111,221,166,66,28,67,39,242,252,164,16,82,245,34,56,89,47,56,149,73,176,74,197,134,55,132,21,58,
73,5,220,65,136,129,37,86,220,52,15,209,211,80,110,253,190,228,90,158,178,14,47,89,181,151,188,238,20,219,80,227,188,158,207,167,218,156,66,204,155,60,183,38,137,78,214,172,64,66,144,251,242,217,175,215,
75,12,238,41,31,182,203,135,109,152,119,233,114,131,251,40,178,132,114,82,202,241,107,79,77,190,55,251,206,0,25,19,185,197,209,66,108,16,239,97,207,55,24,108,131,43,103,44,140,102,41,72,71,43,21,96,19,
198,26,144,16,53,155,188,212,248,73,220,115,173,49,158,25,167,90,196,84,3,200,161,35,104,157,183,62,193,180,36,23,115,190,196,17,164,79,83,116,115,64,14,210,156,115,100,221,9,120,69,115,103,247,21,211,
156,122,255,54,191,4,74,61,211,46,100,172,92,182,120,176,83,90,216,67,19,53,64,91,155,209,34,163,215,78,140,147,64,29,225,166,11,186,65,21,144,56,111,63,58,239,15,217,137,137,88,167,248,170,205,60,237,
251,212,102,12,189,73,121,143,25,236,249,133,148,149,250,140,84,147,32,196,206,18,49,171,138,156,161,190,145,23,53,94,199,165,214,47,4,20,154,115,88,205,189,228,161,167,157,26,156,120,156,75,254,245,37,
23,247,41,247,254,20,131,124,202,250,189,196,94,78,9,185,46,245,233,143,227,184,101,179,181,42,199,176,158,144,167,60,184,151,90,178,68,74,159,242,153,53,16,163,242,124,229,36,149,53,54,63,91,187,150,
147,228,103,234,241,157,234,46,7,99,66,8,245,104,134,136,216,203,51,68,23,57,106,221,113,116,148,233,224,162,20,232,246,201,62,176,130,42,185,116,6,6,222,217,26,172,112,207,94,14,114,55,230,173,41,119,
31,1,127,178,246,90,137,100,132,153,110,182,158,235,25,3,99,156,69,206,32,72,141,201,65,219,233,57,88,224,56,168,230,113,177,95,191,143,13,204,241,14,9,161,96,128,19,27,185,138,142,198,232,236,182,140,
101,132,81,120,118,188,161,84,213,17,55,146,20,118,196,102,216,0,23,113,61,109,139,69,137,154,71,113,62,164,50,237,115,243,36,69,0,245,51,239,157,51,63,173,251,51,58,0,28,201,16,170,103,181,225,130,220,
139,133,228,121,76,174,208,156,162,195,197,92,226,2,117,34,100,112,180,12,36,183,217,53,228,187,135,194,130,210,120,201,245,60,37,68,251,37,63,248,45,159,241,41,207,231,41,235,245,146,223,37,18,184,47,
13,29,197,88,235,41,31,252,146,255,159,18,81,170,176,226,174,49,164,159,30,89,189,209,37,11,37,174,252,174,199,81,170,184,149,162,49,165,92,80,14,176,3,112,112,118,90,38,128,109,25,231,164,201,86,166,
23,173,65,63,71,50,9,101,243,238,199,22,181,53,45,73,24,204,10,137,6,91,151,186,218,219,130,38,201,192,92,122,10,58,105,230,52,142,165,130,3,13,107,198,119,147,21,99,148,142,73,193,43,74,80,124,176,35,
78,47,234,193,176,55,91,22,34,42,15,57,46,112,2,141,148,98,64,203,153,109,83,8,47,49,243,87,210,48,43,144,143,137,1,232,203,122,140,101,42,113,198,138,83,107,231,52,151,121,4,150,96,44,160,235,156,167,
166,142,157,218,40,124,147,103,62,36,249,88,51,6,223,185,158,244,142,128,58,98,35,223,80,82,227,233,31,137,221,162,229,216,99,10,115,4,123,8,203,79,150,125,107,221,71,203,137,182,131,134,22,192,79,185,
150,167,26,164,124,199,47,185,164,223,242,61,159,242,222,167,188,76,14,197,114,138,221,93,26,252,188,228,6,213,90,15,49,46,9,55,182,98,13,124,253,139,120,106,181,98,121,24,114,77,6,194,19,27,54,148,68,
150,192,61,147,144,126,32,251,36,61,48,165,41,200,132,230,33,83,9,218,184,187,55,184,123,49,225,171,69,127,249,124,221,1,161,103,156,212,71,154,39,64,34,254,239,142,94,44,213,202,232,206,78,112,152,179,
14,231,70,237,181,210,215,57,32,23,93,236,225,238,10,209,194,252,209,224,247,164,169,246,96,177,40,79,214,52,209,44,23,78,6,130,84,72,84,79,89,67,111,149,165,69,72,126,62,204,135,33,106,238,101,252,183,
4,125,141,141,81,92,119,112,6,48,134,108,65,193,237,165,173,68,240,4,106,195,193,18,66,213,47,110,194,66,192,67,70,40,50,215,169,96,0,205,71,116,199,23,25,105,11,89,168,193,131,177,87,230,9,230,145,116,
179,167,30,188,240,115,70,202,115,8,93,179,7,234,142,178,166,122,58,52,173,228,200,119,92,178,17,94,98,75,159,114,47,191,107,217,254,146,235,248,45,235,252,41,159,165,113,139,28,142,253,82,60,229,75,44,
111,215,201,20,249,149,141,211,177,28,93,140,238,58,246,111,47,57,178,101,43,141,93,109,180,104,77,84,123,73,217,69,35,130,65,44,101,44,152,39,23,84,76,14,121,99,176,104,176,53,152,66,218,152,89,117,131,
155,129,122,195,117,67,51,187,187,210,24,88,49,200,2,203,121,18,246,92,181,213,183,10,190,207,46,85,14,163,102,140,116,93,87,24,50,217,106,203,216,98,96,127,33,179,13,134,224,11,88,76,69,79,19,226,239,
8,111,60,204,62,64,216,213,35,166,180,248,22,108,200,44,178,27,143,231,205,161,181,228,58,217,169,198,245,148,238,37,36,67,36,133,240,232,12,117,232,206,9,6,49,133,47,234,14,113,38,28,132,253,106,43,10,
142,10,173,30,100,241,26,11,239,149,35,194,45,186,79,99,76,228,80,204,34,33,233,180,18,87,94,165,84,70,116,95,188,135,223,66,105,130,243,78,90,36,215,166,140,71,68,221,146,29,185,39,245,233,167,172,167,
230,44,18,38,246,223,242,255,95,250,187,220,211,83,126,174,238,253,172,146,201,106,176,185,105,182,115,88,243,126,31,90,71,146,184,224,20,23,249,20,99,147,205,181,239,155,246,33,181,52,164,78,175,123,
225,60,81,118,98,247,4,163,67,129,138,116,114,132,178,221,88,128,11,1,250,240,44,3,238,213,79,19,219,125,121,132,104,252,13,116,54,187,39,126,26,151,80,163,157,237,185,4,69,221,22,237,58,46,24,199,75,
227,231,120,143,62,80,253,92,139,189,242,100,48,230,240,86,180,207,224,5,30,40,125,56,109,160,65,5,172,148,68,5,214,219,48,153,215,100,97,195,92,55,9,29,198,194,0,66,166,11,106,208,176,124,99,244,202,
252,183,80,86,216,166,177,64,107,166,129,237,247,188,238,64,180,51,177,244,201,1,100,234,73,75,108,41,8,166,168,52,172,155,234,83,194,163,143,247,143,168,95,114,76,227,162,66,113,154,179,80,13,133,250,
178,231,160,239,219,40,127,87,83,192,8,237,94,143,199,50,67,229,125,112,89,71,147,252,213,186,144,184,224,75,174,225,146,85,146,216,38,61,229,216,252,148,151,255,150,231,253,75,236,227,83,44,75,178,242,
126,254,191,0,3,0,129,187,18,147,196,64,201,156,0,0,0,0,73,69,78,68,174,66,96,130,0,0};

const char* PadField::pad_off_png = (const char*) resource_PadField_pad_off_png;
const int PadField::pad_off_pngSize = 37097;

// JUCER_RESOURCE: pad_light_png, 44388, "../../buttons/pad_light.png"
static const unsigned char resource_PadField_pad_light_png[] = { 137,80,78,71,13,10,26,10,0,0,0,13,73,72,68,82,0,0,0,165,0,0,0,165,8,6,0,0,0,61,43,61,218,0,0,0,25,116,69,88,116,83,111,102,116,119,97,114,
101,0,65,100,111,98,101,32,73,109,97,103,101,82,101,97,100,121,113,201,101,60,0,0,3,102,105,84,88,116,88,77,76,58,99,111,109,46,97,100,111,98,101,46,120,109,112,0,0,0,0,0,60,63,120,112,97,99,107,101,116,
32,98,101,103,105,110,61,34,239,187,191,34,32,105,100,61,34,87,53,77,48,77,112,67,101,104,105,72,122,114,101,83,122,78,84,99,122,107,99,57,100,34,63,62,32,60,120,58,120,109,112,109,101,116,97,32,120,109,
108,110,115,58,120,61,34,97,100,111,98,101,58,110,115,58,109,101,116,97,47,34,32,120,58,120,109,112,116,107,61,34,65,100,111,98,101,32,88,77,80,32,67,111,114,101,32,53,46,48,45,99,48,54,48,32,54,49,46,
49,51,52,55,55,55,44,32,50,48,49,48,47,48,50,47,49,50,45,49,55,58,51,50,58,48,48,32,32,32,32,32,32,32,32,34,62,32,60,114,100,102,58,82,68,70,32,120,109,108,110,115,58,114,100,102,61,34,104,116,116,112,
58,47,47,119,119,119,46,119,51,46,111,114,103,47,49,57,57,57,47,48,50,47,50,50,45,114,100,102,45,115,121,110,116,97,120,45,110,115,35,34,62,32,60,114,100,102,58,68,101,115,99,114,105,112,116,105,111,110,
32,114,100,102,58,97,98,111,117,116,61,34,34,32,120,109,108,110,115,58,120,109,112,77,77,61,34,104,116,116,112,58,47,47,110,115,46,97,100,111,98,101,46,99,111,109,47,120,97,112,47,49,46,48,47,109,109,
47,34,32,120,109,108,110,115,58,115,116,82,101,102,61,34,104,116,116,112,58,47,47,110,115,46,97,100,111,98,101,46,99,111,109,47,120,97,112,47,49,46,48,47,115,84,121,112,101,47,82,101,115,111,117,114,99,
101,82,101,102,35,34,32,120,109,108,110,115,58,120,109,112,61,34,104,116,116,112,58,47,47,110,115,46,97,100,111,98,101,46,99,111,109,47,120,97,112,47,49,46,48,47,34,32,120,109,112,77,77,58,79,114,105,
103,105,110,97,108,68,111,99,117,109,101,110,116,73,68,61,34,120,109,112,46,100,105,100,58,48,49,56,48,49,49,55,52,48,55,50,48,54,56,49,49,56,48,49,56,68,65,68,69,55,65,56,69,69,51,67,49,34,32,120,109,
112,77,77,58,68,111,99,117,109,101,110,116,73,68,61,34,120,109,112,46,100,105,100,58,56,66,55,68,67,49,52,56,65,52,51,54,49,49,69,50,57,57,54,67,56,53,51,57,52,55,69,57,67,65,52,52,34,32,120,109,112,77,
77,58,73,110,115,116,97,110,99,101,73,68,61,34,120,109,112,46,105,105,100,58,56,66,55,68,67,49,52,55,65,52,51,54,49,49,69,50,57,57,54,67,56,53,51,57,52,55,69,57,67,65,52,52,34,32,120,109,112,58,67,114,
101,97,116,111,114,84,111,111,108,61,34,65,100,111,98,101,32,80,104,111,116,111,115,104,111,112,32,67,83,53,32,77,97,99,105,110,116,111,115,104,34,62,32,60,120,109,112,77,77,58,68,101,114,105,118,101,
100,70,114,111,109,32,115,116,82,101,102,58,105,110,115,116,97,110,99,101,73,68,61,34,120,109,112,46,105,105,100,58,48,49,56,48,49,49,55,52,48,55,50,48,54,56,49,49,56,48,49,56,68,65,68,69,55,65,56,69,
69,51,67,49,34,32,115,116,82,101,102,58,100,111,99,117,109,101,110,116,73,68,61,34,120,109,112,46,100,105,100,58,48,49,56,48,49,49,55,52,48,55,50,48,54,56,49,49,56,48,49,56,68,65,68,69,55,65,56,69,69,
51,67,49,34,47,62,32,60,47,114,100,102,58,68,101,115,99,114,105,112,116,105,111,110,62,32,60,47,114,100,102,58,82,68,70,62,32,60,47,120,58,120,109,112,109,101,116,97,62,32,60,63,120,112,97,99,107,101,
116,32,101,110,100,61,34,114,34,63,62,51,110,170,102,0,0,169,148,73,68,65,84,120,218,132,189,201,178,36,57,146,45,6,192,6,247,123,35,34,135,174,110,146,34,228,146,91,254,42,55,220,188,111,227,130,11,82,
132,66,225,235,170,204,202,140,136,235,110,3,64,156,65,225,94,254,34,133,37,157,29,17,247,250,96,6,83,40,84,143,30,61,154,91,107,233,127,251,47,255,235,255,114,236,199,117,94,230,75,171,245,114,28,231,
101,154,166,181,76,101,73,41,205,57,231,233,60,206,146,75,41,231,121,244,127,150,220,90,77,181,214,60,149,41,245,247,165,109,219,210,60,77,41,229,156,206,243,76,19,254,142,255,181,212,95,119,166,220,95,
215,63,59,29,253,119,248,97,238,255,191,244,159,245,151,247,223,21,190,7,255,40,253,191,254,22,254,126,223,246,180,92,214,132,107,60,142,163,255,58,243,191,254,3,254,108,90,22,254,217,14,124,95,73,59,
190,183,127,102,255,144,212,250,223,241,187,203,245,146,182,251,222,191,43,167,218,63,120,234,223,85,251,181,231,166,203,235,183,146,246,254,217,253,214,210,218,63,15,127,199,251,112,45,149,159,87,248,
58,92,247,210,127,143,239,223,247,254,121,253,254,166,254,247,173,255,125,242,125,44,235,202,247,99,29,250,122,166,214,127,134,235,194,23,247,181,74,211,60,235,239,73,255,198,231,225,79,220,15,214,231,
236,239,197,90,225,231,7,239,235,224,26,205,248,140,126,29,88,131,228,107,227,159,188,129,172,123,194,231,247,63,203,172,103,129,127,175,253,239,251,217,191,13,235,31,107,151,181,54,184,126,174,97,127,
15,62,169,122,253,245,145,153,15,160,47,19,175,159,107,28,239,235,175,159,250,243,62,250,154,38,222,223,212,223,91,245,86,188,6,175,173,181,205,253,187,251,223,251,95,107,235,223,85,251,251,106,191,191,
179,255,243,184,190,93,247,219,237,182,245,117,187,247,31,220,251,219,238,253,165,183,254,158,123,95,183,251,140,139,232,111,124,91,214,229,173,95,221,219,217,218,117,93,151,107,127,241,165,27,202,218,
95,188,244,15,236,175,107,165,127,67,127,132,169,127,250,153,167,185,47,214,60,103,44,254,118,191,243,38,227,193,77,97,156,88,84,92,116,191,208,185,224,1,246,127,243,218,177,16,141,55,133,197,227,130,
218,8,114,127,255,217,95,7,195,133,177,195,144,97,176,203,172,191,247,155,162,33,193,144,185,144,126,216,184,134,203,245,106,35,153,249,29,176,167,173,27,54,94,223,55,19,127,118,226,9,244,235,41,54,206,
86,181,65,240,179,99,223,31,27,195,15,8,139,60,207,19,141,162,217,16,248,128,251,159,216,94,151,117,209,103,246,159,245,53,31,27,70,134,83,105,59,141,27,49,243,218,39,108,152,254,186,190,195,121,253,248,
25,141,215,235,129,141,134,123,192,67,205,203,218,95,115,60,140,198,159,93,250,245,212,126,95,211,229,194,207,198,186,99,61,142,190,22,25,206,161,175,219,126,223,244,243,126,29,179,55,91,108,58,110,102,
175,59,54,107,235,23,144,39,109,10,108,172,179,158,220,60,52,184,170,181,130,171,200,243,194,117,132,17,78,126,174,252,12,27,46,158,19,141,49,151,118,242,187,75,131,49,210,196,206,179,118,91,232,30,173,
238,31,31,31,91,127,255,189,127,232,173,127,255,210,159,193,132,45,131,123,188,94,47,109,246,202,191,245,7,241,126,182,250,169,91,239,123,191,144,183,254,97,215,254,229,151,126,83,75,55,188,165,223,232,
4,131,156,231,181,220,183,123,238,55,149,143,126,193,75,95,128,19,187,189,127,3,140,0,55,219,87,40,29,155,30,48,12,108,234,15,14,255,230,78,14,175,152,180,115,177,24,137,59,45,123,151,223,251,141,45,50,
22,44,20,30,16,22,177,191,166,111,152,212,55,76,95,216,19,239,214,3,182,23,155,150,149,215,65,83,194,195,134,139,159,22,62,108,62,200,44,111,146,236,133,241,74,44,110,42,211,240,66,88,104,120,134,41,195,
235,226,223,51,109,11,247,137,235,208,3,171,50,232,170,7,115,214,38,207,222,191,3,30,148,94,14,30,173,255,15,127,191,119,35,193,119,195,80,142,189,123,176,86,100,8,253,193,235,239,137,247,170,13,129,155,
169,220,60,120,224,125,209,184,38,188,8,27,30,30,28,214,2,134,117,224,179,83,226,117,226,116,224,191,113,63,77,30,108,199,230,238,71,194,148,23,94,51,254,205,83,203,155,6,223,139,191,98,115,206,253,125,
213,63,59,121,66,93,228,100,102,61,223,204,215,237,242,246,45,209,56,241,63,92,95,172,235,236,211,17,167,104,255,252,134,3,181,255,133,6,217,55,118,63,108,79,220,228,14,143,216,159,223,173,255,126,237,
246,50,239,237,204,92,219,125,111,125,67,214,217,91,255,173,123,148,79,125,81,62,117,235,251,124,187,125,188,191,189,189,191,245,223,92,251,231,173,235,229,178,244,93,52,23,124,107,134,243,155,114,120,
75,25,8,158,109,230,13,242,161,229,216,101,39,119,53,23,148,199,244,68,15,136,5,58,120,4,174,218,253,56,206,176,211,142,202,69,197,223,97,110,88,100,44,56,118,61,140,5,239,187,195,43,227,8,233,63,87,40,
240,116,220,120,183,230,126,131,5,70,130,35,191,201,120,232,177,125,4,225,243,97,120,48,154,198,141,179,143,163,25,155,104,135,119,224,245,239,252,25,30,68,233,15,9,70,129,123,105,246,166,48,66,252,14,
27,4,15,150,22,134,215,79,133,199,247,209,170,175,181,27,68,191,151,133,215,124,240,250,186,95,208,245,226,184,199,233,224,53,130,215,169,222,164,109,82,200,195,144,96,149,215,196,207,113,253,10,42,18,
175,19,6,82,242,236,163,243,76,176,197,194,77,49,167,248,31,12,37,235,225,105,19,245,207,65,104,131,13,52,251,20,210,233,182,247,141,191,242,59,22,60,110,223,171,60,191,78,54,174,119,191,47,26,172,215,
115,161,177,54,110,66,110,238,121,110,253,125,56,190,187,135,204,125,239,54,88,241,222,157,74,247,59,219,109,94,23,196,101,115,255,126,249,145,253,128,87,133,225,30,179,143,168,107,255,193,123,95,144,
207,125,113,63,119,79,245,121,223,183,247,254,224,223,112,237,221,184,150,254,161,115,63,50,250,6,93,186,195,43,56,182,115,225,113,162,93,11,195,193,77,98,65,97,140,184,104,238,120,31,183,48,216,194,227,
90,71,224,194,7,163,155,99,204,230,184,142,139,192,152,108,31,198,54,227,136,132,177,195,152,188,128,48,136,149,159,145,210,237,227,230,35,36,241,51,184,120,52,60,250,118,133,9,54,200,190,193,184,176,
120,128,27,188,163,191,159,241,35,62,175,255,91,103,2,62,167,208,104,142,97,124,122,152,120,63,246,231,130,13,231,7,93,63,62,24,195,157,48,196,90,184,38,167,99,82,26,25,54,162,13,247,232,27,171,217,179,
48,174,76,50,162,126,52,248,56,156,124,250,200,19,77,240,170,103,156,70,250,254,113,77,147,54,125,196,168,167,61,233,193,205,168,123,103,72,210,55,123,241,181,143,53,238,6,148,124,114,69,120,144,28,99,
34,44,58,241,60,240,121,140,255,115,82,208,226,179,6,198,15,199,226,103,214,237,165,223,207,220,143,223,107,186,223,110,248,25,30,124,155,224,33,123,92,131,160,165,255,172,251,176,243,222,127,246,209,
127,184,244,239,45,120,79,183,185,214,215,162,47,203,125,239,247,180,211,40,251,241,114,237,139,246,214,47,236,189,123,179,207,61,123,249,220,119,246,167,126,141,253,223,249,138,164,7,239,195,118,108,
120,82,116,104,5,219,64,23,218,20,255,225,1,198,98,226,102,144,164,224,102,153,164,192,91,192,208,188,136,17,187,69,130,163,5,149,177,224,214,113,115,31,253,230,138,119,31,127,239,248,17,11,138,149,186,
245,141,0,131,103,140,228,224,93,79,18,201,133,60,103,131,119,177,145,51,1,129,33,194,120,156,172,208,192,20,148,43,166,133,39,137,35,18,27,2,113,91,220,151,175,23,33,4,141,164,233,225,246,32,137,223,
201,36,9,155,188,191,241,236,134,135,239,217,251,159,50,116,125,55,54,5,13,166,200,11,49,238,75,74,246,198,41,226,68,145,199,32,61,17,35,210,225,161,171,127,143,255,112,114,204,246,88,205,94,176,57,150,
101,204,124,214,17,82,156,177,230,120,110,225,241,28,95,195,248,143,72,210,188,153,178,242,141,145,120,242,239,12,171,202,99,131,122,221,17,62,241,94,240,252,144,51,52,158,119,181,127,102,165,207,169,
245,232,159,189,245,31,220,250,186,204,48,72,158,6,12,188,17,33,181,173,159,24,91,191,150,145,232,92,250,69,12,195,236,15,232,83,127,193,231,254,213,159,250,239,174,253,198,47,253,198,150,254,32,102,100,
225,248,31,142,112,102,200,253,70,118,6,215,58,10,35,14,131,129,33,249,152,188,147,16,93,92,236,165,240,0,55,103,211,48,193,226,135,131,5,58,189,88,167,143,230,88,32,101,138,211,56,126,177,136,72,64,104,
196,60,194,250,130,192,75,55,121,49,37,37,153,30,185,217,227,192,67,49,6,114,102,158,25,167,41,182,229,198,193,195,65,40,129,239,195,107,96,56,70,12,226,1,202,83,34,232,159,149,60,49,115,46,35,147,197,
58,224,222,224,197,249,192,125,20,226,201,32,17,227,103,245,152,57,217,219,207,120,239,236,235,175,250,124,126,103,191,15,28,247,85,193,141,66,31,94,83,97,72,84,16,214,120,163,181,164,24,18,107,62,59,
76,97,226,213,189,87,129,39,142,107,172,76,167,121,223,88,3,132,4,72,186,144,233,199,41,196,100,197,33,1,150,144,27,86,32,138,66,153,101,26,72,66,172,25,174,227,64,66,229,205,141,176,142,169,119,255,198,
34,195,60,224,1,247,109,191,3,209,233,246,84,224,116,250,117,213,126,165,251,189,31,179,115,89,110,253,243,215,254,217,10,58,122,204,131,21,68,182,125,69,6,222,63,255,189,191,248,83,191,209,79,253,226,
222,250,241,127,217,143,189,159,86,211,204,248,190,103,221,39,98,1,228,41,56,158,178,92,59,143,0,27,33,97,31,39,50,5,153,30,142,20,6,59,138,77,114,196,83,14,148,3,214,136,68,8,63,199,207,112,164,110,221,
19,233,40,111,70,68,20,144,51,171,238,11,194,215,27,30,234,25,10,13,157,33,4,226,202,254,158,210,119,113,130,103,132,167,136,80,193,222,21,158,100,59,228,213,26,227,208,211,137,201,194,99,8,94,152,49,
22,189,101,227,131,132,215,109,78,124,120,4,226,129,56,27,61,227,40,142,13,198,147,72,155,236,238,235,164,239,137,163,28,6,193,117,41,252,57,98,221,126,22,113,195,17,60,59,148,9,159,85,215,140,152,143,
167,83,169,90,111,198,125,240,210,59,55,61,174,7,247,129,120,178,118,195,45,248,170,132,181,70,232,178,242,123,17,220,173,78,218,154,98,29,110,154,218,223,123,121,123,211,61,37,197,198,167,97,32,157,236,
130,124,152,132,157,74,54,227,164,225,45,227,243,50,158,127,107,8,34,231,9,199,247,220,29,116,238,183,217,246,126,154,46,180,8,61,243,138,159,247,63,238,221,223,221,250,245,173,19,50,83,220,186,146,213,
218,99,218,9,255,173,253,34,144,113,95,251,215,194,67,190,117,207,243,214,183,22,142,112,100,2,221,237,30,125,221,114,183,51,101,76,149,187,179,123,62,100,150,253,198,145,31,225,161,227,231,136,243,146,
50,49,237,53,195,68,17,199,241,199,196,241,170,142,117,239,88,122,23,31,11,123,55,140,192,207,224,161,24,159,193,83,120,129,38,199,95,252,92,36,67,216,4,139,188,53,189,24,195,138,125,28,121,132,151,86,
120,108,25,66,225,253,107,51,53,102,155,11,119,126,130,225,194,136,141,145,210,224,125,196,243,104,133,39,2,108,130,207,63,125,196,5,76,85,116,79,64,7,24,99,27,74,42,145,61,27,218,97,182,138,88,184,27,
79,187,223,100,124,88,146,44,216,168,37,31,133,221,178,112,47,21,225,143,143,85,108,30,26,131,61,32,255,110,248,140,225,12,140,99,82,108,93,157,200,25,217,164,193,51,97,4,210,80,116,170,48,214,116,188,
155,137,61,42,150,76,78,172,112,109,220,176,211,52,28,201,25,152,106,228,3,142,59,25,207,79,133,239,34,54,137,36,135,111,63,10,214,180,219,205,217,99,239,158,116,183,123,255,156,21,41,6,236,171,95,7,49,
113,29,223,173,246,216,190,47,111,223,198,253,166,96,124,72,213,47,253,75,46,83,43,87,156,60,125,113,215,254,137,243,178,46,83,127,104,62,190,25,19,112,241,233,77,202,161,11,196,162,206,194,189,90,141,
236,183,16,199,43,142,173,102,187,255,115,219,31,80,135,131,232,136,195,120,140,219,243,196,123,16,207,204,140,187,144,181,246,227,7,49,229,153,249,240,100,187,253,115,186,17,2,52,198,235,112,36,2,98,
218,108,28,244,196,213,144,20,227,219,99,24,11,174,145,176,211,101,165,87,95,223,223,211,253,251,119,26,249,212,242,184,23,132,37,120,24,139,227,72,69,79,149,71,58,254,100,136,96,143,194,147,194,123,242,
116,252,136,207,56,156,85,99,131,28,12,127,86,110,10,2,232,136,209,34,166,195,125,206,206,206,13,137,221,110,247,228,143,52,220,37,28,182,6,204,198,211,230,32,146,128,99,159,70,132,159,59,12,57,35,118,
110,218,76,205,88,38,141,211,97,21,23,211,134,10,47,75,231,236,108,60,188,103,113,216,130,107,193,251,25,183,207,204,42,241,188,26,34,190,110,43,231,186,44,4,137,85,192,232,238,224,60,247,126,205,247,
110,184,75,119,163,52,200,3,232,78,191,88,68,134,52,202,238,29,0,140,195,216,250,103,47,136,27,97,177,112,165,48,208,158,110,79,107,45,21,169,46,190,18,113,106,233,241,65,24,101,198,34,97,177,194,224,
118,123,163,22,241,33,76,192,241,210,228,27,11,108,139,198,202,44,110,226,141,19,127,52,6,135,155,189,96,65,153,56,29,74,106,12,134,148,166,12,49,226,68,248,152,115,235,15,185,199,42,76,186,157,137,99,
211,208,243,77,138,15,233,17,224,33,102,125,71,132,16,1,140,51,179,183,55,59,227,200,55,20,34,79,175,88,23,15,114,115,22,207,124,85,255,39,143,237,108,126,233,70,141,132,231,52,226,208,12,157,68,66,64,
152,167,111,144,201,113,100,84,72,104,152,88,124,196,224,246,84,138,125,229,149,25,106,24,154,98,156,200,98,194,196,167,193,36,189,57,6,157,26,33,177,92,236,37,51,183,172,67,10,37,219,124,70,69,134,54,
194,39,199,138,12,197,232,209,149,8,157,113,108,23,163,42,97,224,217,24,169,18,199,230,181,108,219,182,213,30,71,119,19,220,139,160,194,140,95,46,56,191,250,30,159,113,144,247,117,154,97,123,48,89,36,
209,64,144,140,83,246,117,175,44,206,77,253,69,125,93,202,220,189,26,48,16,100,73,51,220,42,48,165,254,32,251,223,43,75,142,221,8,241,13,57,142,97,252,101,51,76,129,100,167,241,3,51,61,66,139,160,218,
15,186,69,242,35,240,146,175,223,158,224,133,117,94,21,159,224,232,228,33,224,69,198,145,145,132,27,50,27,134,231,130,17,142,4,164,170,82,97,184,229,180,113,1,111,195,130,2,107,36,66,128,141,115,223,70,
214,201,197,164,1,22,156,157,61,182,186,51,155,44,14,41,218,136,147,147,113,59,29,223,153,89,110,101,226,194,202,83,15,53,96,72,153,97,75,19,244,67,175,164,82,99,84,82,218,83,82,193,112,0,25,126,82,188,
140,228,68,199,111,26,101,197,30,161,241,68,168,70,14,128,40,96,147,53,255,251,112,214,143,245,88,174,151,129,39,42,9,114,18,69,175,126,242,68,219,43,54,142,146,76,122,202,93,133,3,220,127,84,208,166,
64,49,226,148,138,42,22,140,203,27,12,27,59,78,185,28,229,97,56,130,238,37,1,9,245,255,122,152,186,101,39,2,120,98,51,242,18,84,8,145,67,109,123,207,127,250,23,195,16,251,107,112,250,178,224,23,232,106,
15,0,144,40,21,24,103,191,222,254,24,102,6,5,248,127,83,191,128,9,103,125,223,213,83,55,196,254,177,83,233,59,54,35,64,192,145,220,255,157,25,111,24,20,103,205,25,73,128,161,132,201,49,98,196,141,88,220,
128,55,162,150,187,186,100,118,250,161,33,22,60,62,110,92,88,222,112,83,245,101,194,195,182,145,43,227,62,149,45,187,6,221,8,161,201,56,25,226,35,193,50,8,93,34,180,8,124,48,192,230,110,132,137,181,231,
157,241,93,85,253,83,137,18,189,195,1,167,35,207,1,3,102,252,106,215,136,77,133,205,135,35,176,39,9,188,55,2,226,51,189,201,25,198,17,73,130,13,27,137,9,170,40,40,171,226,20,168,40,139,102,29,131,197,
80,82,212,223,223,250,231,70,125,94,70,13,66,66,247,104,202,168,88,49,195,97,143,181,199,102,227,6,197,186,207,19,79,40,38,81,142,97,15,123,255,243,9,213,64,140,78,35,70,85,236,68,73,88,71,249,137,164,
137,240,220,133,225,12,55,176,215,255,218,159,215,238,245,140,154,119,70,54,211,191,127,190,172,109,251,184,53,24,136,107,231,216,89,48,190,169,194,142,142,131,60,138,153,101,164,86,116,180,131,87,113,
162,252,35,163,196,199,246,135,156,187,81,228,30,128,102,148,41,129,28,119,235,203,4,228,251,39,31,248,32,134,21,51,222,92,20,148,21,68,162,140,100,0,12,70,204,22,89,44,189,72,4,202,99,167,233,248,43,
246,60,132,53,12,155,164,200,90,119,39,38,79,192,242,193,192,62,35,92,161,161,237,10,166,153,171,193,179,49,192,198,85,160,156,185,170,76,137,144,224,56,55,102,149,203,219,85,165,79,239,114,149,206,84,
111,78,48,4,19,37,120,100,224,122,240,64,80,181,128,241,247,207,63,92,239,61,93,177,104,145,137,247,208,229,126,251,96,134,207,132,2,80,7,222,11,111,215,31,16,147,65,27,120,243,177,171,4,99,225,125,226,
56,60,120,47,58,53,34,220,168,62,125,176,6,119,39,31,65,86,41,1,71,161,156,139,216,185,191,242,190,219,243,99,51,236,78,38,107,51,57,69,71,180,113,29,29,217,202,37,92,101,147,111,168,230,22,224,248,39,
48,239,42,208,238,178,233,233,68,11,27,238,134,184,154,121,178,130,56,198,229,52,26,158,18,44,49,226,239,61,52,106,176,29,216,81,63,202,11,60,39,236,9,255,238,198,212,157,217,142,83,60,239,253,231,244,
114,172,77,13,80,20,25,58,234,66,77,191,131,239,237,86,43,254,68,207,120,46,151,30,59,222,114,127,104,125,115,175,221,67,238,44,108,26,140,197,217,233,114,153,22,139,71,246,40,224,43,171,221,98,225,92,
192,15,56,1,222,37,121,119,3,246,136,242,217,190,169,188,24,229,54,146,19,204,200,225,145,143,135,101,15,205,120,110,219,85,99,118,242,68,252,14,117,247,254,154,115,63,6,211,101,182,231,150,17,10,195,
99,22,140,248,143,89,59,188,175,234,205,48,176,137,73,200,77,241,35,48,86,0,214,163,52,216,80,158,26,248,94,53,67,39,223,5,21,69,233,17,21,16,130,240,78,232,230,244,128,88,24,115,218,80,154,51,250,182,
183,65,122,200,179,138,5,231,168,89,87,26,220,114,93,120,66,68,152,18,201,80,160,21,228,5,224,250,103,113,7,6,92,231,208,70,139,118,242,58,112,114,236,155,158,79,118,113,33,7,76,151,252,39,137,35,133,
191,91,123,206,128,207,64,57,155,191,47,10,171,240,145,96,41,77,138,51,201,145,160,141,246,47,129,253,128,253,49,115,7,38,254,14,164,30,252,201,114,108,127,63,81,1,67,45,89,21,141,42,35,48,174,37,67,45,
124,160,135,42,47,40,98,230,109,187,219,128,107,14,100,39,24,35,196,35,17,168,195,88,237,41,89,133,48,52,196,215,180,58,0,229,211,49,12,99,68,120,13,31,255,187,25,59,184,14,80,216,138,201,15,147,49,51,
128,203,56,250,96,96,197,139,49,241,72,183,119,54,137,1,215,93,76,112,168,6,222,241,29,145,224,160,206,93,73,84,168,14,250,11,191,103,120,92,31,241,81,177,34,166,138,80,131,165,181,131,15,28,222,147,144,
13,98,76,38,8,98,25,21,99,154,201,134,215,88,19,22,4,195,218,248,46,236,51,200,15,17,195,5,53,174,42,19,161,195,219,140,72,0,89,128,17,49,169,68,204,234,210,32,126,54,69,152,66,71,225,2,65,214,103,158,
113,18,57,25,75,54,226,100,95,71,226,136,147,74,198,144,40,25,59,86,15,18,75,54,124,132,63,145,160,225,187,174,111,239,244,194,14,45,114,191,95,184,100,58,172,110,232,253,146,153,195,104,61,88,133,154,
51,107,229,100,44,237,70,61,102,220,91,247,47,39,12,54,82,217,76,79,70,215,155,245,5,164,107,101,149,190,176,144,168,9,77,54,48,146,38,76,109,218,9,214,166,1,225,76,172,9,139,220,0,220,50,123,113,131,
167,40,136,161,142,99,52,185,58,195,106,137,107,185,135,189,46,79,155,254,96,113,45,185,228,1,179,236,76,32,170,0,109,212,166,225,141,185,208,38,57,224,56,196,198,202,194,9,207,38,214,80,54,145,131,104,
0,118,229,199,221,196,17,125,86,125,206,102,145,249,54,189,14,27,35,60,22,174,15,70,153,28,180,32,83,71,2,197,10,74,55,100,0,253,251,173,103,245,253,84,184,127,253,42,28,17,235,146,85,122,236,55,198,35,
62,153,225,20,39,198,242,249,147,146,12,30,207,203,192,94,205,251,210,117,51,22,47,202,180,81,247,152,180,217,232,240,12,100,35,174,14,83,139,120,47,42,78,135,55,105,100,204,68,66,146,136,37,244,252,38,
215,224,251,78,59,135,120,126,124,190,69,144,25,12,9,148,64,132,104,55,64,102,100,89,153,246,71,56,75,212,197,224,206,194,59,18,45,120,202,244,89,169,203,193,19,221,83,156,216,131,108,34,66,108,148,247,
84,41,80,38,45,2,39,63,100,23,155,5,53,111,96,148,172,125,71,172,104,124,1,110,251,180,199,224,110,99,141,88,59,54,118,62,51,202,156,198,177,190,249,248,169,6,177,171,47,62,234,200,76,140,144,48,180,7,
25,152,120,217,244,40,57,18,168,103,213,69,71,50,31,46,78,68,31,65,147,13,156,89,119,55,150,100,227,174,197,85,168,96,201,224,30,232,217,116,178,97,145,80,215,86,76,92,232,113,177,97,238,255,252,167,30,
28,113,71,193,36,172,67,176,6,172,114,107,246,130,195,16,225,209,206,102,62,98,191,134,143,63,254,212,231,25,27,164,177,97,163,25,38,163,65,248,51,247,237,224,145,14,35,62,125,28,171,162,116,240,89,49,
86,181,199,163,183,207,94,179,126,13,224,14,240,212,57,31,48,22,169,107,128,220,88,62,61,120,154,197,189,38,27,12,12,149,118,80,101,11,129,33,7,189,79,188,140,204,170,81,212,234,179,19,45,82,223,122,216,
215,159,9,143,230,173,135,49,53,104,28,197,88,245,172,13,38,114,141,66,187,234,83,48,219,21,142,216,65,1,57,10,248,43,255,19,250,63,27,40,205,220,25,193,142,166,247,176,101,55,83,189,2,82,104,78,106,184,
155,200,233,83,28,150,140,215,213,150,76,190,80,208,30,48,73,212,84,195,216,9,41,161,174,234,88,107,144,61,92,197,97,86,239,68,138,139,103,162,6,190,47,155,135,24,33,5,96,20,18,119,241,160,241,176,2,28,
198,103,245,107,227,125,76,179,192,113,151,234,226,122,2,187,227,247,28,58,102,3,183,132,119,196,134,136,235,66,149,135,181,233,224,65,226,104,34,132,117,138,17,14,12,208,21,145,251,77,134,24,0,182,138,
13,114,0,213,80,26,153,247,222,80,12,245,17,203,121,83,225,189,155,215,228,240,102,110,177,177,224,125,185,62,133,161,200,32,9,167,108,70,146,30,127,108,114,38,87,134,191,146,97,30,194,77,46,129,6,1,250,
28,97,70,27,215,206,120,112,141,147,86,9,102,179,99,66,124,204,211,213,44,46,188,47,146,69,145,73,86,85,247,235,57,8,61,229,57,27,85,76,57,211,155,136,56,93,135,177,210,133,183,168,77,219,13,163,194,64,
47,212,6,213,44,72,182,204,234,90,53,173,254,52,125,204,54,195,227,88,181,222,221,0,118,128,193,17,59,85,31,51,197,137,16,143,105,60,212,136,69,15,197,100,244,82,54,112,252,155,68,86,28,171,31,55,29,125,
167,140,129,70,237,93,95,174,87,121,7,27,125,69,216,128,242,34,178,108,60,124,39,52,81,11,221,152,13,231,116,235,94,147,229,197,93,100,133,189,27,21,188,227,118,236,227,72,228,162,247,215,35,59,77,246,
42,59,141,94,15,230,240,169,132,76,188,172,242,170,248,217,189,95,175,240,70,64,75,87,121,122,92,59,62,39,142,95,24,70,81,140,135,207,63,140,39,158,129,249,146,73,165,144,232,116,114,199,123,178,225,129,
226,7,143,164,245,168,131,178,87,141,73,158,46,15,51,158,7,114,113,8,99,37,36,87,202,56,13,171,61,111,80,226,112,147,216,156,17,195,54,111,230,168,252,208,94,8,116,152,137,101,82,245,204,234,216,141,215,
199,56,26,36,155,110,127,226,83,58,62,196,227,14,22,57,221,126,48,153,189,27,2,176,46,174,58,16,18,241,14,197,235,84,119,117,31,74,55,236,54,226,10,121,199,86,15,26,251,246,253,131,15,40,104,111,59,119,
254,145,46,125,81,111,72,26,202,161,192,26,217,113,176,195,205,250,249,246,245,155,248,155,253,38,46,215,183,126,52,110,76,20,26,140,219,44,26,214,200,183,59,31,108,96,115,51,64,118,92,227,237,198,27,
63,231,30,183,226,56,199,145,219,247,230,173,199,127,168,192,52,147,119,51,189,37,142,119,243,58,65,244,168,205,4,140,194,218,56,112,189,111,32,32,227,40,123,123,99,60,217,188,153,89,43,222,191,51,246,
227,201,120,246,251,2,65,98,233,73,13,188,97,95,3,188,159,45,20,8,19,250,231,94,191,124,161,193,103,243,47,35,14,159,74,37,14,201,74,211,183,239,76,12,144,229,23,2,225,221,168,110,27,79,178,217,241,56,
189,121,211,137,37,94,118,74,127,246,251,35,132,68,168,44,147,192,28,236,249,189,199,214,213,89,120,49,169,25,71,255,178,204,70,4,68,180,64,50,4,166,147,130,109,37,60,68,84,156,156,224,254,144,52,54,35,
23,179,25,89,60,147,141,76,204,102,109,49,57,116,14,193,147,56,7,47,64,200,196,3,62,112,143,70,236,130,197,70,55,229,7,27,228,112,57,42,25,246,73,230,216,157,56,100,139,12,128,230,4,150,120,247,36,191,
125,251,232,55,179,167,63,123,28,5,126,203,118,232,200,196,131,63,29,199,17,11,60,4,37,101,48,89,78,193,39,145,100,76,12,232,5,239,8,132,143,203,254,45,205,240,10,197,193,127,16,118,119,245,175,0,244,
198,117,194,83,129,23,201,178,97,95,232,249,218,141,239,216,120,189,133,158,55,51,171,157,223,244,160,176,96,184,134,169,27,90,115,45,152,71,206,186,232,26,193,92,250,243,207,180,126,249,41,29,224,82,
34,25,188,124,136,220,193,239,64,124,171,99,189,238,223,184,70,56,70,91,223,40,111,191,252,148,238,127,126,103,229,40,217,171,228,104,132,187,37,126,46,97,49,134,10,187,137,190,11,55,1,61,172,145,4,20,
13,224,105,17,243,226,222,162,218,3,220,148,185,0,143,233,38,103,144,116,164,98,29,248,124,155,8,211,248,156,13,156,85,228,10,79,108,38,113,156,39,85,198,208,80,215,127,240,169,103,227,232,40,120,239,
207,231,231,159,127,74,87,120,249,164,150,145,195,144,222,233,174,0,120,198,37,156,152,19,49,178,198,224,48,156,43,136,20,163,196,74,249,138,248,2,8,115,84,251,70,55,226,126,12,54,120,124,73,53,118,118,
184,232,191,155,166,165,114,160,227,188,88,208,73,141,88,187,223,251,173,31,21,255,251,255,249,255,164,175,251,249,47,20,122,226,126,17,111,37,17,78,97,68,213,84,169,41,163,197,98,163,23,205,135,248,127,
205,172,155,17,40,187,244,200,155,117,37,40,249,26,241,144,151,95,126,161,49,221,190,125,99,166,59,119,15,196,48,160,63,128,96,241,84,24,49,234,223,128,37,240,64,251,231,220,251,235,107,84,160,80,1,185,
224,24,53,62,249,254,198,208,0,139,135,47,158,187,65,34,73,168,253,154,215,79,159,104,12,167,154,99,220,26,49,209,99,145,207,200,56,188,63,148,126,45,183,238,149,96,212,77,149,4,26,46,19,27,220,15,188,
12,74,180,0,230,63,189,147,205,126,26,247,140,114,40,253,197,174,248,22,199,115,233,215,136,24,121,254,252,89,235,124,189,168,112,129,207,3,175,179,255,252,232,247,181,87,87,114,136,138,84,84,93,250,6,
248,42,78,128,13,107,28,173,137,53,99,103,223,37,125,239,27,225,31,223,111,41,104,70,63,255,227,143,244,63,254,237,231,244,63,252,247,255,225,35,250,193,104,79,38,126,36,147,144,31,229,95,182,235,60,58,
17,234,57,202,147,120,219,221,61,92,228,230,154,186,70,66,133,44,123,176,204,116,19,7,200,21,203,104,113,101,102,122,214,127,193,193,216,92,197,196,71,238,23,175,253,63,254,239,255,76,127,222,247,81,147,
101,118,122,30,54,172,157,49,198,228,190,23,196,65,172,7,192,241,30,230,98,70,63,207,84,212,106,138,4,232,56,6,100,1,119,79,79,78,126,97,226,145,118,58,86,58,255,254,159,92,232,201,164,98,54,117,125,255,
110,214,205,201,114,34,95,139,132,167,255,254,210,141,150,240,21,224,154,217,236,245,73,148,55,30,83,252,231,226,132,164,168,246,108,56,139,85,39,24,213,161,135,136,48,129,192,51,54,24,142,234,219,135,
94,103,206,225,105,220,146,161,15,226,231,197,236,244,96,20,205,42,99,6,26,128,47,37,123,169,27,253,30,196,141,254,195,229,237,61,221,191,254,169,56,172,135,29,213,177,57,226,254,20,9,25,108,171,191,134,
9,229,164,24,127,239,199,56,61,172,147,189,236,122,187,217,40,34,159,60,186,119,251,117,94,248,217,137,140,115,226,137,233,247,111,55,248,200,244,169,159,36,111,215,117,84,231,88,62,69,153,113,158,70,
166,30,109,23,65,244,198,186,68,174,66,143,57,139,172,76,123,0,44,121,218,83,6,153,115,112,32,131,71,199,12,108,18,89,34,187,174,94,220,58,203,204,108,31,187,4,71,11,62,28,96,244,127,254,246,207,244,219,
159,223,240,141,194,1,177,11,253,25,17,96,138,164,112,186,169,204,228,0,196,86,253,248,18,172,162,248,118,58,148,253,157,48,42,123,139,118,40,81,0,173,12,159,49,129,254,101,3,99,128,221,216,7,204,135,
71,56,169,191,110,10,182,13,22,233,251,183,7,6,11,166,120,247,36,220,44,221,128,96,84,248,60,28,157,213,159,193,88,12,6,21,148,58,39,95,32,63,220,126,251,141,37,204,100,200,103,251,243,15,37,56,183,126,
253,243,157,155,165,57,81,195,125,208,67,245,184,144,148,184,254,119,192,75,44,48,192,41,184,189,227,52,145,35,26,197,96,144,216,32,37,192,241,254,231,199,111,255,144,29,193,203,225,128,70,21,107,46,195,
219,209,27,97,179,100,123,236,201,236,159,69,244,58,190,14,244,194,219,125,16,79,112,58,109,219,77,39,161,59,73,221,139,97,120,174,138,220,220,55,1,178,254,255,235,191,254,150,254,231,255,233,191,83,6,
110,20,39,23,195,90,142,147,231,209,190,210,220,102,108,218,160,41,111,223,177,246,230,111,166,221,167,66,122,162,186,19,63,60,252,48,143,211,253,217,238,117,177,161,158,198,43,243,96,186,24,199,172,170,
90,96,87,108,85,129,109,54,28,209,118,97,147,201,21,137,236,234,194,233,154,170,26,228,143,71,195,62,89,236,135,74,115,60,222,15,46,4,89,66,92,148,158,224,124,124,23,129,1,181,230,99,31,88,29,31,60,98,
63,178,95,118,121,103,195,13,48,64,86,31,16,67,93,196,95,76,174,49,227,56,33,227,8,123,230,80,187,43,24,243,120,216,216,152,140,29,217,15,52,27,233,129,113,119,99,7,43,135,100,142,147,239,67,73,146,161,
132,59,9,143,251,141,27,246,116,156,92,125,76,22,100,216,244,64,42,13,34,180,32,17,16,225,13,60,60,16,16,27,15,25,87,172,241,239,195,123,98,125,17,94,16,225,192,102,65,214,127,51,43,201,39,90,84,136,216,
154,97,74,93,34,135,117,147,64,129,189,48,203,169,135,90,32,201,114,34,227,61,122,244,211,163,191,222,153,120,117,229,237,118,40,107,174,134,214,162,26,119,184,170,182,226,250,70,129,165,185,218,164,107,
106,69,206,46,123,163,245,224,53,125,244,245,188,33,198,77,38,59,208,133,6,124,69,188,41,13,168,39,250,108,14,46,250,194,178,223,225,58,238,78,235,110,98,216,216,192,191,125,24,8,174,79,165,197,32,104,
20,209,190,196,224,158,125,244,233,88,78,241,16,108,160,204,230,88,23,62,25,208,227,184,131,17,238,221,211,149,104,246,2,100,226,99,129,4,12,120,76,100,213,17,192,147,65,116,200,163,35,35,7,60,3,208,24,
68,89,28,209,248,183,143,222,192,16,145,25,51,150,230,61,9,87,83,140,226,74,7,30,132,65,96,86,103,234,57,90,117,153,140,216,48,170,107,240,41,96,50,28,85,31,31,76,64,112,141,200,216,243,16,61,48,38,141,
120,215,229,67,38,107,45,212,68,50,13,93,189,218,149,68,228,186,11,247,172,206,144,217,141,233,184,115,154,203,224,16,196,73,198,103,100,40,136,72,2,88,253,248,252,254,190,169,127,30,25,237,248,89,17,
176,175,83,97,50,215,213,170,35,96,69,153,70,247,1,252,179,185,45,57,74,197,89,29,151,44,229,2,101,216,246,17,186,28,236,128,148,221,208,243,219,14,144,151,28,252,44,147,150,3,238,73,142,59,152,178,159,
205,241,98,30,77,88,120,141,168,239,251,232,211,160,193,186,252,37,169,144,115,20,228,163,33,139,187,188,27,12,142,58,61,220,164,135,194,207,56,73,247,42,211,163,150,90,92,29,154,163,206,155,211,40,115,
49,251,199,209,203,38,171,202,135,194,12,150,56,103,237,55,118,183,4,138,138,251,135,113,69,124,8,18,138,13,33,64,81,249,83,27,161,249,232,92,117,100,1,198,65,248,192,152,235,110,200,74,113,54,55,44,146,
57,50,152,12,198,247,107,184,253,254,187,98,67,134,58,11,33,42,170,86,176,141,22,155,102,115,9,54,61,140,96,82,235,2,60,109,96,31,18,39,104,194,92,13,76,51,172,72,58,206,79,3,224,220,36,248,183,59,68,
149,201,46,114,34,240,118,56,77,128,253,145,47,80,28,58,109,14,199,234,144,170,73,222,60,164,11,98,157,224,152,110,206,158,249,125,119,23,12,116,162,85,123,65,134,115,253,117,8,89,240,121,55,87,241,154,
99,216,61,120,5,150,164,33,229,208,204,167,192,126,75,200,187,88,178,135,121,192,113,218,144,109,148,213,93,125,205,165,190,50,23,235,252,72,127,39,25,187,139,114,83,124,1,17,248,83,205,96,11,50,213,179,
178,217,170,250,139,176,203,154,202,55,52,200,226,157,215,124,92,227,1,224,231,148,105,25,177,75,22,151,242,16,145,53,18,149,228,254,107,17,88,155,176,48,102,184,59,141,27,15,99,253,252,73,164,140,77,
134,240,232,237,169,76,116,38,30,245,39,189,27,43,39,246,128,248,140,189,27,0,30,248,220,51,105,85,147,196,9,152,205,0,178,234,131,75,166,138,185,146,141,63,248,159,120,144,128,103,96,228,129,239,33,76,
160,247,38,180,103,72,135,181,122,173,73,212,151,25,123,178,108,90,31,252,3,130,252,138,123,173,221,226,18,107,17,127,220,52,51,108,200,102,160,187,56,108,10,97,5,26,185,123,155,232,105,143,144,129,169,
163,85,57,58,60,69,16,118,189,219,200,75,28,245,50,234,67,113,181,155,204,78,87,201,130,176,189,59,111,168,81,58,53,151,244,48,91,62,216,224,187,99,108,56,191,141,204,124,117,3,64,149,4,78,175,68,75,2,
173,28,241,12,211,114,237,138,52,43,3,158,92,140,159,92,111,142,238,54,245,38,167,7,171,167,5,135,17,80,199,133,48,73,118,35,88,156,81,213,165,54,45,120,180,1,152,62,150,116,68,17,89,129,247,114,12,51,
35,134,60,173,182,81,242,56,230,74,171,62,170,68,140,61,110,155,225,134,58,4,155,170,61,226,108,74,28,140,102,239,241,40,254,228,207,224,177,224,85,8,174,187,247,26,199,242,167,207,163,134,204,184,207,
184,236,100,76,149,5,2,194,75,19,19,163,230,24,28,134,217,12,12,79,134,131,138,65,98,150,62,13,133,16,134,242,119,18,35,222,85,168,8,142,37,191,246,216,7,244,85,108,136,12,109,0,9,109,106,212,139,208,
105,130,231,114,153,184,26,230,106,94,131,201,33,70,28,199,167,79,178,208,75,58,205,7,160,151,55,220,102,230,14,227,113,158,160,203,234,211,98,98,197,137,109,194,142,165,115,96,146,166,31,182,39,205,163,
205,77,107,233,233,20,140,62,162,96,139,5,11,141,138,69,195,83,58,206,64,156,178,59,145,97,237,210,165,175,0,65,239,6,104,73,184,232,55,130,47,36,193,33,218,152,96,208,53,250,126,235,96,156,143,78,64,
19,27,248,157,76,60,166,81,79,102,12,99,106,62,203,138,38,37,224,218,182,175,95,69,81,3,175,241,80,175,14,142,69,25,123,83,150,10,79,213,175,37,136,188,37,88,56,148,142,89,116,45,222,161,56,62,121,60,
179,155,112,114,95,143,122,131,144,1,87,150,52,239,250,252,192,223,96,172,142,179,154,143,206,226,22,96,38,111,248,251,101,229,195,164,17,24,246,201,166,208,225,8,13,227,68,130,50,187,47,220,129,20,185,
167,65,108,209,38,172,35,211,103,45,31,15,150,30,188,140,222,166,229,211,251,240,190,201,250,66,167,75,149,248,59,60,159,104,136,187,19,177,195,4,21,133,43,172,246,204,211,35,76,137,222,118,56,3,243,87,
217,234,225,48,172,58,196,99,226,234,223,159,81,14,182,161,77,22,7,59,77,164,9,17,3,252,155,228,12,27,108,117,47,20,79,220,166,4,22,118,118,132,81,70,48,206,115,253,216,7,134,4,227,132,149,7,227,25,23,
130,236,136,37,48,239,12,66,62,57,13,0,118,158,139,8,165,85,236,149,233,34,78,97,141,11,240,209,202,68,226,238,254,226,89,24,99,136,52,13,92,207,55,197,138,70,80,221,178,186,235,104,12,174,226,144,234,
213,147,19,169,103,216,80,146,154,227,121,148,33,3,68,57,242,250,38,150,11,193,104,103,139,1,188,211,211,222,152,136,17,240,14,25,23,131,247,82,202,216,165,230,134,12,59,186,252,146,122,116,102,102,225,
101,240,50,67,57,67,98,4,198,100,157,44,224,62,171,129,246,233,205,213,24,24,80,191,89,0,241,219,215,111,50,218,7,52,32,156,53,59,188,242,103,42,156,18,188,18,165,205,22,226,42,32,208,124,220,12,162,159,
131,48,83,163,117,151,159,33,190,67,154,130,132,113,60,138,26,145,244,5,143,211,198,122,218,192,240,90,132,108,225,100,14,123,230,108,86,126,138,182,22,43,240,109,198,45,143,144,136,177,40,24,121,176,
174,2,1,46,35,191,34,126,153,172,240,176,120,7,135,34,68,53,9,55,0,217,232,157,102,251,106,82,204,249,241,245,155,170,19,172,117,43,62,136,64,28,139,89,236,141,78,103,212,196,249,78,87,41,158,69,152,170,
50,78,178,215,163,125,180,7,241,200,82,153,52,152,169,50,81,179,178,10,234,57,77,250,48,81,129,241,211,238,227,139,241,210,164,254,29,30,91,119,85,165,140,153,145,73,243,233,211,104,15,200,163,157,96,
87,77,184,27,58,227,34,40,91,32,131,159,22,199,150,138,169,222,126,254,137,152,105,241,166,42,54,58,198,87,253,190,171,33,165,136,217,14,38,61,170,191,171,221,64,12,43,66,96,68,33,228,117,152,117,219,
176,155,33,55,101,226,73,39,198,164,205,136,251,225,245,39,223,191,171,35,128,173,112,237,8,191,216,10,225,150,93,60,116,245,45,137,196,82,93,7,231,254,192,241,204,30,115,27,36,143,92,219,65,16,160,97,
107,68,6,234,40,245,42,206,215,38,103,190,65,71,211,134,131,33,68,68,113,175,73,138,122,188,246,105,36,61,31,40,147,130,19,16,14,201,130,17,131,190,84,83,232,251,152,116,225,196,38,154,185,6,157,190,153,
69,205,56,173,165,183,190,48,103,149,230,205,98,131,19,53,62,115,49,73,32,37,228,164,114,100,51,192,251,224,1,122,39,3,192,198,69,226,115,253,32,113,156,30,129,93,213,58,98,170,102,197,13,196,55,12,216,
163,246,29,49,24,50,82,243,65,139,171,39,179,177,206,106,8,137,0,49,50,98,44,202,60,143,44,57,81,208,96,21,74,224,182,142,137,58,148,213,155,105,161,161,222,122,166,222,164,135,35,156,142,154,145,253,
225,98,35,245,239,66,213,133,56,102,210,67,135,7,102,44,203,68,75,240,24,17,140,139,250,120,112,157,204,90,183,125,172,57,208,9,134,1,230,77,54,82,192,162,94,158,88,66,204,110,144,211,26,103,110,122,96,
185,196,76,141,51,54,51,162,166,44,225,49,224,167,147,161,155,81,16,33,224,126,12,133,143,28,14,128,96,186,5,36,80,65,114,235,50,161,62,221,253,224,73,134,250,93,179,65,183,224,98,18,157,88,7,75,234,48,
190,121,233,215,184,155,13,22,250,158,227,248,14,178,41,37,72,102,7,220,70,234,7,215,210,34,167,179,57,137,27,9,167,199,131,99,151,147,233,101,65,2,208,209,92,45,147,82,140,59,74,12,109,30,1,63,219,207,
103,17,6,72,186,168,194,241,38,118,246,89,1,152,113,231,172,128,187,100,215,130,11,177,67,214,169,175,23,31,21,201,217,175,98,185,80,172,93,251,195,77,238,56,92,63,169,31,27,70,218,90,52,154,38,215,173,
45,160,218,61,29,50,241,233,114,21,215,111,83,111,58,129,121,119,76,34,28,40,174,90,145,1,20,236,236,155,200,30,147,85,217,226,186,216,7,142,38,51,24,121,55,206,105,85,120,49,224,22,195,40,184,151,104,
33,192,38,205,110,247,32,59,125,19,145,150,213,45,10,171,46,76,180,216,159,13,79,24,167,84,22,40,14,65,133,0,192,213,211,126,60,169,104,200,105,208,195,154,44,45,166,124,26,133,8,56,5,226,178,85,92,75,
37,144,58,37,15,171,55,55,67,129,167,153,90,71,144,131,171,56,0,161,179,20,156,201,123,100,220,230,110,54,195,129,201,100,240,18,0,43,22,246,114,9,149,134,71,70,21,16,67,100,170,220,157,166,37,45,234,
86,147,97,53,245,186,96,129,10,23,92,45,3,45,40,238,81,166,156,50,51,115,105,87,10,6,97,48,12,175,7,47,3,3,109,238,190,203,38,144,34,113,8,76,11,217,247,52,15,54,18,30,10,229,165,179,110,142,89,63,30,
228,36,162,237,228,184,135,224,108,52,67,29,18,45,32,148,226,7,55,58,14,253,192,8,159,36,235,240,192,32,23,197,141,92,96,196,166,72,122,140,235,70,27,192,250,235,47,221,224,63,27,194,169,204,220,177,169,
224,181,216,243,135,163,31,188,205,143,239,222,156,170,62,37,183,56,16,184,54,235,93,9,212,49,54,181,188,250,221,173,24,105,180,57,196,145,221,156,25,135,234,64,108,120,100,182,33,69,136,231,130,80,136,
71,118,41,22,88,149,186,71,64,123,36,229,186,239,156,158,215,92,128,108,45,71,22,60,130,32,210,175,29,68,110,134,1,57,13,182,61,55,72,176,234,119,243,101,219,67,140,226,157,39,171,251,192,220,194,82,220,
193,48,26,199,66,35,123,51,137,214,109,146,10,76,15,73,177,176,205,51,22,192,202,99,167,101,250,200,137,172,106,228,186,163,218,114,158,131,120,112,26,108,62,76,82,192,46,103,208,110,252,115,249,252,249,
161,195,19,97,2,69,1,12,63,193,83,185,6,220,2,252,37,24,127,29,11,42,2,236,166,76,209,165,75,6,220,89,222,27,134,145,45,235,135,221,140,227,179,56,83,93,126,250,137,244,173,203,207,63,107,49,175,42,255,
205,253,232,77,113,124,246,16,1,134,75,85,225,110,144,204,164,3,230,34,235,126,30,161,0,251,105,46,171,165,159,157,209,78,211,128,170,192,218,193,38,163,225,230,50,234,194,202,220,39,62,196,50,140,77,
217,55,225,49,120,68,196,214,16,12,237,159,97,161,209,32,133,137,109,4,47,74,62,228,52,18,21,192,67,172,205,195,131,34,52,66,136,96,195,14,246,78,115,239,18,49,96,192,51,155,98,106,26,100,109,10,165,176,
105,137,108,8,244,46,108,133,152,134,67,203,6,229,131,119,203,80,193,154,70,220,0,134,231,6,199,162,200,8,131,48,125,223,164,111,57,60,229,226,50,16,143,87,167,248,213,64,207,65,253,26,65,35,98,40,75,
69,45,32,151,236,99,38,18,165,201,173,151,205,23,134,35,139,117,217,33,130,84,88,95,13,26,91,0,179,193,85,44,211,83,43,1,12,209,68,227,226,44,24,177,222,144,254,51,214,22,53,120,198,94,253,239,120,240,
58,18,78,83,166,250,98,81,208,245,164,177,221,123,44,200,102,173,117,225,195,224,230,3,241,152,53,103,213,217,105,248,253,79,225,155,121,148,253,4,63,173,143,90,185,241,72,97,111,147,91,83,133,5,226,225,
103,11,79,69,124,205,24,214,228,102,198,189,134,111,40,87,211,175,159,155,131,39,136,213,63,108,180,103,120,127,100,213,38,159,44,44,13,182,209,133,73,45,78,10,79,41,46,227,107,16,162,56,3,231,137,129,
24,157,165,213,211,13,129,105,64,78,106,140,43,15,101,95,211,133,130,237,147,253,115,178,174,62,140,84,184,95,138,93,167,246,136,197,9,240,198,122,126,29,114,223,41,64,246,193,236,154,162,221,71,13,111,
128,17,115,25,45,182,67,56,190,184,39,37,187,5,19,253,189,1,19,73,55,252,100,96,202,66,141,201,10,209,35,188,131,124,64,76,108,231,2,143,14,185,44,108,44,224,158,208,24,162,199,221,143,17,75,69,43,39,
23,145,45,159,18,77,146,247,115,217,210,25,173,188,222,174,44,209,192,62,240,204,128,142,178,181,191,9,192,147,164,177,142,172,239,250,203,47,233,242,203,207,105,2,219,197,49,219,228,163,249,250,111,191,
10,242,193,3,188,185,156,103,133,42,66,78,142,115,39,11,82,181,39,97,81,37,38,239,82,149,248,249,23,129,253,45,13,131,107,238,124,124,235,223,17,152,36,241,78,172,21,194,9,245,165,234,126,220,241,24,250,
70,132,129,96,76,54,20,150,60,221,246,250,128,108,36,131,93,220,113,137,204,92,2,98,147,113,88,9,55,48,6,133,113,184,12,203,146,233,121,12,120,44,89,10,156,49,171,159,239,32,84,224,243,251,189,135,124,
248,232,122,156,39,201,245,88,166,102,69,140,191,42,28,43,65,14,127,82,174,147,164,251,230,54,222,98,233,70,53,231,42,251,118,161,254,180,234,215,232,7,142,221,151,212,139,65,242,197,169,246,87,36,67,
147,189,0,118,10,234,202,104,79,24,71,177,153,210,217,37,179,8,228,131,214,196,184,206,140,20,42,225,58,216,126,180,117,138,185,132,227,19,198,67,117,181,0,163,13,83,172,221,171,4,152,206,227,212,213,
30,193,50,106,102,58,204,58,7,229,95,180,34,85,161,62,254,254,27,189,22,225,170,110,72,28,89,130,99,177,169,54,11,195,225,49,159,85,238,203,70,39,180,22,242,44,74,182,102,37,38,208,177,196,117,30,66,7,
240,61,120,120,48,140,228,214,220,216,240,240,82,228,64,238,98,235,51,67,207,1,95,29,222,132,42,173,150,56,186,241,95,191,14,196,132,56,198,37,107,237,227,223,209,47,61,47,214,22,9,40,72,41,48,186,56,
224,45,89,152,194,233,24,177,96,29,159,155,86,247,16,107,203,207,57,148,84,17,190,138,48,196,104,67,243,243,82,153,85,240,18,255,244,0,2,114,40,61,164,160,134,167,118,95,212,238,140,159,165,108,132,116,
158,108,49,217,227,58,251,86,236,24,170,91,161,148,22,93,130,184,24,28,225,120,88,171,169,250,119,19,13,152,216,244,7,7,177,77,200,255,205,220,161,159,31,29,120,236,161,94,212,52,20,73,143,225,31,65,55,
43,19,156,182,159,35,139,47,54,228,211,141,82,167,73,160,163,34,227,99,132,9,141,25,54,4,136,203,76,239,90,44,149,194,2,192,245,234,57,62,197,243,118,148,45,194,0,9,122,91,2,187,90,156,180,121,108,202,
254,245,155,75,101,51,31,158,32,158,55,25,232,114,33,206,151,172,102,193,13,96,222,40,94,115,33,126,233,50,39,251,82,46,52,168,102,12,23,107,196,18,172,217,88,168,156,209,123,77,243,163,164,201,88,110,
17,228,83,252,239,40,56,196,76,33,132,91,140,63,139,235,223,98,208,135,183,12,233,62,198,232,213,21,41,103,205,161,255,201,164,231,116,187,173,17,151,26,122,210,193,29,112,56,134,251,219,201,97,117,184,
80,79,79,252,80,92,89,146,102,250,236,116,112,30,101,18,98,16,81,128,233,63,191,146,209,223,70,73,18,113,116,118,143,23,175,43,38,7,44,86,69,11,49,36,74,233,197,24,166,166,236,172,178,219,240,54,102,167,
8,240,20,27,38,219,136,20,39,52,19,82,165,4,65,131,33,108,17,7,116,82,139,3,203,111,162,129,49,235,115,213,3,56,31,188,7,21,42,54,241,47,139,61,211,28,108,114,108,20,198,126,211,16,74,13,16,61,202,102,
12,232,93,155,102,108,228,35,186,24,86,2,196,18,213,152,211,205,101,177,41,195,43,209,75,5,222,105,242,197,165,103,211,234,159,158,221,78,48,241,245,74,138,222,152,37,35,185,224,38,254,242,101,212,211,
241,249,41,61,212,225,136,225,226,251,223,174,131,82,166,216,78,71,30,214,100,253,233,103,173,153,51,102,38,45,73,124,0,220,215,234,239,165,2,26,80,9,27,13,174,61,248,148,117,48,247,247,33,8,128,196,234,
52,57,163,24,200,135,215,71,226,73,152,235,114,117,54,157,73,214,102,46,97,238,64,196,196,57,79,76,80,120,140,227,158,220,55,14,195,155,231,105,136,151,193,118,22,119,14,160,209,141,186,71,17,14,88,38,
114,182,147,154,221,47,100,125,236,221,205,69,155,193,86,25,228,30,226,81,1,94,27,96,207,181,141,12,28,70,129,160,22,23,131,154,50,143,13,52,132,57,163,12,156,142,15,242,105,192,0,119,122,112,8,109,160,
220,57,119,49,135,16,183,5,105,33,202,148,213,141,108,200,16,85,61,72,172,1,23,199,123,217,58,151,11,141,65,208,202,254,237,187,50,216,36,218,26,105,120,61,212,136,249,61,36,46,187,177,108,24,154,165,
252,170,103,254,240,120,11,193,122,52,96,245,135,206,239,141,118,224,109,31,16,216,108,49,45,38,92,77,228,6,66,91,253,59,240,51,96,164,76,166,240,160,87,85,82,38,135,50,8,37,112,228,7,86,9,50,179,48,77,
197,148,143,153,59,42,217,34,108,210,80,172,121,112,35,25,111,214,211,120,110,196,156,54,250,121,114,194,166,77,27,50,221,205,221,163,167,227,86,122,68,211,249,146,79,24,108,96,226,162,209,155,207,144,
74,215,157,91,200,223,180,129,139,50,222,180,196,56,153,81,216,208,230,56,28,102,17,177,227,114,85,239,119,178,48,194,96,158,39,115,229,128,242,83,31,198,227,72,8,58,27,75,154,99,214,76,85,189,180,186,
217,169,158,210,61,108,233,17,127,48,254,51,201,128,144,9,12,4,187,207,229,61,181,233,238,244,86,65,78,152,44,223,18,215,195,50,149,147,9,121,47,61,28,196,84,151,47,159,181,227,97,116,46,7,6,9,97,142,
54,80,50,168,229,1,209,136,133,216,20,134,68,16,219,71,82,176,151,116,236,173,28,27,194,196,11,224,120,95,135,240,66,201,56,43,137,185,174,183,147,110,214,239,231,242,211,79,130,116,28,99,194,168,200,
28,178,48,66,136,118,69,11,2,122,130,134,42,238,182,141,62,31,92,3,90,37,36,4,187,112,115,204,4,253,173,248,99,98,73,64,118,193,252,73,65,60,113,71,0,43,87,209,150,140,147,226,178,142,24,157,155,200,157,
0,18,239,154,135,26,27,107,254,54,42,122,111,207,69,106,22,73,40,110,177,56,219,211,212,55,182,82,11,194,170,209,80,72,49,46,67,135,219,131,88,60,244,45,93,108,136,1,83,236,81,146,84,176,98,229,100,247,
57,153,120,129,55,80,218,14,224,184,51,70,54,245,31,202,142,88,53,136,47,244,248,142,236,78,71,241,30,21,28,71,21,135,216,153,227,52,82,252,231,233,1,120,219,139,213,244,208,170,225,177,229,157,88,12,
228,134,124,241,121,223,205,151,220,105,160,81,122,131,161,240,72,7,78,233,99,0,128,117,114,44,147,172,33,174,62,158,214,51,238,239,162,235,119,175,133,7,24,85,163,201,73,139,18,44,97,153,52,86,132,19,
253,190,89,191,223,117,221,211,101,29,27,57,185,243,49,42,77,204,230,125,74,72,68,117,54,253,108,54,118,41,130,6,143,111,30,179,211,232,251,89,251,102,67,88,2,36,131,6,61,107,13,249,30,119,65,98,19,80,
117,13,113,113,10,178,135,117,160,176,62,56,237,72,242,157,157,116,170,26,22,15,157,21,176,85,112,149,134,105,185,77,250,176,12,77,202,67,60,128,49,181,113,202,136,109,197,214,15,177,175,171,243,172,74,
253,166,226,202,94,246,148,142,98,100,68,29,156,121,140,58,81,21,40,104,108,102,33,153,32,60,142,111,77,24,56,137,113,225,133,0,203,239,22,193,143,73,85,103,149,234,130,56,123,167,235,227,146,121,33,88,
76,73,227,249,209,134,128,11,123,83,70,142,164,164,24,15,85,230,23,139,179,138,38,21,116,38,43,66,168,247,166,14,229,141,102,141,34,138,68,153,156,193,102,118,199,194,240,102,36,158,90,30,38,52,25,41,
84,96,86,208,245,215,95,232,165,214,207,95,232,205,216,98,138,48,227,253,179,226,73,211,219,248,122,67,63,172,218,128,144,113,115,211,152,107,230,252,190,83,244,60,86,113,96,168,56,226,77,5,43,94,7,178,
118,204,50,98,76,72,224,126,29,34,97,36,114,76,154,125,136,248,51,58,46,17,94,52,247,176,96,163,112,227,237,146,59,129,152,195,210,147,41,234,97,246,251,8,106,222,16,164,181,70,185,170,40,198,248,45,166,
26,74,30,92,63,31,151,132,114,162,153,12,247,6,230,253,110,154,89,232,180,251,250,241,143,181,111,120,228,8,82,126,187,153,164,98,190,103,12,91,176,218,50,226,76,14,123,58,31,90,85,99,76,160,113,241,106,
114,200,228,146,237,28,173,148,136,29,39,179,154,113,52,79,158,62,27,189,53,238,75,24,10,95,49,253,84,115,14,53,251,112,223,110,252,93,241,244,84,10,5,108,122,152,197,36,217,102,222,229,100,239,193,41,
178,119,215,185,17,215,141,202,81,118,217,81,125,55,197,76,151,234,100,10,250,230,193,140,14,105,99,208,190,66,69,46,36,81,86,183,188,162,18,131,222,158,102,188,19,49,39,146,133,108,29,28,38,40,52,144,
89,195,74,241,62,112,54,113,63,221,27,92,190,36,26,199,228,164,8,222,239,13,199,36,32,173,111,95,213,123,100,154,221,228,54,89,190,127,153,29,227,85,197,95,128,138,144,52,245,247,78,253,251,246,239,170,
154,204,171,223,111,156,18,155,24,70,138,146,228,180,172,35,89,193,195,187,252,244,69,133,7,223,55,9,191,187,241,212,216,68,238,25,79,230,5,68,255,57,54,5,88,246,88,159,186,89,215,221,122,245,65,91,3,
48,78,52,193,158,111,232,84,154,27,91,207,135,68,118,226,60,163,199,176,172,224,135,54,211,238,240,252,22,135,23,34,129,3,23,213,73,123,223,212,203,133,208,239,187,245,156,152,160,14,117,140,254,133,144,
228,0,149,136,147,178,118,203,20,59,80,231,116,129,44,17,209,153,252,196,155,142,37,7,171,213,199,40,57,134,243,193,118,201,115,159,70,41,173,154,40,154,211,131,164,49,146,139,192,30,221,99,50,185,65,
95,115,90,76,253,66,114,208,189,195,104,134,138,135,132,36,5,9,135,49,182,8,11,78,235,120,19,63,253,162,70,125,72,166,68,173,89,217,239,42,16,220,125,225,248,206,183,159,127,214,174,5,140,131,19,192,74,
190,32,113,80,198,101,239,127,71,9,114,18,37,14,137,221,163,45,215,218,71,152,139,137,201,176,111,2,158,39,39,7,232,193,158,66,191,178,62,103,228,218,92,21,61,50,179,224,149,137,71,52,30,254,85,228,145,
190,169,56,225,183,135,86,17,199,7,43,71,106,202,74,128,40,8,187,63,232,114,169,170,41,107,118,19,218,233,250,58,96,40,122,43,99,171,7,1,122,77,16,158,163,103,201,109,197,44,77,198,116,177,24,85,24,242,
141,22,238,10,29,244,24,177,7,251,88,175,10,171,142,193,180,154,232,53,201,132,58,172,254,6,209,136,254,254,213,0,251,45,32,33,232,87,195,208,238,113,84,90,72,51,197,206,245,56,54,102,88,238,255,128,151,
40,14,142,131,221,193,124,157,2,163,64,252,31,76,234,24,131,17,163,60,6,155,196,45,163,240,112,37,12,10,139,52,70,195,229,65,64,40,142,63,81,247,165,7,176,180,32,94,47,26,191,49,201,152,144,139,24,7,199,
30,189,141,61,173,143,122,2,182,228,127,234,103,1,38,95,127,250,121,144,23,162,146,114,184,178,196,86,7,176,152,162,174,237,227,238,218,141,39,132,248,17,15,138,221,29,71,238,59,61,211,229,151,95,76,89,
123,115,143,139,32,158,236,152,145,32,59,18,170,254,30,148,25,155,161,151,240,174,56,42,249,51,135,8,83,95,47,220,87,116,112,6,227,188,140,57,221,130,155,138,161,42,196,168,12,195,112,26,225,84,120,127,
27,168,72,72,253,21,147,170,3,77,216,157,100,178,225,207,33,77,53,89,135,82,221,125,77,37,27,233,216,145,167,163,25,233,76,58,87,137,28,88,49,88,217,184,198,59,143,25,60,40,241,246,53,160,166,122,61,71,
189,124,78,158,234,48,234,154,89,96,42,18,24,28,35,31,214,135,201,49,192,200,199,47,71,103,96,225,144,60,184,191,7,241,36,5,231,239,183,209,80,36,205,70,145,96,171,155,211,169,228,10,3,66,156,131,11,98,
134,118,202,107,196,252,153,156,31,77,255,253,33,136,137,148,210,199,239,191,11,5,152,231,49,239,122,194,49,156,133,199,93,127,253,85,50,38,56,174,221,104,15,10,90,168,200,45,239,239,131,59,201,222,239,
96,235,92,86,139,96,57,126,198,224,250,254,249,216,4,248,188,0,198,131,217,196,122,252,69,199,185,224,157,76,198,56,49,190,168,141,251,40,199,189,227,33,174,253,97,98,195,86,171,208,69,233,180,186,21,
21,6,26,132,148,102,38,206,228,164,9,159,189,123,242,90,76,248,101,63,20,51,245,171,142,250,175,95,133,249,66,184,31,236,117,198,229,106,82,107,214,237,33,8,223,84,163,158,61,49,45,250,105,198,209,107,
45,161,228,163,58,248,177,1,221,160,52,123,249,249,11,81,15,56,148,144,108,153,146,218,176,67,196,170,52,43,172,92,204,7,117,162,179,120,154,220,208,31,237,175,185,128,51,129,107,47,142,41,91,12,234,140,
73,96,197,242,119,85,106,95,72,197,52,24,125,114,59,129,164,3,155,113,168,0,30,217,226,154,52,173,149,80,3,226,194,32,69,152,32,26,234,184,65,88,205,209,29,232,108,150,139,229,209,34,35,96,55,88,78,175,
128,6,169,216,68,33,57,24,125,207,56,14,186,1,173,246,182,52,72,179,117,96,252,243,252,128,63,224,197,70,41,213,59,93,19,14,196,3,67,246,29,40,0,99,85,28,241,22,33,141,198,182,32,151,28,60,118,87,222,
243,251,207,127,35,172,19,173,188,204,78,201,25,141,126,236,196,163,48,212,136,137,107,246,176,130,236,120,36,133,85,27,150,227,146,13,77,157,247,15,110,96,138,48,152,231,9,239,76,38,190,175,169,89,184,
148,140,111,146,37,204,227,116,98,42,225,45,49,231,41,98,80,182,81,71,135,39,78,53,58,90,179,102,142,47,147,159,125,55,54,171,10,51,179,158,164,55,73,26,29,62,255,176,96,172,135,63,85,171,146,76,238,66,
136,94,245,51,56,147,86,67,201,30,209,66,177,2,36,167,94,35,204,100,162,21,206,174,27,71,176,123,152,210,20,113,130,216,75,211,72,18,128,226,31,102,143,196,24,54,50,78,56,167,49,241,1,197,200,11,15,145,
16,94,230,134,37,62,68,215,207,195,168,3,98,9,210,69,208,229,197,67,12,227,41,18,219,167,6,145,9,3,197,240,13,22,214,68,132,234,234,12,141,169,138,126,166,218,107,30,193,60,192,92,132,4,244,156,192,22,
201,51,52,36,229,163,79,100,130,197,10,201,137,94,19,159,245,254,31,255,193,239,132,119,61,204,181,196,103,194,91,133,14,190,62,163,208,144,132,157,202,203,18,202,178,7,44,46,203,226,152,195,113,140,248,
88,107,150,6,107,155,196,22,48,216,81,201,1,109,237,151,159,169,250,161,102,53,97,158,76,114,144,144,189,191,141,100,105,84,216,204,11,101,93,223,168,66,141,230,50,119,15,160,52,82,205,123,128,3,2,118,
12,99,131,147,161,39,118,37,74,181,251,204,112,131,39,223,224,112,186,246,141,242,45,55,150,228,163,179,91,131,163,226,199,158,41,216,146,21,148,113,66,80,122,199,115,142,142,93,163,12,231,209,14,225,
99,36,180,204,99,117,179,127,183,159,105,244,125,107,132,221,158,54,66,52,155,140,216,229,187,66,197,138,250,16,229,4,222,86,52,110,14,162,158,192,17,215,79,2,231,79,233,15,170,228,133,221,189,72,242,
46,72,173,65,237,74,150,213,195,3,165,82,134,69,242,217,144,53,79,35,193,64,243,152,24,63,87,19,66,154,193,230,110,184,215,47,163,23,104,16,59,240,245,72,84,222,84,221,33,48,62,57,91,246,24,188,236,97,
74,163,201,205,49,246,20,45,168,56,250,253,32,216,31,207,35,237,179,66,22,207,150,196,181,147,217,228,194,194,237,251,239,58,149,92,171,14,216,137,149,39,196,125,100,12,73,193,162,204,46,50,48,33,145,
82,136,200,29,34,61,204,171,176,212,106,79,198,114,163,231,155,11,163,116,249,212,237,41,201,177,29,88,239,97,252,167,7,163,102,78,165,56,184,142,205,192,54,226,207,228,246,102,58,170,69,142,4,69,8,10,
172,162,79,232,250,105,72,68,66,168,128,36,18,131,245,196,64,157,148,146,212,107,167,16,179,214,137,126,88,198,165,101,77,14,158,163,231,225,188,171,203,174,88,177,85,198,41,202,23,118,16,134,53,81,14,
57,70,139,192,128,81,205,192,81,98,214,7,75,127,167,70,211,129,157,77,58,212,69,61,52,236,20,180,70,205,169,49,170,50,110,136,119,6,218,239,154,241,233,4,136,180,54,120,156,249,50,200,2,49,226,12,198,
196,164,160,234,136,96,214,110,111,247,92,223,102,156,152,203,24,176,30,9,79,24,37,143,50,54,252,139,141,67,248,8,94,119,117,162,97,194,202,242,254,73,253,58,136,129,145,145,190,93,76,245,83,131,213,229,
203,79,233,254,199,31,233,173,39,53,247,63,191,186,180,151,216,241,71,111,26,242,45,80,47,68,61,27,70,55,75,50,38,50,229,183,95,127,25,92,73,102,237,102,57,105,18,90,25,217,118,8,244,163,6,127,108,86,
175,192,115,33,174,108,127,130,77,17,177,245,247,111,34,195,88,147,156,112,153,91,95,34,92,18,198,43,241,213,200,7,248,125,72,122,238,230,134,174,179,178,230,126,244,227,25,93,237,165,35,65,102,241,193,
29,139,167,69,43,174,139,74,201,205,19,43,102,83,24,47,14,127,122,70,163,144,195,229,205,210,172,186,6,204,111,229,84,41,87,99,72,57,147,5,236,158,145,120,115,215,26,99,70,106,76,78,204,156,66,138,15,
187,248,182,203,171,74,196,83,243,16,213,129,40,90,22,13,211,252,65,77,11,104,76,82,16,47,145,62,117,157,213,253,200,145,32,234,163,14,174,29,147,32,185,0,129,204,110,215,141,152,88,241,218,44,205,198,
217,25,169,101,165,203,146,249,240,222,64,192,176,100,160,24,66,23,67,42,226,253,177,119,199,36,221,72,250,8,247,184,207,39,104,112,172,133,95,45,99,104,175,157,201,161,252,153,30,149,104,130,239,83,163,
79,246,199,204,241,167,24,80,93,135,223,221,27,147,73,62,14,222,231,81,110,163,59,179,7,230,122,104,209,82,224,120,154,112,20,177,210,74,15,29,48,13,13,23,94,212,18,129,33,36,43,58,99,37,78,168,170,154,
250,192,171,143,226,18,154,70,230,211,182,224,162,34,116,192,243,218,149,140,161,170,21,149,163,229,231,55,133,5,23,85,216,14,243,38,96,7,151,171,186,50,121,31,253,181,96,7,33,84,57,35,254,143,100,205,
70,189,116,163,111,209,205,136,57,209,187,251,177,99,10,237,228,218,100,80,156,178,225,137,192,47,213,35,110,186,147,117,112,230,44,128,153,11,130,18,152,39,51,68,83,61,39,181,66,43,252,219,55,121,66,
171,128,69,102,72,67,129,231,181,152,192,241,85,157,122,124,72,253,166,148,221,174,124,63,155,215,55,129,226,60,242,60,140,61,202,131,17,167,6,143,145,25,188,219,77,73,120,120,123,42,11,154,65,77,46,159,
239,155,13,102,96,204,184,230,141,135,129,242,222,236,18,35,42,46,132,126,88,243,94,120,29,240,186,215,159,190,208,40,201,210,113,194,196,218,59,99,204,153,39,1,13,248,23,177,127,214,254,153,139,73,39,
140,59,61,0,97,50,250,33,172,86,153,43,54,143,132,187,212,24,135,215,55,131,244,179,137,17,193,30,154,173,253,25,76,126,192,85,37,53,247,178,91,225,228,237,109,204,129,44,238,223,103,21,41,219,43,91,253,
164,89,156,139,4,147,162,82,51,226,235,128,247,8,105,97,93,92,5,211,244,224,202,184,148,195,99,217,207,179,74,103,40,144,151,152,30,98,201,150,24,225,76,76,213,163,149,199,220,108,170,100,48,174,219,8,
189,80,180,105,151,170,68,16,115,99,34,4,128,208,208,58,111,36,195,94,210,118,10,233,223,45,206,20,131,45,147,71,224,101,47,174,2,103,197,131,34,45,204,110,165,85,53,70,164,214,55,178,201,81,193,144,90,
69,51,127,210,85,25,151,216,0,110,75,90,100,121,204,214,14,93,68,179,115,8,102,187,55,90,125,206,203,16,42,160,81,76,22,25,176,244,96,76,211,165,246,101,143,139,149,12,10,223,252,244,183,127,127,176,224,
173,229,195,205,171,145,128,78,238,10,181,219,69,211,83,107,48,201,198,55,245,154,227,59,16,126,80,212,212,78,96,250,164,33,243,18,192,239,255,70,178,218,189,119,66,92,238,54,90,226,180,187,133,194,8,
227,101,22,15,78,171,165,69,108,25,112,88,138,166,177,34,104,12,97,15,226,83,24,55,222,115,184,109,35,154,237,170,197,106,113,13,161,178,22,130,181,64,21,152,140,126,186,240,68,34,61,15,83,207,170,112,
205,98,162,70,96,187,20,55,64,172,233,251,59,76,250,110,38,128,111,155,244,3,216,244,104,10,101,11,121,233,232,251,46,6,57,99,212,70,12,23,159,56,9,66,89,84,243,232,14,24,22,42,64,123,16,64,41,8,175,129,
155,5,94,2,236,143,190,224,234,143,254,195,58,224,231,224,9,178,253,193,68,208,211,108,151,49,253,118,146,222,54,52,194,195,219,53,43,5,195,59,65,200,138,76,23,156,67,203,201,12,84,97,135,56,129,209,86,
203,135,93,52,49,45,50,241,128,114,8,74,171,65,69,165,67,64,28,61,124,152,63,93,30,188,208,162,240,99,125,255,52,12,61,36,145,171,55,26,51,221,85,163,253,152,12,61,13,66,74,6,217,39,31,127,60,254,87,197,
164,113,141,98,1,137,93,195,214,5,3,226,236,141,110,26,211,199,58,56,107,198,55,135,28,193,88,234,107,251,207,63,120,61,48,112,92,55,122,141,104,144,230,25,192,96,113,180,139,221,175,146,234,233,184,181,
122,136,214,128,198,204,181,140,150,146,201,85,178,108,166,125,196,248,205,243,53,201,22,122,67,71,231,117,180,212,182,244,24,133,66,68,102,81,114,183,25,242,169,49,59,60,166,18,155,16,60,89,209,151,164,
225,49,227,26,253,40,128,73,56,199,239,28,67,32,185,99,44,117,82,61,83,5,193,251,70,110,159,152,55,216,189,248,160,43,226,27,4,204,80,48,107,154,162,5,247,78,42,215,85,37,62,97,127,38,54,123,122,234,250,
73,175,107,150,36,137,221,137,133,166,84,160,233,95,56,174,144,72,156,33,14,229,152,7,96,46,51,98,143,46,102,249,12,153,180,203,104,209,118,17,42,102,65,10,134,129,34,185,192,14,120,251,245,215,244,76,
78,193,81,92,124,100,101,51,207,169,183,4,58,27,64,117,212,206,89,94,52,190,234,1,165,179,201,193,193,114,98,230,107,66,11,171,49,253,245,56,226,149,136,73,109,45,57,142,3,124,20,178,42,117,15,98,238,
233,53,215,145,44,218,153,120,1,106,78,91,135,202,26,167,254,26,90,35,4,196,62,252,221,221,156,193,251,20,62,41,58,97,123,144,48,204,136,154,252,252,71,219,177,9,34,17,82,192,251,77,134,228,146,157,0,
25,77,78,102,38,223,203,20,202,26,230,154,106,110,186,72,23,179,189,241,149,221,12,101,204,101,111,78,174,230,208,167,140,113,190,153,66,161,153,217,17,245,119,102,77,114,0,93,158,195,56,119,121,67,197,
125,19,227,81,234,62,246,69,102,154,143,216,198,202,117,145,69,19,238,160,190,183,98,63,10,150,26,92,142,186,119,36,61,217,35,134,169,115,9,104,2,217,240,207,191,48,196,192,174,198,104,185,197,165,71,
100,127,216,28,36,15,160,220,245,54,61,12,197,137,79,232,144,135,222,192,178,170,214,76,33,1,98,166,58,190,38,119,73,210,115,152,208,139,135,135,56,24,113,26,245,125,76,17,107,30,112,207,202,13,244,199,
221,49,136,207,68,40,145,204,39,61,76,148,192,166,187,245,140,124,117,163,26,67,13,156,60,17,131,97,8,64,207,220,113,15,72,182,72,178,77,223,236,113,39,139,196,78,170,158,244,231,128,117,81,75,66,85,77,
188,111,206,143,223,255,233,236,92,27,152,172,44,179,118,102,75,176,136,208,161,248,157,96,56,202,151,20,144,85,25,182,154,124,92,173,12,50,10,10,49,29,132,173,47,39,19,178,247,127,255,247,254,29,58,49,
202,251,69,157,4,199,49,166,239,226,51,66,168,160,206,33,203,178,243,116,227,81,142,19,132,211,208,188,201,48,0,22,191,15,163,100,130,103,29,33,62,100,232,128,91,200,170,154,80,145,67,165,194,199,2,93,
47,58,23,147,230,14,54,239,186,205,21,132,118,186,61,243,237,141,11,20,51,91,210,83,239,12,22,119,118,219,41,188,40,219,74,23,141,75,142,146,215,219,191,255,141,37,51,242,48,145,85,183,69,237,180,179,
118,240,228,99,7,144,13,99,65,194,69,110,7,240,241,26,71,241,152,171,56,68,244,97,136,231,24,85,140,49,26,244,218,238,206,92,92,81,33,207,17,9,88,200,186,208,147,251,40,114,101,2,208,216,233,77,25,74,
115,248,188,116,213,12,240,235,207,63,137,220,96,67,230,64,78,151,255,200,131,68,73,210,210,40,44,199,246,239,254,246,219,111,66,57,216,125,104,149,221,150,135,166,121,245,72,65,120,93,92,159,36,109,118,
247,0,221,136,11,231,72,70,205,166,39,230,123,81,105,151,101,94,32,7,165,90,108,235,141,14,38,250,163,192,142,202,33,85,99,36,5,241,254,229,243,23,85,141,88,134,116,163,160,51,232,208,85,194,230,221,56,
226,57,83,244,140,168,8,174,167,74,36,1,153,248,189,219,197,50,139,59,113,51,76,132,161,85,179,153,94,190,193,50,152,227,213,13,241,96,165,48,89,192,221,95,68,56,69,91,89,118,207,46,155,149,128,133,125,
136,253,13,212,8,6,194,246,136,220,6,8,63,25,130,160,103,177,150,14,107,175,33,75,66,25,148,197,101,174,99,180,102,158,132,145,166,209,223,19,242,124,35,137,113,133,130,71,43,187,30,203,160,216,69,86,
158,29,103,198,49,165,90,117,25,156,80,100,213,161,111,20,71,63,167,77,236,225,69,151,1,17,13,229,13,92,91,217,134,215,76,238,248,148,202,196,50,198,144,68,140,206,60,154,161,136,26,225,14,107,66,106,
124,116,247,96,156,198,171,7,15,201,60,224,160,151,238,53,213,84,182,48,65,121,8,88,45,244,86,100,91,129,169,244,253,195,27,189,27,149,135,116,22,75,198,156,150,140,102,63,254,238,86,23,198,148,110,210,
195,239,113,237,110,69,65,88,130,89,62,17,99,170,124,171,236,25,215,192,170,211,124,140,25,61,197,21,52,22,58,154,116,215,145,44,159,49,95,73,237,140,66,58,178,70,41,178,194,83,53,107,137,195,93,179,78,
102,142,60,196,201,22,154,49,49,52,52,98,178,201,32,250,226,146,219,221,224,106,50,35,69,195,120,236,49,57,176,29,180,174,70,108,170,125,221,220,18,123,149,88,189,107,210,217,56,93,52,143,101,107,13,133,
126,16,216,60,44,213,33,155,235,239,147,168,128,60,17,213,26,162,250,224,130,63,251,148,1,179,188,127,26,34,77,108,95,184,106,188,8,171,27,238,88,44,193,254,118,91,48,143,123,150,254,236,1,250,53,130,
241,19,140,152,188,148,209,31,141,7,117,248,228,96,204,237,132,171,60,9,137,134,244,72,144,12,130,184,81,99,254,185,235,199,170,255,106,36,51,97,55,39,104,147,171,38,216,244,64,27,98,138,27,19,19,171,
205,205,198,6,87,23,4,36,1,221,216,61,137,227,95,216,167,184,151,7,123,111,76,66,185,40,17,153,60,138,26,107,203,106,13,209,128,15,169,127,128,68,179,171,79,42,89,131,178,56,196,66,60,134,4,42,236,68,
3,82,39,78,163,40,110,115,193,231,76,38,209,80,33,3,14,206,131,176,178,201,202,161,254,129,198,177,11,226,116,27,254,110,222,45,238,119,137,49,120,236,71,49,86,185,24,139,140,24,44,121,224,14,119,120,
145,23,35,16,27,45,11,69,199,45,89,41,28,101,1,106,152,168,241,17,91,197,88,147,228,215,135,78,55,135,95,110,22,157,71,79,136,231,47,114,164,27,147,5,73,206,77,214,153,36,1,212,106,98,252,222,162,132,
133,250,142,236,143,158,7,207,50,226,63,245,11,93,134,122,112,114,45,29,222,50,100,155,163,239,38,136,171,145,193,199,184,232,248,124,54,120,17,159,214,104,187,101,157,226,249,120,80,85,247,214,8,173,
12,11,157,41,13,224,61,226,182,70,2,181,90,10,146,97,45,38,31,206,248,145,81,171,34,148,135,188,204,132,120,190,111,160,251,159,127,104,228,200,36,124,244,60,244,156,144,245,23,211,208,226,62,112,156,
115,102,142,167,47,96,61,239,191,255,46,162,6,226,228,44,37,221,98,17,88,110,126,171,160,180,39,245,142,84,131,145,36,214,249,244,246,54,16,2,10,177,194,33,245,13,188,122,162,5,12,28,199,242,228,83,165,
121,28,34,208,137,237,251,198,100,120,105,115,10,40,146,170,24,64,27,202,99,186,196,28,45,182,119,86,4,38,214,50,121,68,2,28,167,6,164,52,170,67,101,129,148,44,115,226,178,37,58,78,15,48,15,73,146,211,
138,14,232,89,102,127,47,8,193,134,94,162,78,203,97,81,102,201,168,29,181,48,32,22,101,107,25,3,140,88,225,225,120,188,133,149,167,105,193,202,212,100,235,208,142,15,48,150,234,13,22,91,117,125,56,32,
24,100,237,162,121,77,67,200,115,118,143,76,40,188,5,100,18,28,197,102,133,141,50,7,187,212,147,87,220,227,196,150,83,79,26,206,46,215,70,101,132,175,91,138,117,228,149,88,213,26,67,69,165,86,193,4,49,
89,219,156,82,40,130,109,128,102,136,113,213,141,247,15,77,179,136,140,24,184,45,140,4,199,36,94,247,245,219,255,203,19,101,136,237,131,44,131,227,124,86,223,15,226,84,32,43,53,70,1,162,2,199,19,6,99,
249,116,223,44,11,91,99,40,52,160,226,127,18,197,186,74,0,118,18,229,44,58,58,89,62,62,61,226,25,211,124,156,44,35,182,45,77,140,34,42,166,144,125,149,72,79,203,238,65,71,154,206,90,56,215,103,179,184,
194,44,251,83,70,186,14,133,10,233,35,110,252,178,32,232,198,80,250,152,3,205,64,221,110,154,98,245,140,187,230,161,212,208,92,250,99,233,201,143,12,220,69,234,46,50,235,91,30,187,209,59,156,65,60,51,
196,197,100,92,113,226,233,161,12,37,197,81,159,130,197,238,5,130,215,8,213,93,104,32,226,56,97,140,10,99,47,174,132,244,208,96,49,156,3,72,38,68,158,210,241,56,138,231,240,134,94,15,48,165,39,27,36,13,
208,119,24,127,47,35,16,209,207,241,179,201,255,61,255,143,6,60,75,97,141,144,136,239,31,240,82,232,84,78,161,93,105,130,70,104,184,23,55,172,5,199,178,218,163,145,37,142,54,222,79,159,213,218,122,10,
158,219,12,130,7,117,112,55,28,19,109,134,139,89,242,44,26,80,180,161,9,147,102,187,238,199,104,236,202,246,140,37,244,72,89,161,57,52,100,33,169,47,94,61,240,159,37,232,64,61,123,41,54,3,242,105,228,
164,222,88,120,89,162,223,169,216,129,121,112,212,98,105,31,181,114,111,227,251,132,83,30,202,146,66,84,63,27,59,98,147,211,84,134,215,224,130,2,8,182,120,85,232,38,222,216,66,177,164,213,26,60,179,185,
126,106,98,146,40,104,179,247,202,86,167,157,221,92,70,93,110,195,21,204,248,102,197,81,145,192,132,194,46,133,76,61,189,160,132,54,144,21,24,24,128,135,76,137,119,185,40,108,194,61,97,4,236,175,9,5,179,
73,132,85,26,130,245,42,35,17,90,172,99,137,251,158,13,111,76,79,198,119,13,47,248,100,132,97,160,211,211,191,23,255,25,255,141,94,168,15,77,33,11,2,8,215,216,27,91,167,145,74,181,120,13,50,246,48,210,
229,93,83,120,113,125,171,53,218,179,165,6,89,140,56,220,79,101,176,254,14,117,229,160,37,134,100,204,26,207,161,12,250,26,101,10,253,89,28,67,226,36,51,198,100,179,89,240,126,87,241,193,45,32,44,112,
100,29,225,95,123,72,17,147,138,137,158,76,211,232,232,60,66,20,161,165,161,125,41,126,229,233,22,228,54,98,242,20,25,127,64,66,129,101,29,81,152,159,85,81,25,29,124,138,0,84,136,7,133,201,66,70,105,82,
207,5,92,250,70,38,74,163,16,63,178,193,233,203,79,67,123,80,163,57,20,184,71,177,255,116,67,125,12,169,97,111,201,69,117,237,98,240,124,180,221,22,97,104,172,38,56,153,104,42,11,168,139,16,6,101,65,213,
98,61,69,62,108,31,223,82,161,205,227,51,213,133,104,29,115,142,99,206,22,64,157,56,193,21,236,167,197,222,47,140,236,124,49,206,65,131,251,129,183,60,99,138,91,144,28,158,142,246,245,211,197,29,139,30,
113,242,166,78,201,102,81,176,186,123,19,94,27,143,240,224,15,16,167,69,67,216,93,76,45,26,116,79,204,190,255,253,239,210,250,92,20,227,191,125,250,149,163,248,150,69,115,43,147,73,212,128,100,152,204,
88,194,91,82,46,104,85,176,14,189,19,52,122,193,224,206,250,217,15,241,174,235,67,246,154,164,29,244,176,175,102,226,3,238,57,53,210,25,228,222,182,9,183,61,156,143,136,43,174,234,93,117,107,77,244,149,
195,131,34,251,222,12,95,105,226,152,117,98,206,24,79,135,212,124,19,179,37,226,188,106,197,139,112,229,167,143,240,149,224,109,12,217,44,196,59,153,161,226,195,3,70,33,7,83,173,1,1,200,234,248,116,92,
1,30,158,99,34,42,191,26,131,139,102,125,238,126,3,224,4,119,17,239,194,59,59,25,73,79,243,96,4,98,95,205,176,94,57,32,137,196,7,224,140,246,132,60,238,99,54,141,49,66,94,126,126,24,98,126,57,158,227,
239,211,139,7,124,246,154,139,95,187,60,121,202,120,111,121,241,170,242,76,111,170,2,57,148,88,220,117,40,207,226,228,131,3,152,180,161,89,23,118,204,203,99,207,49,42,195,146,245,194,6,57,244,180,47,158,
104,59,155,41,21,195,67,171,229,5,97,156,209,110,187,17,29,153,71,21,42,71,130,151,132,232,5,221,141,61,217,208,174,116,204,24,237,26,140,229,225,133,177,225,96,180,83,12,63,112,227,26,67,48,15,82,200,
74,252,86,130,240,146,214,185,132,174,38,236,203,66,180,37,70,180,145,78,228,52,94,187,72,51,89,164,77,35,97,77,0,235,119,67,3,179,217,199,135,111,144,137,79,21,62,198,193,77,204,166,14,247,95,75,69,22,
89,98,189,221,12,206,106,22,205,114,149,234,47,140,182,24,124,21,157,95,186,151,209,254,58,212,108,45,104,26,176,80,116,52,198,36,47,198,88,4,188,197,31,164,224,0,50,85,6,230,138,203,68,173,59,71,127,
185,148,123,167,97,120,175,255,77,47,199,240,179,135,156,94,12,239,57,33,202,47,6,30,49,169,226,248,50,234,202,67,70,198,222,41,5,171,202,205,102,42,247,225,119,98,194,103,79,115,144,204,159,226,197,211,
213,35,242,21,217,253,120,25,213,44,170,91,64,158,143,211,122,37,173,50,89,21,78,173,17,69,131,154,60,229,13,196,11,17,190,45,4,102,142,64,141,78,130,121,25,82,58,179,155,241,164,127,158,199,212,179,28,
197,146,152,108,155,53,34,165,152,143,59,250,127,44,206,155,76,136,126,140,193,11,53,217,232,16,36,87,48,63,20,30,112,52,244,15,222,61,213,128,180,177,238,217,144,149,19,10,48,109,31,25,31,233,101,163,
231,67,92,60,246,153,16,18,41,158,165,29,10,183,15,41,59,98,110,247,109,168,214,14,82,192,69,77,80,146,115,46,102,228,236,67,218,89,115,21,171,51,75,5,203,248,206,48,118,181,184,134,156,222,58,224,31,
38,65,243,3,70,49,15,129,70,100,48,132,127,78,79,70,22,198,183,60,25,93,123,73,122,94,227,203,215,152,52,63,197,162,203,100,238,98,76,113,53,182,202,24,120,185,12,42,24,12,104,102,75,197,101,148,100,9,
105,17,112,151,106,28,218,36,158,61,29,241,76,120,76,24,206,229,234,41,193,65,146,8,73,107,235,110,134,19,178,60,120,76,229,109,161,21,106,5,57,137,192,62,4,97,139,145,150,51,4,85,91,29,71,181,250,161,
170,229,2,39,122,201,106,125,124,114,38,226,244,179,157,240,57,185,135,188,4,145,20,198,119,122,250,66,49,163,35,12,144,89,21,10,232,111,239,234,239,38,141,171,199,19,168,160,4,123,25,23,3,46,156,85,116,
41,45,82,4,118,75,173,206,146,117,60,130,46,99,144,147,230,34,186,12,104,249,142,40,61,38,199,40,76,174,90,125,120,196,80,10,51,95,240,253,111,127,19,164,177,170,73,108,118,118,137,207,19,140,242,141,
240,73,176,205,69,226,149,170,198,236,81,32,249,201,219,149,129,35,60,12,236,249,119,233,229,56,86,173,247,95,189,229,179,167,172,79,6,190,62,121,219,22,144,82,209,81,142,107,37,41,195,164,229,228,147,
99,162,164,181,100,248,212,43,244,137,21,157,104,172,203,79,125,220,217,132,222,209,100,102,245,181,230,4,230,180,254,37,147,194,83,82,55,33,31,67,172,56,122,112,124,50,197,56,195,228,10,80,182,62,59,
9,25,38,231,204,238,26,0,72,126,90,220,10,149,165,106,124,185,112,98,237,225,46,73,181,108,0,15,103,115,25,114,144,93,90,2,12,37,183,125,172,241,147,38,121,245,120,137,121,128,201,84,102,237,6,137,56,
114,93,52,113,108,158,196,64,167,247,132,235,53,85,172,108,42,189,169,134,42,15,80,46,215,49,183,166,26,140,165,23,237,113,222,199,63,254,161,137,166,62,166,3,36,95,126,254,89,74,17,219,110,108,19,45,
189,139,106,217,235,229,193,44,79,106,109,61,77,78,101,191,79,76,198,53,121,119,249,252,174,235,177,42,91,244,69,203,51,77,172,163,63,27,91,196,133,229,197,219,61,31,197,207,71,116,122,50,206,231,223,
167,39,143,251,236,49,243,147,161,107,66,74,30,156,130,24,12,21,241,113,241,188,154,98,97,44,92,47,21,44,60,24,64,167,209,219,104,57,78,214,118,167,135,4,31,192,120,34,79,41,23,51,72,248,245,160,3,28,
201,27,213,52,246,49,167,231,112,149,167,57,196,10,153,193,24,216,68,79,247,93,66,92,40,67,227,121,34,158,228,9,121,74,250,135,34,180,158,241,136,231,113,53,162,112,196,196,98,135,140,236,84,152,133,180,
212,176,161,40,247,205,193,18,90,84,162,27,19,31,76,69,34,232,26,146,128,41,177,95,39,148,194,30,210,208,26,228,185,26,74,138,94,25,149,6,151,49,181,12,187,184,184,23,156,51,16,83,54,197,105,27,189,45,
177,163,18,245,139,156,189,79,11,27,150,154,71,114,48,243,6,25,225,93,204,26,122,102,115,26,103,183,208,242,53,179,153,210,158,138,69,154,214,80,214,253,87,47,153,94,60,227,243,49,253,156,240,148,191,
248,47,189,24,243,179,129,158,79,159,159,94,113,78,63,188,100,177,49,172,215,226,161,0,116,16,134,212,102,235,81,22,43,193,197,88,105,38,125,216,240,247,93,33,24,90,15,238,183,177,182,234,205,223,71,92,
77,3,242,77,73,232,246,157,161,16,181,223,13,168,243,148,114,79,82,107,62,110,173,128,145,172,169,20,70,164,73,100,194,92,103,151,132,209,169,24,12,250,144,6,132,13,129,117,214,60,73,183,122,204,242,98,
81,94,214,237,147,41,104,53,164,130,15,29,207,135,5,249,155,69,173,178,149,20,136,149,93,174,67,158,99,178,100,112,64,54,167,177,45,245,166,172,46,113,189,143,49,110,205,212,181,211,205,72,213,245,106,
122,200,128,33,44,33,71,125,238,55,29,93,197,12,240,135,70,186,226,159,153,45,164,141,141,254,217,176,79,112,33,73,187,63,77,187,119,163,84,100,153,132,60,166,242,47,89,117,24,83,123,241,106,249,5,16,
207,47,49,98,122,50,220,231,63,167,167,16,224,57,97,74,63,10,17,80,170,163,136,235,60,54,87,12,5,8,67,168,38,121,4,105,6,9,9,213,229,170,161,58,12,218,130,150,59,147,191,77,176,209,231,119,23,2,46,244,
178,192,47,217,57,234,240,103,168,37,111,234,243,7,125,176,29,146,110,25,115,217,221,90,177,91,240,236,49,203,221,96,55,181,63,31,161,67,56,169,209,215,62,187,85,217,83,37,78,143,155,33,244,135,103,178,
136,29,20,215,89,130,134,86,219,67,204,168,153,94,20,186,214,204,148,60,60,158,48,2,91,63,85,49,160,184,190,219,37,195,195,145,64,234,202,144,38,209,166,81,165,25,115,103,86,145,52,146,41,89,193,188,65,
118,94,93,77,162,76,178,7,16,193,64,197,28,154,134,52,11,196,159,98,190,98,168,245,46,38,167,134,172,92,178,10,24,222,187,88,187,124,50,251,221,115,218,135,33,157,47,6,147,95,18,156,215,120,241,245,200,
207,63,192,50,203,139,87,108,63,240,166,227,243,74,26,153,120,136,224,71,18,153,44,223,23,178,221,243,186,14,65,175,144,173,193,38,187,253,243,159,170,221,99,189,239,34,209,100,143,127,169,102,1,129,141,
174,89,227,141,48,18,199,239,161,247,28,167,37,39,103,52,183,239,94,134,136,66,242,188,197,201,221,160,106,30,92,4,35,162,183,198,202,30,179,75,201,9,200,7,90,169,147,70,87,139,20,46,99,189,194,240,45,
146,27,207,103,181,23,22,15,148,180,118,199,10,94,48,208,139,174,84,161,21,229,189,105,200,182,170,13,209,234,105,177,163,233,205,18,122,161,22,75,153,185,77,52,41,99,154,33,3,152,61,52,9,140,116,194,
62,179,49,171,167,113,200,108,147,101,91,239,99,244,7,153,70,80,193,125,123,27,186,146,161,136,161,201,176,179,1,234,108,6,76,140,64,222,69,8,118,89,146,176,134,39,77,36,39,32,99,170,26,26,232,158,146,
150,31,25,95,251,11,131,252,43,35,45,63,192,59,235,139,161,207,254,217,48,86,142,211,219,158,6,33,156,67,235,51,52,34,113,223,186,79,173,45,218,123,129,61,146,134,231,140,187,132,250,220,226,58,181,251,
108,66,165,162,184,130,180,65,103,201,51,113,118,74,211,168,186,69,40,8,117,115,83,18,171,219,139,57,191,188,127,222,149,245,246,125,140,69,92,72,47,172,244,222,45,250,187,81,62,62,246,49,246,100,237,
215,9,71,133,48,98,246,136,148,102,124,251,246,93,170,34,111,8,237,146,245,9,71,188,101,25,192,228,22,203,168,231,20,103,90,205,24,84,76,34,96,139,169,9,180,140,245,60,38,185,132,34,91,211,200,182,156,
210,24,51,114,255,227,79,209,213,208,51,12,207,184,75,225,22,73,205,65,85,174,213,162,0,194,224,216,70,218,119,225,253,235,159,172,189,159,38,80,100,207,3,47,158,98,17,93,132,179,251,112,88,171,223,213,
157,73,194,109,136,19,152,180,17,146,62,249,201,56,210,95,120,192,246,114,132,183,23,143,248,26,123,190,30,221,237,9,78,154,94,142,238,231,56,19,204,163,197,92,130,161,242,225,86,132,231,225,157,112,6,
76,16,23,53,155,181,16,145,26,227,175,37,116,219,204,238,71,17,33,102,53,178,53,214,167,5,25,246,60,58,19,61,163,32,36,197,145,187,229,4,9,108,91,161,227,142,158,32,43,90,100,15,145,194,233,121,115,171,
112,179,212,52,66,56,240,66,175,64,14,32,233,3,198,252,31,255,84,161,197,154,249,213,138,43,40,79,147,165,214,227,225,219,135,231,112,34,48,13,77,239,221,243,189,79,23,224,181,187,51,211,249,195,106,23,
0,90,177,195,56,187,176,132,92,191,58,23,55,79,30,136,138,69,196,135,167,97,136,16,104,74,161,130,198,69,232,49,197,111,191,143,153,55,27,41,87,133,217,95,54,105,55,200,4,161,203,29,124,67,9,147,234,232,
96,239,243,36,249,65,178,197,63,171,138,35,41,147,121,16,87,197,58,207,132,99,158,143,234,250,131,50,226,235,191,203,95,196,145,233,197,112,219,15,226,198,252,131,10,79,125,201,220,247,253,161,244,22,
28,206,208,101,143,185,60,98,100,221,229,76,236,73,47,159,62,15,93,37,26,19,146,86,87,208,40,77,99,198,123,208,249,96,72,160,200,133,244,116,117,77,27,102,21,228,24,14,9,32,30,170,121,72,40,135,78,134,
240,88,45,186,89,40,161,95,35,224,65,56,42,42,188,169,126,200,205,129,82,39,165,94,146,24,242,187,123,252,113,156,175,23,1,100,91,240,36,60,207,115,76,177,165,158,12,50,99,122,185,50,50,54,238,38,7,180,
217,59,118,130,196,157,17,248,221,3,129,38,119,67,46,65,2,6,181,254,207,63,6,206,21,204,21,114,43,79,97,142,204,240,220,178,0,106,25,98,144,105,204,63,188,154,96,160,217,210,80,143,141,105,6,209,209,23,
68,12,50,139,22,197,164,81,38,229,228,7,11,227,211,176,205,58,138,74,68,122,242,142,97,144,175,49,222,171,17,166,167,163,246,217,48,235,211,49,93,255,2,54,106,47,89,248,143,12,90,176,108,29,202,197,147,
101,22,67,72,95,48,207,155,105,113,146,89,97,163,87,95,203,91,223,200,209,242,43,85,225,85,106,195,230,30,60,203,50,106,54,185,90,115,137,160,48,214,70,37,237,62,58,74,171,73,201,172,81,199,0,210,232,
67,127,26,29,67,62,194,225,33,10,118,62,181,168,93,36,38,231,38,11,40,36,15,67,101,239,206,108,137,113,79,194,72,62,241,210,3,18,154,220,181,160,41,86,65,105,42,30,255,198,148,222,115,117,88,167,220,238,
22,104,223,199,131,64,76,115,134,170,239,228,153,217,203,50,202,120,212,201,230,69,43,22,37,12,97,97,127,144,81,99,162,149,148,124,147,192,243,156,199,60,240,211,234,12,146,101,22,57,117,49,187,135,250,
66,104,23,128,167,238,199,20,249,127,61,203,140,158,230,201,3,1,38,7,238,1,222,255,40,118,124,6,207,211,139,49,165,23,124,49,253,5,46,153,126,144,40,165,39,175,249,35,111,90,37,64,166,205,229,225,172,
184,167,35,36,83,66,27,104,19,228,19,3,14,198,180,47,147,127,115,172,143,25,92,161,94,210,108,68,48,62,245,111,167,49,17,23,39,34,12,119,253,242,105,244,217,144,242,71,133,187,131,241,39,133,94,137,190,
120,214,165,13,156,74,40,238,68,60,125,10,18,251,5,3,190,127,230,245,211,103,218,204,225,246,225,152,178,182,80,197,78,225,1,73,207,49,96,44,70,59,239,150,249,141,137,9,82,102,85,246,27,74,107,99,112,
187,143,0,144,51,154,53,122,26,60,30,169,107,179,59,11,99,242,130,52,98,162,108,24,115,6,121,252,192,248,214,101,12,162,151,136,148,100,155,147,33,143,241,141,237,1,47,160,28,57,121,180,243,189,103,154,
33,127,18,114,38,168,36,29,30,128,58,123,146,2,60,109,76,76,149,78,210,153,60,87,224,95,188,88,125,54,144,23,163,156,158,94,147,210,127,251,222,215,99,190,253,32,222,204,47,71,122,122,241,208,14,229,199,
120,151,98,109,74,14,63,10,81,128,232,52,156,44,1,115,62,70,4,6,4,71,9,105,36,66,167,21,127,215,101,112,68,147,251,234,67,252,107,212,176,81,73,162,234,200,221,178,212,82,203,128,231,163,54,188,187,27,
131,60,81,61,168,138,226,6,238,111,159,45,162,21,44,246,72,76,135,44,97,147,160,2,71,219,24,147,134,225,31,104,57,185,104,238,16,79,211,232,199,193,67,91,157,188,204,174,159,98,134,11,47,0,94,42,132,10,
170,30,106,64,16,33,110,10,193,43,86,26,136,79,29,67,252,94,13,253,199,147,80,233,197,59,79,117,108,246,45,3,195,42,211,227,81,85,233,84,174,214,254,193,159,154,134,123,168,74,113,28,150,240,155,198,28,
198,236,204,155,173,4,236,207,126,99,229,73,154,237,237,49,34,132,164,229,41,121,192,237,127,19,31,134,247,122,133,135,206,31,196,158,207,137,74,125,49,208,231,207,123,61,190,219,139,145,159,207,70,59,
233,196,90,44,71,19,2,173,147,219,19,170,19,73,172,253,197,19,128,199,76,116,116,7,246,117,249,232,9,5,71,235,69,246,238,238,204,105,48,238,215,49,244,41,106,220,1,253,80,192,20,149,35,235,122,146,2,184,
42,12,160,24,151,215,49,38,14,175,30,94,48,143,107,149,122,31,89,232,156,7,175,209,203,202,13,132,109,30,102,59,193,169,29,32,127,152,237,30,181,251,18,153,53,254,177,59,197,39,197,201,58,221,212,7,34,
28,113,18,95,2,80,190,56,150,168,102,243,16,137,135,55,4,84,97,133,50,49,111,204,34,79,109,100,247,72,98,234,77,186,234,135,105,105,33,112,154,93,163,157,60,34,163,222,36,254,73,66,198,186,142,196,41,
74,137,210,194,89,45,52,160,158,107,226,100,238,38,140,4,43,63,177,167,133,151,86,210,212,94,227,186,103,3,43,47,85,152,252,255,99,108,249,229,136,78,47,222,240,21,18,170,47,85,159,48,234,99,171,143,161,
82,49,21,131,6,119,19,50,97,111,8,165,97,148,3,71,107,138,167,72,160,143,103,138,210,100,64,118,118,12,120,63,99,190,83,189,53,65,198,37,185,119,219,71,246,204,81,216,72,106,173,241,3,228,98,132,11,102,
36,113,154,26,230,45,193,14,144,221,35,132,98,69,170,18,115,156,170,156,193,182,109,238,83,170,227,89,49,185,49,88,206,92,131,93,142,199,99,156,161,52,126,84,207,44,30,230,120,214,115,0,207,65,184,32,
238,231,164,6,148,52,196,113,19,199,38,107,90,68,118,96,94,72,61,106,172,53,159,158,88,16,116,49,245,140,104,166,202,110,42,25,188,43,23,153,173,188,158,78,213,170,213,108,165,199,88,204,179,99,85,225,
219,87,102,217,161,73,3,0,157,140,37,98,161,42,143,141,233,179,6,202,147,1,231,49,211,199,244,169,227,47,98,199,252,116,76,231,31,28,183,249,197,59,182,167,215,255,40,83,47,127,113,180,15,9,196,231,141,
49,61,70,215,5,167,52,91,15,169,122,126,98,36,52,49,16,52,196,110,161,111,89,60,128,148,4,9,156,96,86,78,142,169,108,205,60,77,74,221,28,234,209,167,72,128,22,73,253,235,174,151,135,71,188,27,78,170,78,
124,138,7,97,113,2,197,253,54,114,135,98,6,19,158,251,182,41,235,94,108,216,184,80,132,137,4,94,178,71,186,80,165,205,147,200,46,170,56,213,152,14,193,177,113,174,121,175,102,102,135,162,218,28,199,198,
190,123,16,167,102,119,51,153,184,91,205,149,85,153,77,19,167,88,34,187,179,44,8,119,31,45,13,132,0,128,173,193,3,222,247,65,131,39,73,24,128,225,226,74,15,119,226,33,161,37,159,143,0,227,99,68,30,0,218,
242,110,125,114,243,5,115,196,186,62,174,166,247,133,27,107,132,12,86,252,141,129,75,17,187,193,91,158,79,149,152,227,37,145,105,47,30,244,21,91,204,63,72,132,94,147,154,31,25,116,251,65,252,42,15,149,
70,95,119,12,1,136,137,104,68,52,128,19,207,221,203,125,59,85,204,136,9,13,193,170,159,204,230,169,77,178,134,208,11,101,220,169,106,14,214,11,186,72,120,174,112,10,49,83,135,39,139,103,30,29,86,193,195,
60,70,80,218,234,254,33,152,9,140,35,151,133,179,71,35,75,141,36,113,12,54,187,23,144,205,91,52,139,167,157,103,163,39,138,70,192,17,76,106,166,163,108,57,42,131,155,38,222,2,231,68,142,81,36,122,81,158,
143,166,234,126,104,205,166,204,15,134,182,113,64,208,220,179,33,10,182,87,226,166,44,29,24,138,13,20,87,114,91,194,188,74,187,60,89,184,224,248,16,167,146,178,226,158,52,112,235,241,207,190,107,241,176,
235,34,232,14,72,138,124,191,203,197,154,143,211,232,213,70,44,114,68,231,157,39,97,169,36,183,208,106,6,235,250,105,220,29,226,77,236,250,168,78,221,183,58,240,194,244,2,106,255,40,107,62,95,188,94,123,
249,125,125,137,45,159,255,60,159,94,115,190,24,252,25,6,139,77,178,31,30,105,92,5,152,23,177,177,212,171,126,168,82,182,237,30,148,42,162,134,200,19,109,140,239,139,62,27,180,83,224,148,209,169,164,97,
83,212,99,215,240,196,180,124,249,172,50,223,93,200,5,140,152,98,2,159,191,168,43,149,149,164,153,107,169,35,126,211,148,179,152,213,141,231,134,19,211,35,102,112,234,177,35,212,67,86,3,118,59,221,39,
159,141,162,112,250,91,8,244,27,135,229,148,100,56,150,203,229,177,198,103,85,70,69,207,72,145,128,101,40,56,68,7,99,65,57,210,131,160,176,56,240,57,83,0,228,20,95,79,244,134,212,202,6,67,221,217,120,
72,1,170,235,78,49,36,43,21,0,184,223,165,71,57,197,248,96,120,8,12,147,103,255,205,60,186,248,54,82,165,110,58,210,123,140,89,217,130,251,38,40,168,213,161,15,222,134,40,71,25,173,162,241,208,216,110,
48,61,112,74,176,191,155,61,228,249,3,79,86,127,224,13,235,15,142,238,87,176,189,189,192,77,233,7,73,208,107,2,69,142,67,32,12,110,17,33,83,255,56,71,194,19,61,69,76,108,220,205,25,113,121,204,1,154,141,
95,50,38,244,90,204,62,250,89,153,185,174,67,13,5,235,28,218,234,236,8,232,70,178,178,4,252,157,71,57,217,89,167,16,11,178,175,16,59,254,249,39,139,39,180,147,73,210,54,40,164,64,129,111,181,112,2,251,
185,157,93,223,163,245,226,144,0,3,49,74,207,101,143,147,141,58,250,183,155,39,147,68,76,25,154,52,248,37,107,157,77,231,63,133,135,38,138,92,229,101,29,73,13,219,38,0,126,82,112,234,155,166,178,206,154,
25,222,220,159,129,236,240,132,134,144,13,131,158,206,67,53,163,89,141,49,162,221,118,181,170,108,20,232,15,115,252,170,155,167,164,216,182,16,68,39,180,83,165,9,142,4,236,198,178,229,42,136,196,58,138,
167,135,115,110,126,88,124,120,33,237,79,97,171,227,95,140,106,254,65,162,146,95,32,160,244,23,201,204,95,121,214,244,2,166,63,255,252,248,1,16,31,26,68,195,81,108,42,255,85,207,65,39,115,232,20,176,173,
118,143,205,28,199,72,34,178,5,34,140,201,34,118,255,250,213,48,220,68,195,165,161,59,161,205,214,144,140,94,27,156,62,167,251,195,17,247,83,188,193,202,35,209,18,205,186,56,116,139,236,104,36,255,29,
74,199,27,49,110,94,135,161,65,36,197,139,199,30,50,87,105,15,231,87,61,84,42,102,56,82,72,45,112,74,122,37,203,177,205,49,137,213,101,199,48,146,100,237,155,234,248,132,36,81,235,204,84,7,219,188,73,
236,96,146,49,204,14,247,98,147,147,231,93,196,32,222,70,66,140,107,28,61,226,220,197,68,216,208,111,100,143,142,85,37,216,41,233,54,205,80,171,93,56,21,161,13,221,75,74,202,144,20,178,211,115,199,0,42,
141,108,222,133,195,185,255,33,18,141,227,233,104,221,95,146,151,250,98,112,245,47,226,197,215,132,231,124,250,204,231,163,253,252,171,207,183,206,80,196,144,44,106,184,140,40,190,233,125,136,65,12,97,
44,243,66,61,225,83,40,202,247,27,197,88,177,73,37,209,173,132,101,138,150,133,85,26,231,17,242,144,130,184,172,67,181,13,33,88,118,191,77,113,158,192,86,102,227,150,164,29,146,5,182,171,28,141,36,38,
196,16,234,99,100,34,49,208,34,161,171,49,51,146,167,162,74,207,44,106,36,103,232,158,123,201,118,141,228,78,67,10,164,90,90,25,242,108,205,55,56,230,49,103,9,167,134,100,8,43,4,158,151,82,92,160,47,204,
162,239,92,116,196,11,49,161,33,122,203,163,241,94,77,77,117,236,94,102,209,224,99,186,154,192,54,207,203,101,232,20,177,141,52,58,242,234,49,230,191,128,109,66,192,183,191,151,0,175,161,159,221,172,104,
66,80,31,146,205,11,25,60,138,145,222,239,238,242,123,192,63,207,30,111,121,50,162,243,7,199,117,120,208,227,47,60,232,249,98,172,245,47,48,206,41,54,4,28,63,102,215,184,53,56,32,52,202,231,121,208,103,
120,81,145,90,54,134,46,84,190,176,148,94,140,0,129,103,100,179,29,166,190,5,205,207,189,246,39,181,37,175,68,58,68,135,59,211,133,50,139,98,130,49,145,180,244,13,54,0,123,106,110,247,65,40,206,205,26,
149,125,13,191,255,241,135,230,254,28,138,227,151,1,247,244,100,202,124,214,193,145,197,113,30,173,219,158,73,206,50,49,243,145,162,89,243,230,242,62,230,125,163,107,205,9,13,98,3,116,158,33,161,1,203,
163,25,215,82,129,93,125,25,248,251,25,138,90,179,188,214,25,186,216,118,253,17,128,135,240,83,177,23,3,13,141,42,97,167,40,84,236,176,99,86,248,230,233,87,105,12,2,133,135,196,67,154,173,72,38,65,80,
55,206,83,100,254,166,170,129,21,38,66,163,123,253,233,139,84,37,90,114,125,252,116,236,229,76,53,60,231,14,112,183,14,227,11,47,121,127,49,194,227,7,94,241,95,18,196,23,227,205,79,71,116,126,241,170,
245,233,253,251,147,72,1,140,226,116,226,144,92,70,220,62,164,142,198,44,214,170,18,216,188,163,13,101,17,33,227,8,248,205,253,224,154,151,249,24,166,42,193,219,205,88,237,41,94,2,226,73,148,101,187,113,
33,193,100,188,218,20,207,79,134,224,154,25,229,76,152,220,158,17,1,112,241,88,192,102,242,49,85,246,82,115,251,179,156,194,100,104,11,76,161,133,184,244,206,63,193,243,204,78,132,240,157,23,235,15,241,
196,204,86,242,197,141,221,119,213,84,119,211,224,15,55,177,179,229,245,48,222,136,120,228,174,226,62,143,73,136,22,121,20,9,201,24,171,142,21,150,26,125,188,146,101,96,241,29,206,196,118,1,158,73,201,
126,12,40,135,216,163,57,121,163,117,212,115,99,104,220,158,231,152,66,35,210,2,90,241,112,162,62,142,107,71,83,213,121,40,20,144,103,185,243,33,112,38,228,161,239,108,62,94,88,123,223,219,191,144,41,
2,30,74,47,213,150,250,226,65,159,141,172,188,188,231,120,137,51,207,167,247,156,175,159,181,159,15,164,160,213,97,116,148,67,177,242,69,140,176,59,76,130,230,241,109,242,6,249,165,70,62,184,25,190,127,
120,4,245,195,234,177,246,147,91,32,176,166,200,162,121,12,191,107,202,25,144,17,120,42,148,105,99,192,60,85,66,46,235,56,7,98,100,10,219,127,41,52,54,51,12,192,53,92,205,67,8,73,106,56,145,205,67,26,
238,155,137,55,17,6,24,131,157,220,136,134,205,247,230,190,124,14,23,125,200,6,171,137,7,115,190,25,87,186,63,167,89,145,13,11,176,103,177,136,238,247,199,206,105,22,212,71,194,255,173,39,28,72,233,73,
157,50,240,214,134,46,101,34,212,33,205,69,1,229,219,183,15,245,224,156,213,45,176,203,195,27,1,160,247,184,57,141,193,179,42,71,127,104,31,191,253,254,164,228,16,170,193,119,30,3,148,186,46,147,73,194,
162,240,175,20,32,144,39,192,53,236,31,210,44,10,22,59,135,91,62,169,91,164,167,163,117,122,1,183,95,255,158,254,34,193,201,47,94,241,21,136,31,241,228,153,134,17,28,172,87,63,36,25,9,229,44,83,186,127,
251,211,15,28,107,46,168,139,153,48,146,76,8,72,129,45,126,158,70,22,148,248,80,236,191,181,65,63,12,64,188,30,251,192,146,241,121,16,33,35,51,139,225,130,166,216,242,179,92,246,227,160,88,215,178,153,
80,149,85,154,66,73,188,204,249,111,63,73,156,107,147,244,15,175,11,186,77,152,117,73,79,94,71,110,1,167,114,182,136,253,155,39,200,9,69,96,246,157,164,212,34,66,198,93,233,187,20,114,77,252,228,112,246,
55,53,148,1,132,221,4,120,111,158,139,195,133,89,164,62,27,29,130,151,85,58,134,216,185,82,195,144,148,71,29,197,250,148,110,80,98,59,52,125,1,6,68,34,135,57,120,49,27,39,120,131,217,213,141,33,90,234,
254,30,140,251,208,131,209,92,108,169,48,92,30,67,216,113,220,53,61,108,120,21,60,220,221,176,80,24,170,32,23,33,12,194,5,251,58,212,255,182,61,226,240,127,219,147,145,237,63,72,108,142,151,204,186,189,
188,46,249,51,142,103,111,233,55,51,222,243,108,238,144,238,11,240,28,162,83,216,152,183,126,204,222,61,170,37,180,142,138,25,69,49,87,72,51,48,85,150,20,89,229,80,117,231,190,141,105,113,213,147,213,
200,250,177,23,157,202,211,176,80,67,55,49,76,139,172,46,135,94,60,114,177,80,235,226,193,171,19,175,137,6,157,52,130,38,38,223,170,200,98,129,84,199,195,161,199,153,221,27,94,173,129,89,250,195,154,220,
123,63,42,96,136,3,55,247,203,156,181,14,213,6,48,146,99,150,115,148,190,150,101,54,155,99,225,145,250,128,90,18,123,120,177,128,27,169,104,73,70,109,129,247,103,93,34,16,71,249,62,203,33,167,49,230,215,
2,251,240,26,192,217,78,5,255,194,224,52,5,55,61,53,174,163,246,171,106,195,141,127,87,185,77,34,158,176,74,150,30,139,90,118,199,216,20,51,96,120,44,61,181,97,184,197,100,196,144,199,15,42,51,199,75,
124,121,188,192,59,231,147,33,30,47,192,249,115,70,191,107,214,58,191,51,24,222,205,10,115,145,132,21,11,53,80,250,239,118,123,232,30,17,215,75,35,241,59,93,42,100,239,19,218,17,144,240,53,113,1,200,188,
199,186,91,164,44,228,0,99,246,142,132,33,146,146,204,85,237,199,41,164,194,141,180,112,102,102,84,140,154,105,142,253,189,119,104,172,3,84,191,72,171,137,99,73,12,243,141,88,182,120,58,7,37,113,10,91,
35,98,34,220,197,170,109,133,9,153,244,206,171,157,6,237,237,214,119,227,98,156,107,114,64,141,120,111,223,119,143,136,155,61,100,73,204,244,224,243,29,166,73,85,195,5,205,19,26,40,241,6,177,42,196,54,
135,98,159,102,144,150,98,245,30,68,30,141,102,53,72,2,103,29,25,119,178,144,255,238,254,28,246,138,123,54,78,219,3,91,59,77,137,43,194,75,7,237,74,176,83,113,155,135,96,44,145,86,79,247,183,131,119,73,
142,167,133,23,192,237,171,71,227,108,151,103,40,231,124,242,134,231,147,161,237,79,63,107,63,120,109,125,137,47,247,39,3,14,53,142,0,188,99,166,35,201,42,166,155,161,250,132,141,8,85,95,220,211,221,5,
133,120,45,147,31,246,235,204,233,227,31,191,137,108,193,73,15,210,216,188,253,243,247,129,5,231,16,149,240,188,71,234,73,34,126,195,102,56,130,113,158,60,114,164,121,130,240,49,6,24,112,51,88,230,102,
84,155,174,130,149,152,127,88,224,96,144,87,166,217,58,71,214,58,55,79,183,152,146,136,157,240,189,135,122,161,55,128,235,249,212,195,58,136,241,243,84,165,167,92,85,22,218,121,225,201,189,44,203,16,223,
103,159,135,75,139,108,163,157,52,187,49,212,93,195,213,3,4,253,142,157,126,104,122,24,171,44,151,165,103,120,95,251,145,254,78,175,203,88,6,77,74,61,67,99,79,8,221,187,26,163,138,105,114,205,211,194,
98,160,210,100,72,98,179,188,29,142,142,237,219,87,101,210,147,100,77,216,57,231,135,198,142,190,121,113,96,254,192,40,135,144,254,38,152,139,192,125,150,87,134,184,60,231,112,187,10,114,26,155,8,89,150,
227,133,89,30,208,197,254,23,85,159,231,178,100,123,78,118,54,77,225,170,166,247,181,167,77,216,204,254,87,89,84,164,150,230,33,75,148,130,102,31,140,164,87,168,67,217,47,20,73,29,11,21,49,120,245,126,
31,163,159,57,188,233,118,127,224,183,235,226,137,178,121,128,245,60,161,48,244,213,236,114,110,254,73,2,7,39,147,170,58,58,80,201,101,53,81,154,191,163,179,185,72,248,140,60,91,29,201,76,138,178,175,
105,158,70,82,86,76,2,199,230,89,45,116,75,242,54,242,11,92,119,137,186,248,51,151,174,234,130,107,196,102,78,86,106,85,50,208,194,53,59,0,166,49,246,69,155,173,114,64,178,60,103,50,206,163,18,195,201,
172,171,250,57,90,128,239,89,199,0,73,19,89,68,81,21,245,165,204,165,42,134,38,164,50,99,222,5,214,66,190,5,179,117,198,180,7,35,3,95,255,235,127,106,96,145,123,146,99,84,10,143,70,60,72,146,25,148,112,
157,30,95,124,184,30,28,2,175,236,41,119,182,79,90,24,128,118,183,55,239,79,71,247,51,238,120,123,138,49,247,23,239,250,90,185,65,142,6,248,73,10,106,209,119,179,153,128,188,155,193,45,78,232,30,153,179,
241,177,26,170,103,206,208,73,144,157,100,152,200,170,121,191,214,131,199,17,75,165,185,32,162,76,142,187,221,194,144,44,9,195,114,164,219,171,169,152,225,54,150,81,118,220,118,143,255,147,81,69,187,111,
61,206,33,39,115,193,16,85,64,84,46,91,134,62,101,244,10,81,128,194,212,55,214,224,109,51,136,81,185,49,83,208,34,61,220,233,148,58,75,137,243,168,184,199,155,129,174,27,197,171,171,6,68,230,163,3,205,
243,243,128,55,93,236,201,164,144,70,129,97,185,124,247,109,71,191,119,141,222,154,224,73,26,225,39,59,5,94,242,18,42,188,139,149,100,213,15,18,138,9,187,179,82,212,93,227,225,140,185,138,248,188,77,125,
38,228,28,226,72,222,31,68,140,168,38,225,120,87,114,115,27,67,217,69,121,83,255,51,251,141,220,78,26,236,28,9,125,14,86,215,191,120,192,136,13,207,23,162,240,241,100,152,231,147,49,86,139,57,112,204,
157,167,44,36,203,219,112,35,184,128,32,26,223,141,199,245,32,92,220,60,49,140,208,217,55,103,209,135,135,61,237,212,22,130,225,112,83,26,243,156,157,48,33,137,164,78,16,198,233,145,236,34,35,142,68,145,
243,54,93,108,8,17,86,117,53,30,202,246,125,221,149,100,26,151,35,173,145,9,47,13,26,219,236,190,114,158,72,41,121,32,65,27,211,54,206,212,172,176,210,198,176,211,106,232,49,187,132,205,147,7,168,65,8,
92,129,182,132,214,198,217,210,205,217,200,123,140,146,227,159,205,242,110,22,166,103,13,19,21,6,75,246,101,247,205,52,19,55,79,103,92,213,44,161,22,131,33,77,185,194,130,98,71,55,239,62,202,131,192,91,
30,10,228,147,5,7,66,142,152,211,7,16,28,159,135,219,68,37,37,242,253,183,223,169,120,75,18,65,59,7,141,139,27,232,56,61,121,55,13,66,2,135,37,217,0,207,72,212,154,142,27,141,247,61,31,213,17,200,53,127,
197,88,57,33,14,199,161,69,71,220,121,216,10,7,232,126,42,187,62,79,147,43,12,247,168,114,116,240,122,25,207,33,62,252,254,77,164,21,159,38,49,64,0,247,16,204,156,40,62,112,94,183,213,124,79,123,119,92,
23,160,156,104,238,58,28,22,81,235,28,199,123,191,151,111,255,248,135,78,32,247,196,132,30,253,189,135,82,236,159,122,211,72,105,130,234,12,51,242,16,0,75,209,191,127,86,15,202,202,76,100,152,205,175,
22,141,56,149,89,195,11,31,85,221,169,172,141,87,227,144,30,116,90,178,233,132,78,102,147,219,177,147,251,117,72,244,168,170,119,197,168,197,57,20,50,40,110,149,132,51,177,40,142,133,185,29,131,143,88,
61,114,24,143,128,153,19,42,31,244,170,122,255,110,190,223,5,177,223,223,255,158,86,204,10,12,42,26,12,238,112,91,238,155,186,20,33,146,58,207,143,77,112,90,243,122,120,42,27,117,113,77,156,208,147,219,
71,87,99,112,88,16,108,36,114,253,216,27,174,5,5,20,14,207,8,99,21,110,215,61,107,157,220,226,91,196,80,114,45,61,219,224,9,105,245,184,82,53,222,99,244,150,244,155,31,181,103,33,16,19,67,129,253,99,27,
93,120,167,103,5,221,191,111,99,184,17,229,73,110,219,128,165,66,42,47,42,56,84,181,112,217,83,180,189,205,204,153,110,220,95,191,11,60,239,159,65,3,6,227,202,140,111,169,172,57,59,54,193,153,115,186,
65,85,59,239,158,225,184,51,204,129,218,69,160,22,205,124,74,122,47,51,173,154,115,135,201,112,32,123,239,33,247,146,53,54,175,120,244,243,228,49,130,64,109,79,82,206,174,162,175,33,164,138,48,128,101,
228,194,35,152,45,18,56,242,155,112,236,152,87,4,61,129,54,117,227,222,132,125,158,86,4,225,212,239,102,45,168,227,140,49,120,242,100,244,106,85,204,241,236,126,112,126,168,189,27,227,140,212,60,184,179,
240,203,153,189,223,110,132,6,62,32,49,237,218,54,8,1,161,106,70,254,159,149,90,111,125,49,152,157,79,174,69,3,70,50,117,174,152,96,12,3,163,36,32,133,89,239,108,233,29,82,119,253,125,56,218,174,63,255,
146,92,218,97,102,141,114,25,170,12,154,60,38,114,241,237,247,127,74,150,4,168,194,154,153,221,174,158,188,64,229,157,126,95,215,47,63,13,184,106,255,80,251,5,142,47,40,226,82,151,104,49,112,31,93,154,
216,92,110,214,170,62,242,66,95,146,202,21,238,109,135,161,136,36,178,112,118,97,99,157,94,42,113,33,52,59,218,30,220,6,203,41,108,255,252,195,156,195,189,123,228,187,97,24,247,214,91,243,135,117,105,
191,143,51,122,120,26,121,224,167,121,6,39,197,165,132,111,78,33,86,234,153,221,52,149,89,132,90,118,52,158,154,42,123,222,79,109,56,122,216,254,189,216,40,96,19,2,74,50,143,50,52,165,168,150,113,171,
202,59,192,99,64,226,210,239,11,144,225,225,112,45,59,140,96,53,144,140,176,190,209,82,115,33,163,141,117,131,98,31,79,97,183,116,143,209,202,217,211,172,240,81,203,44,165,4,106,87,23,245,227,14,69,54,
184,123,55,108,109,31,183,161,87,142,221,135,66,252,183,109,183,76,223,254,24,209,107,90,26,2,115,74,16,27,15,155,231,117,208,162,224,21,168,35,137,57,216,85,68,227,106,21,178,80,241,37,93,109,191,233,
225,161,118,219,23,22,3,153,168,199,136,14,62,143,254,45,38,187,94,40,164,122,26,131,115,1,209,100,228,48,162,239,191,253,195,162,252,43,91,68,53,194,195,83,206,146,244,19,143,251,31,202,206,211,230,81,
119,194,214,36,135,93,60,132,243,180,148,117,243,16,80,65,43,155,187,10,163,38,189,91,96,128,116,58,123,234,230,44,152,177,35,202,173,69,211,23,62,254,241,119,38,102,65,194,136,90,49,78,135,219,31,170,
139,115,62,54,75,133,231,56,226,179,251,173,79,140,15,140,66,135,85,145,25,254,236,242,92,187,123,106,98,122,92,110,106,254,35,47,129,88,165,185,14,56,149,208,106,193,238,211,101,116,53,194,89,129,61,
62,125,121,163,177,178,39,60,218,29,102,143,31,129,190,16,60,126,223,228,23,204,242,233,6,63,103,79,178,205,105,8,225,178,71,220,48,160,70,43,59,13,47,190,56,212,193,103,86,13,56,240,78,113,22,74,97,167,
212,207,178,107,228,48,176,125,63,198,92,104,198,63,201,177,144,85,51,200,48,42,138,215,40,227,231,227,190,29,117,12,180,167,247,255,176,192,59,22,133,243,91,204,58,241,162,132,49,160,100,24,195,134,240,
217,48,4,120,122,212,136,80,217,40,38,150,204,243,98,210,71,146,177,86,213,242,239,30,69,140,170,80,49,134,167,144,69,217,127,181,70,82,13,69,14,67,82,247,111,95,77,19,147,114,69,29,3,167,28,179,25,10,
33,182,90,165,120,156,7,6,171,204,55,122,110,80,5,9,169,196,147,248,232,201,132,43,102,46,142,9,112,238,217,17,211,233,244,58,125,104,206,145,5,35,146,133,3,114,203,67,57,151,165,95,210,198,100,220,145,
248,201,123,39,222,107,118,152,129,42,75,192,72,116,48,72,24,57,3,178,9,56,199,105,246,68,99,163,114,27,231,255,40,212,154,127,249,50,240,207,217,237,25,36,131,88,102,154,128,249,52,143,126,125,218,140,
161,56,158,142,102,48,133,110,229,28,45,182,171,199,119,84,235,77,195,229,30,140,237,14,201,37,79,122,33,167,161,146,178,86,7,93,42,134,92,134,184,21,140,148,253,60,69,181,218,195,216,39,234,156,119,146,
72,205,105,164,78,229,187,99,44,203,78,103,193,81,92,48,96,103,183,219,168,36,197,60,151,168,210,136,53,115,104,72,168,229,73,112,44,179,37,35,40,255,41,38,123,37,30,199,44,47,166,54,244,23,63,250,209,
182,89,40,42,234,237,60,198,76,120,80,54,46,131,9,202,27,245,140,144,65,223,213,93,136,120,244,78,178,199,93,252,196,99,183,144,254,201,235,137,121,136,52,214,111,223,156,217,251,62,108,204,149,147,33,
84,211,134,193,33,20,249,206,68,69,211,28,142,239,186,31,182,30,96,179,242,152,206,99,184,39,25,93,61,116,2,236,70,236,176,168,116,74,113,43,132,19,110,111,13,178,199,59,198,83,247,235,214,4,141,201,93,
133,238,76,114,34,59,148,218,78,205,88,12,231,192,169,188,108,147,153,25,142,225,184,31,92,208,224,6,100,57,178,226,22,139,152,40,113,58,115,207,30,78,155,61,55,50,153,219,128,83,117,16,50,158,197,3,80,
207,46,49,29,214,132,7,60,36,128,157,67,236,50,185,101,213,199,68,182,170,214,238,81,111,152,138,26,184,86,140,54,153,12,243,32,86,210,104,187,98,101,95,146,9,245,59,4,228,23,13,182,20,9,200,58,221,6,
114,73,227,98,66,144,9,91,181,57,91,122,90,120,30,190,11,51,10,121,52,125,255,254,104,28,91,23,75,217,57,219,251,210,189,64,93,180,216,167,143,175,24,254,254,161,230,125,106,228,76,154,23,73,57,155,216,
28,24,211,242,231,157,99,157,91,86,71,97,52,218,39,227,139,251,237,155,146,160,150,134,172,98,140,82,217,190,133,234,112,230,137,4,131,231,212,224,63,53,35,125,191,219,176,154,229,12,205,53,96,162,201,
228,236,241,111,118,124,238,194,120,171,57,137,196,37,161,124,150,53,234,184,88,80,42,25,127,156,221,218,172,137,178,56,126,239,110,170,187,104,3,31,17,74,104,67,224,116,19,31,22,94,239,131,240,13,60,
47,99,119,108,64,142,83,211,179,69,231,226,97,35,166,118,17,73,224,102,7,121,210,90,242,38,98,127,85,140,99,193,51,200,167,7,136,165,199,104,229,234,105,162,205,12,144,72,128,148,17,183,135,132,30,146,
10,180,85,130,101,14,96,212,4,81,182,75,88,221,55,68,53,163,151,187,68,134,234,18,24,142,214,27,52,187,115,246,168,185,105,244,216,176,64,143,35,114,187,91,26,195,221,114,181,141,6,120,102,243,248,158,
143,232,33,169,99,124,30,31,184,167,228,242,120,130,87,252,126,144,146,197,120,229,178,186,193,73,213,32,246,28,185,186,180,221,191,106,166,225,77,77,253,249,244,172,29,123,205,96,201,227,90,63,64,120,
224,195,46,158,106,182,12,44,82,25,247,233,222,20,129,226,240,106,28,37,77,53,143,196,239,136,163,107,223,63,76,82,17,166,20,211,187,152,81,123,192,59,214,43,180,203,99,214,101,76,107,56,60,14,251,176,
98,178,106,230,127,82,34,16,158,157,53,240,205,201,11,12,228,208,53,162,69,186,152,217,126,248,4,58,48,228,160,27,199,130,112,172,164,1,151,9,119,156,164,202,231,113,51,81,205,195,188,111,126,198,46,146,
112,169,10,239,102,26,187,134,137,82,28,34,31,15,26,164,1,243,131,80,98,214,48,18,20,15,14,199,148,232,175,185,221,208,214,250,168,54,220,173,101,206,134,48,91,58,185,142,214,67,79,134,24,154,123,122,
217,167,131,210,29,98,208,239,55,198,134,52,158,155,250,130,51,147,41,41,169,237,38,227,18,132,95,151,49,233,12,73,84,46,86,223,69,178,128,35,13,158,209,138,105,49,223,145,170,192,33,17,131,6,182,245,
50,218,72,103,195,23,135,71,163,144,160,17,3,67,223,46,234,168,140,7,184,104,178,2,154,215,54,103,171,49,115,240,52,65,249,112,223,121,96,181,145,32,81,210,100,87,18,197,74,141,21,143,57,187,231,79,37,
97,12,7,146,142,60,6,244,214,1,21,137,165,13,50,70,241,36,5,14,102,77,121,64,93,192,96,1,140,71,114,164,248,114,211,100,88,203,207,36,171,231,194,19,99,35,221,123,114,132,225,91,215,127,251,183,180,35,
126,142,169,16,46,83,2,238,57,76,204,248,248,251,63,60,175,92,199,51,55,107,17,94,185,147,12,211,134,212,160,38,150,45,86,245,85,43,111,244,232,135,120,69,118,69,173,57,4,196,243,219,45,160,112,88,218,
122,157,175,76,112,64,234,29,58,2,246,228,108,147,64,2,28,149,11,193,59,86,99,176,74,107,122,170,101,70,233,174,88,209,127,242,152,100,182,109,70,22,135,163,95,109,121,67,14,57,58,241,88,74,90,84,15,157,
13,113,204,158,187,216,12,154,151,34,207,146,61,6,3,181,240,168,2,21,31,229,56,70,230,128,125,60,103,251,227,183,223,168,218,214,60,201,236,250,235,175,148,80,134,116,8,217,41,136,101,187,167,88,246,55,
6,242,81,171,7,220,93,186,55,252,176,22,55,142,214,55,224,123,56,158,240,186,67,160,111,178,58,68,120,75,78,102,168,30,36,239,207,2,28,22,245,225,72,112,68,170,148,49,3,25,102,197,9,10,186,20,170,50,75,
231,212,168,64,201,175,160,20,42,108,83,76,249,131,144,14,219,31,186,113,18,46,218,118,183,195,110,131,145,195,161,167,212,28,239,15,158,67,239,119,109,230,139,198,26,159,48,228,232,209,177,230,124,115,
43,179,60,164,160,166,229,237,234,102,188,58,166,4,159,14,19,146,55,186,152,90,147,153,253,240,150,171,167,201,137,59,73,124,217,48,208,65,96,188,135,84,55,53,144,177,223,175,246,235,241,36,99,108,64,
38,99,45,143,220,131,242,131,201,49,99,12,252,105,158,151,130,197,62,78,235,66,130,217,221,52,182,142,194,252,237,28,13,100,100,147,244,7,118,219,190,171,124,70,108,82,242,198,17,196,70,79,114,112,6,41,
108,229,233,182,7,167,54,184,6,157,53,52,138,187,15,139,191,36,185,243,178,154,206,38,86,10,171,50,125,49,97,124,179,123,135,91,11,9,189,170,81,122,147,70,41,17,111,228,34,45,122,191,113,69,109,52,9,40,
76,49,104,222,175,103,162,66,125,203,47,58,38,193,71,220,190,141,202,139,164,102,254,63,170,190,180,73,114,27,201,146,0,72,70,100,85,73,125,206,236,218,238,199,181,253,255,191,107,219,108,108,90,45,85,
70,4,73,0,139,119,56,34,91,99,109,163,42,101,198,65,130,128,251,243,119,140,50,230,58,231,104,46,217,176,1,18,18,92,199,234,144,130,211,10,75,44,50,250,147,87,29,183,11,221,65,62,5,135,44,157,172,32,148,
14,79,28,183,181,250,62,220,231,53,227,238,139,251,224,174,150,108,157,105,237,162,114,41,100,181,220,9,63,52,137,3,196,132,13,231,196,41,247,120,204,40,26,236,84,115,60,106,74,90,173,202,178,76,151,212,
2,45,176,83,148,29,145,161,121,191,205,17,44,153,253,191,234,129,56,8,245,88,106,194,207,191,200,45,101,93,45,215,14,73,176,201,190,30,147,190,158,215,204,75,191,60,160,89,163,115,186,141,163,45,84,101,
205,117,101,49,169,243,48,103,50,36,4,33,48,218,199,255,29,62,230,48,229,1,216,250,52,38,118,57,200,71,187,65,229,204,182,71,34,25,243,247,52,178,75,187,106,177,213,26,27,76,129,136,97,222,111,51,106,
45,32,10,220,52,212,45,209,217,169,182,251,151,74,142,234,136,98,15,250,207,113,115,63,254,246,119,5,159,111,251,220,29,115,125,83,248,57,251,13,82,173,111,68,242,245,104,167,109,16,205,1,34,59,221,221,
251,226,112,37,238,78,205,243,69,131,241,101,27,199,226,63,127,227,247,126,27,215,235,152,2,152,47,40,8,32,180,129,127,219,112,227,168,68,157,170,166,96,153,59,46,30,176,110,86,79,73,197,4,11,89,115,163,
196,168,246,22,175,244,145,191,241,250,97,199,59,76,111,35,156,214,5,76,247,172,60,198,195,120,110,181,188,117,110,22,222,161,185,97,36,147,134,233,125,190,205,80,81,66,123,180,0,23,246,139,79,206,230,
169,198,61,185,68,127,12,82,49,107,95,27,188,182,250,30,168,180,117,57,76,224,232,118,75,185,143,207,247,71,120,158,135,240,189,88,226,41,4,160,76,39,44,188,32,199,73,225,168,229,58,9,111,140,227,172,
217,95,72,65,237,105,206,154,215,93,81,121,193,163,68,167,204,29,204,131,250,48,118,79,158,26,53,99,108,236,248,79,237,222,205,2,51,192,68,96,173,23,67,65,154,158,124,114,136,159,221,97,99,167,194,145,
20,38,7,96,95,227,248,70,71,78,118,55,230,180,227,119,64,236,16,203,182,205,153,187,142,209,106,174,98,211,110,237,201,10,21,154,167,52,66,217,102,77,146,34,232,119,200,48,50,123,156,90,109,76,126,179,
143,187,169,226,84,147,72,153,48,198,131,85,126,76,135,109,85,210,38,227,87,137,237,92,99,95,34,217,82,104,103,176,157,68,6,236,232,191,253,174,99,20,15,170,201,13,188,119,240,241,121,62,173,147,95,237,
92,98,118,78,82,0,125,247,226,224,148,46,28,70,114,126,63,236,196,35,109,102,106,6,57,131,238,157,126,102,203,97,53,153,77,200,77,156,118,147,254,70,14,165,134,39,197,52,70,218,248,52,141,113,249,90,33,
201,253,162,19,219,13,63,78,115,0,102,33,250,162,103,119,86,49,199,228,4,194,29,34,103,152,6,220,249,6,89,5,239,113,188,156,207,210,103,184,121,176,144,244,133,87,57,92,192,254,237,146,215,207,25,140,
119,147,39,228,183,232,248,53,124,1,28,197,230,120,178,11,76,102,51,99,116,215,151,9,153,92,158,132,252,252,127,255,224,205,198,49,136,133,6,222,165,118,49,171,248,40,215,248,206,81,26,10,255,207,81,143,
242,70,114,145,73,72,117,154,40,66,179,172,151,22,44,161,166,180,88,109,184,16,29,56,205,240,9,243,80,137,188,228,121,4,95,119,242,66,247,149,181,234,97,99,87,30,235,76,171,117,180,135,197,249,152,80,
241,181,156,39,132,247,37,238,122,170,65,144,115,241,83,71,117,201,115,145,7,169,133,132,234,231,99,66,91,20,130,49,45,118,225,78,53,237,24,121,92,139,137,223,157,224,214,220,35,52,27,218,46,57,80,3,53,
178,216,38,40,113,168,142,212,238,186,95,188,87,94,224,139,229,50,75,228,101,226,126,143,191,249,70,169,139,2,102,99,183,189,195,204,192,136,78,113,182,102,246,125,189,194,224,42,251,15,249,146,52,226,
50,76,64,243,33,143,8,241,65,118,227,113,88,154,5,187,171,211,178,106,48,192,29,79,17,240,17,99,244,60,215,37,43,228,58,157,209,178,73,134,75,129,210,226,104,53,237,52,152,77,71,24,16,167,48,183,125,114,
30,23,91,36,47,14,85,199,255,219,191,255,50,227,122,177,61,225,232,74,142,82,193,60,22,71,85,118,61,171,249,109,88,91,63,201,182,167,219,28,147,10,20,84,122,61,52,198,68,51,19,57,142,217,206,186,88,192,
107,100,5,29,167,119,232,157,199,242,199,95,254,44,213,228,231,231,116,46,198,206,247,250,189,154,37,47,198,59,119,66,148,50,142,26,209,145,248,156,50,1,61,152,125,10,120,0,191,197,36,6,65,246,196,85,
187,229,24,64,10,252,89,34,253,130,139,240,58,125,173,204,79,245,136,54,140,24,88,134,173,155,9,19,230,204,190,234,27,160,247,137,55,59,105,155,176,42,11,114,227,194,196,181,225,174,79,38,209,141,122,
124,44,249,48,205,34,201,27,140,40,27,190,194,108,31,14,107,32,126,188,60,189,10,127,81,76,121,96,88,0,146,6,62,255,58,181,202,190,215,96,152,172,33,171,77,26,164,119,79,39,152,227,210,37,228,194,168,
137,117,161,107,51,78,48,236,45,216,29,246,20,84,181,96,211,52,199,106,112,44,102,202,125,178,15,122,198,188,61,146,76,89,99,42,197,129,79,52,158,5,74,124,79,142,61,233,160,143,167,235,163,240,40,102,
125,251,237,99,38,180,166,118,77,73,170,236,164,53,173,194,133,69,119,77,14,39,155,54,208,241,228,173,152,61,131,253,74,242,56,61,81,2,43,166,185,46,92,140,77,242,225,147,35,194,187,150,53,70,201,60,202,
93,55,47,157,50,163,138,29,45,136,29,83,182,81,101,92,37,247,10,179,135,204,76,15,111,247,141,14,106,135,137,35,227,103,126,251,201,99,155,11,204,163,82,66,110,158,154,68,216,64,245,16,36,140,251,73,6,
25,11,24,54,210,156,122,229,56,106,29,195,103,98,196,100,196,95,74,197,213,241,188,219,171,72,65,78,151,181,91,153,83,162,39,137,221,220,216,172,90,68,151,205,136,59,27,92,212,112,243,200,246,150,194,
189,246,208,134,181,237,248,197,147,179,27,31,223,196,27,171,142,225,194,46,172,217,219,229,98,71,213,237,212,90,125,225,9,127,116,25,18,72,161,86,9,243,220,96,245,231,129,124,159,147,162,42,200,195,174,
177,132,128,154,29,118,13,112,87,251,93,118,235,106,164,15,87,34,46,121,121,85,71,13,211,116,83,208,164,4,215,224,33,42,156,71,75,219,221,12,149,196,148,134,245,159,105,96,236,98,199,226,64,173,25,138,
70,66,39,60,150,159,239,113,37,22,21,106,81,212,158,78,197,32,110,185,8,104,71,135,30,159,95,55,252,65,170,28,249,146,24,61,142,159,199,152,112,113,180,29,142,254,80,78,18,246,137,228,86,74,24,110,108,
154,200,136,175,126,152,60,12,56,252,154,145,249,13,243,5,158,30,235,58,115,180,163,11,39,102,104,119,54,217,171,232,40,102,195,113,232,59,210,31,20,15,139,41,132,140,150,166,143,124,158,188,210,168,51,
171,167,65,216,140,186,31,54,137,207,44,131,8,211,178,84,184,14,146,251,143,211,105,98,55,250,145,234,132,217,61,103,39,185,27,165,96,90,102,153,22,198,176,100,83,39,157,22,210,125,91,254,26,161,225,164,
50,217,173,255,242,28,52,164,159,124,170,108,168,74,176,211,130,164,22,201,94,73,199,137,152,203,27,159,160,122,189,80,216,168,193,241,148,5,46,95,192,179,88,31,130,113,140,110,245,39,82,87,67,42,90,200,
150,6,8,15,66,106,128,179,139,141,93,51,97,146,223,121,68,1,203,195,177,189,218,91,93,169,6,10,166,34,232,203,252,151,223,151,253,79,242,67,151,142,185,79,11,237,232,244,27,205,10,170,24,71,15,77,33,142,
81,27,102,135,115,146,216,225,14,189,71,106,131,23,94,54,175,176,94,111,14,42,142,114,102,142,255,242,195,222,226,215,232,204,255,201,102,33,249,191,163,188,0,64,78,23,138,128,189,204,208,6,63,146,105,
180,207,215,220,173,176,3,159,191,61,84,243,53,223,43,236,58,128,140,64,108,134,38,199,36,237,184,183,1,208,159,204,44,114,198,166,57,10,225,70,194,212,212,75,80,78,196,236,177,65,245,49,141,247,166,51,
137,131,185,242,116,36,17,134,140,7,1,39,236,234,19,2,6,15,151,173,188,225,220,156,153,164,93,4,241,225,187,157,151,119,226,77,126,68,70,47,166,193,213,101,112,155,93,244,101,252,17,112,201,151,26,238,
242,13,99,173,105,30,229,98,243,119,30,19,110,68,248,225,163,198,51,191,47,108,140,187,131,153,216,149,138,158,164,142,214,246,42,120,138,169,79,113,210,24,143,7,187,210,178,73,56,78,51,149,155,232,111,
112,132,131,69,139,103,227,225,166,81,205,216,38,93,238,247,223,39,235,8,88,31,59,190,42,18,243,203,244,55,17,56,22,31,123,77,252,71,176,241,127,251,167,121,138,130,81,146,177,187,73,250,245,140,58,88,
229,36,119,216,14,134,152,37,119,212,147,24,36,30,28,212,86,183,239,242,113,207,161,99,89,37,194,74,206,193,11,42,87,72,50,64,198,77,30,219,246,36,171,109,66,50,180,88,212,195,16,145,211,180,140,118,190,
122,54,162,129,5,194,197,48,78,183,136,52,100,137,241,197,219,51,2,151,196,68,55,165,206,35,94,205,237,53,26,197,78,142,239,194,186,221,1,173,212,136,7,116,231,146,175,206,24,155,117,74,178,23,239,162,
180,111,57,207,153,49,127,153,123,112,185,22,69,79,179,190,61,113,146,227,118,117,228,97,244,248,7,72,177,155,232,75,120,3,34,1,224,26,218,248,158,89,126,206,222,193,242,91,109,113,220,87,205,63,177,125,
159,143,159,98,141,216,106,26,84,138,238,100,129,104,102,186,107,154,8,192,228,84,39,168,242,128,14,8,59,137,134,38,199,183,34,188,179,202,151,49,12,57,153,178,138,227,42,11,179,35,54,106,108,141,246,
215,86,79,82,40,31,190,69,41,156,135,197,148,10,207,203,203,120,107,115,247,13,2,2,94,143,228,94,142,68,117,76,209,236,139,115,179,23,23,58,201,205,125,121,59,126,152,94,134,5,196,70,201,19,170,234,110,
179,91,224,198,250,119,215,177,200,198,199,89,149,100,198,243,65,123,78,255,120,82,223,60,205,186,76,76,86,22,82,151,22,127,252,60,164,185,101,188,214,235,16,137,6,205,83,207,117,58,163,177,180,226,116,
40,219,61,207,254,244,216,209,237,174,22,40,193,18,86,141,142,179,1,178,0,237,143,74,175,113,47,62,182,25,147,66,236,215,57,158,114,213,200,110,184,18,27,53,108,122,184,6,199,37,85,102,228,241,132,212,
152,26,243,197,66,31,142,211,250,50,73,183,248,208,31,78,124,229,136,141,80,128,106,205,50,137,4,231,164,223,227,130,136,231,104,160,23,129,230,166,113,117,115,243,56,251,118,167,216,29,38,31,46,0,24,
119,241,152,179,135,81,208,169,38,124,18,17,121,102,194,68,192,16,227,49,28,197,134,207,113,89,211,3,67,122,50,206,121,145,195,80,201,80,205,165,215,10,51,3,166,176,90,141,247,243,31,255,144,246,218,175,
61,27,159,208,194,92,42,224,185,75,227,104,53,169,86,54,134,162,209,97,198,206,159,255,52,196,195,9,206,106,19,90,89,177,0,170,210,206,255,114,66,131,186,227,30,1,1,174,223,65,73,203,81,139,86,101,31,
134,204,132,53,232,166,212,91,192,92,61,116,83,247,219,244,138,231,181,4,131,199,118,138,225,42,27,147,168,197,12,112,158,96,158,22,133,146,146,223,109,125,107,184,67,129,74,252,209,118,55,44,147,176,
32,253,160,6,9,134,116,196,100,112,125,91,223,53,56,202,181,40,121,200,11,125,199,216,240,190,182,48,77,173,109,70,143,168,153,150,120,252,252,178,205,238,38,78,4,230,216,93,216,234,69,50,107,1,62,125,
158,235,18,120,246,211,194,15,110,219,186,218,219,12,167,143,27,158,76,10,232,241,180,120,187,191,236,71,201,157,211,241,39,23,29,224,170,119,190,117,230,192,112,113,70,55,119,8,75,19,106,32,255,109,236,
40,49,242,235,145,156,96,247,53,46,106,3,187,193,229,100,39,205,26,81,16,215,233,113,101,176,214,241,251,143,255,250,175,233,203,19,192,120,253,68,147,243,223,243,189,229,80,225,227,51,39,91,60,63,76,
219,171,83,202,28,71,28,116,61,132,110,170,65,249,203,28,207,243,52,151,96,213,98,128,108,3,48,11,162,255,178,141,5,124,132,199,194,131,153,44,235,123,3,246,113,221,98,244,27,141,77,16,166,115,40,86,195,
192,246,75,217,32,217,243,197,7,3,210,218,24,107,226,247,80,23,94,118,58,201,46,249,248,29,72,14,62,103,12,55,79,84,143,137,89,26,98,221,89,133,73,34,138,157,158,213,125,123,126,42,186,149,168,102,221,
81,203,210,209,200,159,188,218,1,163,186,243,74,238,238,148,151,227,32,121,3,230,201,30,61,139,143,252,153,121,211,223,99,194,197,93,126,200,42,154,119,85,74,32,220,72,36,227,111,139,41,78,213,23,159,
240,6,204,255,221,21,203,32,190,121,26,116,122,106,212,103,56,104,181,86,189,132,73,235,199,221,59,209,39,59,123,66,38,94,136,28,253,93,38,233,122,94,204,112,83,114,53,87,118,229,215,216,233,54,130,192,
170,197,174,232,226,159,90,36,232,242,97,192,128,215,0,237,140,30,8,16,107,25,148,110,158,132,104,244,214,39,35,137,217,68,171,97,19,222,180,110,221,207,34,150,78,248,252,68,150,13,148,2,152,88,181,62,
163,10,79,207,181,185,75,54,245,11,76,135,216,148,93,83,195,45,216,54,129,172,161,221,83,104,118,47,143,162,205,246,140,217,39,103,50,20,70,56,112,211,4,237,180,197,32,39,126,184,255,77,227,75,134,158,
218,85,237,60,78,203,31,242,156,238,20,67,77,40,7,186,181,228,24,212,68,6,251,204,249,230,78,1,48,220,95,118,78,99,60,2,230,23,6,177,96,219,231,212,101,43,101,154,242,171,171,220,104,90,213,77,170,93,
156,126,27,188,204,228,14,121,241,123,52,155,105,242,104,183,232,157,240,137,119,216,88,92,148,12,68,206,184,119,48,190,95,201,102,162,103,30,141,36,104,216,173,33,160,167,112,225,8,218,24,113,214,255,
254,167,6,154,184,17,207,135,71,167,226,130,230,96,76,185,169,33,49,247,18,33,5,13,203,98,10,31,29,207,200,116,127,176,11,62,40,19,16,30,74,8,196,113,44,171,193,115,192,48,156,28,121,17,116,203,136,129,
29,82,211,142,26,208,12,164,110,34,46,217,85,183,155,143,89,241,43,35,111,232,138,174,214,142,114,17,111,178,24,226,121,19,105,215,105,245,194,57,180,209,131,32,0,147,27,107,15,169,213,39,79,228,16,45,
241,179,193,121,128,134,139,62,64,118,202,195,119,179,252,2,120,109,179,45,13,157,148,125,42,145,161,238,121,56,164,24,50,161,88,252,158,69,247,42,117,219,156,231,24,51,246,9,184,134,254,119,75,58,251,
233,81,72,187,143,196,167,22,245,65,245,204,154,93,247,253,67,117,208,23,235,56,146,42,90,253,130,65,9,20,206,182,138,11,97,87,247,184,43,123,123,199,147,117,254,97,198,120,215,238,22,97,78,113,244,45,
174,171,68,106,85,71,206,163,107,238,114,167,3,66,187,64,108,71,238,17,244,191,203,210,240,176,47,79,224,135,68,16,32,211,48,38,136,49,99,184,148,201,105,194,50,82,70,200,165,9,77,169,246,212,142,26,215,
143,126,239,84,236,237,75,60,218,36,70,20,1,253,97,91,64,46,103,107,83,199,30,55,31,227,188,0,217,67,250,33,33,87,34,124,21,179,235,58,131,62,181,139,83,54,251,82,126,16,91,32,215,139,217,179,239,40,113,
50,89,88,125,198,94,179,161,50,248,31,225,79,209,164,113,114,195,112,131,62,143,251,22,58,122,148,72,171,103,245,86,87,226,20,88,205,77,200,206,76,194,250,1,73,167,58,217,236,238,134,242,116,88,232,21,
198,253,167,236,180,89,107,46,19,159,92,212,174,91,32,196,144,29,74,111,181,75,169,184,207,95,48,58,117,223,47,79,42,146,233,255,167,57,148,164,35,217,110,228,176,46,67,150,119,231,172,107,230,8,175,11,
43,19,193,67,108,28,190,94,83,253,118,253,241,57,89,236,12,150,31,199,98,104,111,210,154,167,162,146,59,204,34,32,188,186,59,62,185,203,105,87,3,156,18,82,4,236,126,224,101,210,234,16,28,71,207,148,163,
238,156,18,86,214,102,191,9,42,57,14,231,132,43,90,142,156,205,243,37,129,89,18,39,49,102,225,212,0,141,218,114,33,107,253,37,70,185,205,193,122,127,107,135,152,110,129,92,202,211,3,6,203,252,120,204,
162,65,3,238,247,124,24,118,122,169,54,77,145,72,251,142,36,94,194,49,196,216,105,63,171,199,143,17,182,186,90,39,115,186,68,82,13,76,48,219,76,47,222,87,155,137,93,102,85,93,190,142,164,186,173,154,198,
17,174,203,42,191,86,143,104,105,152,101,141,79,241,90,128,188,33,2,161,98,46,78,161,97,100,144,219,20,13,221,61,35,75,28,149,147,93,28,234,162,126,97,229,72,125,22,152,229,98,202,86,227,139,38,215,140,
60,124,176,56,13,125,224,56,189,99,54,92,155,19,8,236,140,75,198,137,114,194,75,180,255,86,243,169,102,20,204,147,236,99,158,141,236,115,55,197,83,119,87,55,75,255,109,176,152,1,98,59,8,138,218,22,248,
49,194,126,176,94,38,102,104,145,247,176,48,6,46,105,183,141,112,164,149,157,204,41,185,128,165,178,192,224,248,224,121,118,141,159,63,45,253,160,90,17,211,161,207,199,28,193,225,129,132,183,39,22,190,
38,25,158,171,251,98,39,2,215,79,11,196,222,0,251,73,242,197,83,240,89,23,144,207,93,216,82,90,2,202,47,81,238,46,207,210,133,94,72,58,18,249,65,180,229,115,94,98,55,30,28,49,45,189,183,47,116,186,109,
206,189,179,25,90,221,57,153,241,176,68,200,211,98,230,23,133,130,230,39,80,163,133,238,253,50,52,24,246,138,62,49,86,159,114,97,223,146,109,31,83,109,130,26,150,131,81,90,208,157,15,227,95,50,215,69,
16,137,156,121,194,108,147,145,179,40,19,133,77,136,117,222,145,193,44,66,235,197,145,212,86,84,87,2,247,226,68,167,165,105,209,66,32,20,159,19,139,217,81,103,1,204,198,72,173,249,41,107,30,15,242,105,
182,142,7,199,228,234,153,237,60,142,233,99,83,41,155,8,122,218,98,255,76,48,125,100,208,217,166,161,130,92,53,244,190,168,143,64,62,197,124,182,109,146,251,210,55,60,12,160,56,138,180,115,69,181,83,25,
118,186,92,102,52,49,199,155,89,245,19,217,76,159,146,42,4,19,42,172,109,22,187,26,163,102,162,247,165,231,255,57,34,88,158,175,89,151,71,168,187,28,230,80,131,138,121,94,109,13,88,175,251,178,125,220,
102,116,31,89,230,139,96,40,26,84,193,97,4,211,30,14,59,192,170,121,241,90,68,200,18,3,228,77,76,137,48,132,117,23,121,154,169,179,36,238,126,210,104,140,164,106,251,83,170,107,190,88,118,116,55,77,76,
230,136,17,241,242,14,85,72,224,147,134,152,13,127,135,211,208,202,216,8,18,40,165,79,65,89,148,23,217,27,94,148,59,113,58,35,132,169,57,44,64,233,16,155,193,104,211,139,166,163,172,241,42,184,23,238,
158,220,224,5,54,7,197,39,51,76,130,67,201,102,34,200,164,150,184,226,139,52,79,140,186,113,176,190,22,7,93,86,17,40,162,70,99,142,138,190,104,115,208,58,222,132,182,113,152,170,184,134,92,76,43,171,142,
37,161,41,127,111,86,223,125,55,149,172,242,70,237,52,71,149,52,35,188,31,169,59,30,159,235,249,123,120,36,94,51,247,49,168,99,2,134,207,105,205,135,6,1,19,33,214,168,151,220,46,228,125,36,56,137,216,
97,100,149,227,179,61,5,166,47,33,141,48,59,28,175,71,123,108,187,76,44,193,110,194,77,246,60,155,172,32,66,85,18,186,245,216,249,60,45,34,24,97,7,54,212,248,17,224,84,67,151,180,56,237,161,41,37,184,
88,158,32,49,154,142,240,213,30,65,81,70,53,83,19,213,116,166,25,248,26,20,56,178,162,156,183,195,60,156,240,16,117,83,180,185,179,135,29,15,61,132,138,62,23,238,9,252,79,35,144,161,172,226,43,132,49,
90,36,221,45,214,64,209,161,45,112,202,243,120,99,115,97,140,186,120,22,153,22,105,42,194,49,75,132,94,21,171,65,81,219,87,137,138,136,109,250,205,56,107,189,170,11,110,129,238,204,119,244,46,204,78,107,
205,142,182,176,171,153,205,57,3,63,76,161,123,73,133,159,130,13,132,35,226,100,250,142,134,229,55,161,157,174,209,82,144,141,179,24,64,26,171,137,163,200,110,240,219,157,15,206,106,106,255,26,55,234,
118,87,64,125,22,18,16,37,136,38,110,54,167,55,92,195,114,195,176,12,26,173,70,5,223,49,117,212,205,97,167,205,15,109,255,210,69,135,109,9,27,54,56,238,230,196,166,75,206,25,114,59,171,238,204,185,163,
88,30,17,18,130,144,90,196,72,176,154,144,17,2,183,88,100,170,113,101,145,216,190,52,148,200,190,212,116,198,81,53,88,128,20,215,153,67,106,147,212,120,45,236,208,24,108,104,202,3,75,241,205,110,119,199,
180,131,102,211,203,205,124,157,39,172,114,213,109,228,90,52,153,195,117,220,54,123,13,209,24,236,157,15,41,166,186,193,115,181,229,54,69,53,119,48,102,214,97,96,164,153,166,212,122,186,224,79,65,47,36,
237,92,211,240,114,91,183,73,240,224,107,217,101,75,177,193,167,59,62,179,196,153,126,208,102,58,107,182,219,196,244,239,46,101,90,155,4,181,127,113,173,19,6,174,145,88,150,236,226,197,134,140,208,142,
155,179,160,76,241,102,104,38,142,155,130,38,37,5,200,139,142,252,95,10,67,58,93,244,115,44,234,227,182,62,52,69,233,54,159,23,213,223,18,221,43,216,85,153,184,36,45,7,35,252,189,104,174,126,121,68,24,
70,169,242,110,84,141,8,227,1,184,118,160,126,196,239,54,151,1,108,182,186,89,76,212,27,37,249,244,88,172,23,1,88,171,145,129,136,32,137,228,97,18,59,178,62,99,112,77,171,21,6,171,125,35,107,24,13,152,
80,13,249,236,70,107,63,63,20,246,151,194,38,66,129,89,178,89,213,170,215,10,251,154,238,154,60,231,60,45,0,3,222,97,226,216,42,68,130,105,102,246,66,45,126,168,99,86,126,120,151,79,239,28,157,54,113,
40,98,71,30,185,37,143,112,72,221,183,154,49,162,125,169,126,76,178,155,142,186,9,139,227,201,35,88,244,49,17,72,175,233,158,145,226,38,150,60,3,42,147,39,0,201,163,187,175,182,125,36,202,178,248,63,39,
96,143,155,68,43,188,177,168,56,43,223,213,132,20,71,169,93,230,29,54,79,152,138,53,40,84,108,142,110,59,248,124,221,159,175,153,32,82,236,214,177,76,37,159,230,176,60,138,110,183,105,179,28,222,223,139,
235,38,236,32,139,241,91,124,166,27,67,56,243,123,236,200,133,34,26,92,11,171,237,46,215,11,126,62,68,127,220,100,228,197,169,74,196,7,226,184,92,196,190,193,60,125,181,125,75,200,71,250,83,218,30,198,
21,46,105,18,139,231,9,147,165,151,169,38,143,4,76,246,213,121,185,218,181,151,229,7,205,203,210,100,138,241,152,165,132,98,97,73,36,14,105,157,124,77,238,216,150,198,198,226,173,214,58,37,19,91,86,119,
226,242,27,45,68,58,176,150,112,124,227,122,29,222,105,99,220,124,190,142,119,106,112,212,43,145,198,160,164,217,100,19,123,57,123,225,98,144,193,193,23,47,19,0,45,94,72,236,208,199,207,222,55,199,157,
28,231,228,71,38,115,34,21,205,225,39,215,172,232,213,19,162,230,241,97,100,67,243,152,243,81,42,129,189,234,51,58,195,222,197,183,140,114,128,81,106,102,3,81,91,211,84,175,81,63,51,62,7,9,12,192,198,
28,188,206,50,197,52,60,186,130,45,170,223,72,56,6,158,248,124,200,200,222,250,239,22,39,1,231,217,159,226,100,254,46,79,162,151,141,92,55,147,65,20,150,36,2,72,196,8,210,213,152,150,204,15,221,184,26,
249,65,118,62,107,214,38,249,90,19,10,194,46,250,148,131,155,188,60,63,197,65,192,194,91,53,149,41,54,230,226,111,27,150,233,54,129,192,2,128,17,0,98,0,113,221,105,158,16,201,103,97,254,64,61,190,105,
124,73,132,28,206,186,221,161,243,148,128,180,99,212,132,28,58,236,226,94,146,255,250,41,152,14,103,224,230,220,206,152,10,173,38,146,224,90,63,161,88,109,109,142,146,53,213,17,115,232,118,211,49,190,
68,105,87,132,2,133,17,16,121,110,221,97,148,236,214,34,163,198,22,126,205,50,202,115,81,19,84,237,53,180,59,57,118,10,147,124,132,112,218,18,187,209,162,36,169,216,25,195,14,153,225,77,196,53,119,207,
212,223,201,173,155,167,20,75,176,124,220,132,5,49,88,94,66,7,187,97,46,92,100,79,155,180,154,98,103,178,33,191,28,29,100,161,194,99,202,18,88,37,178,42,246,55,12,22,48,38,148,203,216,31,62,18,101,51,
50,35,253,194,252,211,159,23,11,69,6,9,63,103,234,90,140,240,98,212,218,60,78,101,172,138,111,55,111,178,133,122,140,16,33,228,245,152,187,90,54,99,41,57,27,71,196,91,143,109,255,144,183,16,53,228,172,
159,44,121,246,136,55,0,125,250,196,63,85,222,220,28,11,211,99,67,240,125,86,105,212,230,132,46,130,16,148,207,24,14,25,154,205,87,115,33,34,244,62,178,117,46,219,183,224,239,63,144,3,111,60,151,176,146,
253,39,211,87,243,93,151,84,225,194,178,111,154,191,111,46,203,114,24,76,5,3,185,6,169,193,174,253,139,137,25,116,201,160,84,51,105,62,158,87,217,15,3,210,240,108,155,14,185,167,84,140,167,59,96,222,56,
166,154,230,249,52,109,30,5,206,29,122,145,100,55,76,60,149,2,246,154,46,99,229,75,224,103,113,74,234,18,81,195,211,150,240,193,162,58,72,182,156,118,64,27,242,33,131,79,178,227,139,44,236,162,99,236,
95,72,170,135,25,61,197,139,170,217,239,91,212,186,101,2,233,45,82,19,146,252,201,153,14,134,9,145,163,168,9,33,89,160,21,82,131,112,203,165,138,48,124,155,186,118,194,26,100,144,8,153,178,134,134,181,
232,83,196,223,98,89,4,222,151,13,10,164,31,230,74,178,126,13,205,251,151,65,72,144,178,139,175,15,143,100,194,96,190,111,30,193,226,179,114,3,192,204,186,74,158,177,109,33,169,205,62,246,151,57,98,188,
60,90,141,64,87,92,47,176,204,23,143,28,49,59,191,34,11,211,167,1,71,185,40,235,44,37,233,14,139,138,68,222,23,54,34,24,58,208,25,100,183,112,12,184,30,126,144,62,51,125,186,108,173,36,162,202,128,224,
116,157,72,46,28,254,125,90,144,92,203,125,60,209,207,167,106,34,218,54,63,45,104,234,109,50,107,194,244,51,2,134,120,131,172,217,32,167,143,154,106,242,228,5,4,239,246,193,222,4,93,104,102,126,58,140,
189,78,200,131,199,122,81,163,6,66,70,218,55,215,56,144,173,166,169,138,228,247,72,239,14,58,52,39,52,252,127,140,154,237,227,219,244,117,100,167,143,14,24,199,238,134,227,87,59,8,197,110,168,135,80,131,
218,215,123,177,84,224,26,59,37,61,219,109,124,207,163,17,195,136,69,132,233,36,236,141,199,87,114,80,82,119,206,33,56,155,32,206,106,18,115,240,97,11,39,15,142,243,246,177,0,30,77,9,190,172,63,79,57,
108,68,39,157,60,246,243,169,71,201,73,88,241,5,211,203,13,39,29,116,93,159,115,236,123,137,110,151,170,39,47,73,6,182,220,28,186,205,222,61,36,225,6,19,12,123,147,135,9,189,57,161,44,140,111,105,9,24,
245,166,135,8,107,79,147,153,31,39,109,247,20,49,124,133,246,77,156,9,57,100,156,151,141,7,156,20,81,140,63,161,219,54,12,20,164,141,48,183,194,34,121,61,158,134,113,174,201,147,219,220,101,98,17,0,207,
140,188,192,98,165,219,98,127,31,13,222,109,215,71,15,27,213,26,88,160,4,149,93,99,146,86,199,157,53,191,113,58,251,154,147,62,127,189,230,206,180,50,217,245,49,25,73,205,99,77,98,111,95,142,169,153,75,
226,46,117,199,130,164,184,95,59,91,178,207,79,236,54,154,158,165,200,172,83,103,108,100,34,156,56,22,55,99,107,177,175,17,1,227,183,27,28,187,75,3,245,49,68,88,102,168,103,230,17,156,201,210,182,151,
211,111,255,154,180,60,220,240,141,141,133,140,73,249,64,172,90,104,97,150,175,100,42,161,38,156,231,175,98,183,167,117,157,212,186,8,147,138,40,152,56,17,9,242,231,50,223,143,29,240,46,11,23,5,172,174,
230,49,200,201,23,141,31,105,137,182,141,102,217,230,198,10,166,20,53,154,57,175,155,222,223,248,183,234,73,188,253,206,69,253,251,239,114,26,142,7,40,5,33,99,181,4,19,71,47,143,165,153,191,108,180,61,
106,2,90,201,109,220,1,95,225,56,235,209,17,27,25,215,30,251,26,208,68,126,155,187,91,58,81,194,43,49,45,211,85,55,52,204,4,125,233,5,46,184,1,216,25,109,66,60,118,44,198,66,195,112,52,121,114,19,174,
107,164,104,193,229,235,124,107,199,217,173,26,178,8,232,99,137,108,24,212,174,160,176,225,104,121,60,231,209,45,142,161,168,254,196,240,112,195,54,89,209,144,24,146,12,127,180,62,201,4,211,168,192,163,
60,194,188,139,118,14,16,112,139,155,1,238,18,143,207,121,124,226,123,106,70,236,217,124,88,51,7,224,237,26,147,224,252,33,255,242,234,9,205,52,26,104,34,81,103,83,197,132,17,250,1,238,239,148,134,180,
41,114,121,49,133,140,137,195,101,245,100,74,168,75,72,156,131,193,148,247,205,121,145,26,207,86,206,170,179,56,167,93,193,12,215,113,206,105,207,17,67,10,51,200,168,131,50,25,124,183,255,80,148,10,100,
117,149,213,110,111,74,82,70,243,147,191,70,189,113,106,227,12,230,234,182,62,167,52,207,127,126,25,120,82,3,127,138,237,61,40,108,110,120,72,236,200,54,163,50,15,47,234,34,2,184,126,74,73,153,218,117,
76,225,239,112,124,198,77,166,148,247,82,83,146,251,180,195,148,104,75,246,182,146,159,250,9,228,107,248,88,105,70,15,222,73,23,171,116,67,214,162,112,148,9,121,170,153,208,228,247,161,163,167,21,201,
174,178,129,4,134,77,140,250,8,42,181,38,25,187,29,22,217,52,126,178,7,229,36,73,224,122,1,169,64,36,116,116,196,222,161,155,129,133,72,242,101,132,28,106,78,179,134,178,179,130,48,191,231,152,112,73,
255,38,220,226,194,6,89,22,159,211,215,83,238,198,54,166,66,31,246,161,84,90,64,72,180,250,91,165,30,133,143,124,73,239,184,179,139,208,140,168,130,2,207,119,250,42,17,127,46,82,180,194,14,6,247,1,191,
203,197,236,137,139,20,0,163,169,65,46,228,88,68,31,54,204,146,163,112,159,206,125,129,87,134,4,4,176,34,3,21,56,46,173,212,122,71,195,200,185,57,38,66,199,249,118,200,200,110,100,86,183,230,91,152,183,
163,35,173,194,34,215,200,173,105,106,8,86,63,69,243,103,171,234,152,15,226,90,194,175,128,13,54,31,41,120,173,23,221,104,111,186,88,231,233,40,187,196,122,144,91,123,81,129,204,218,206,11,102,153,4,86,
19,0,136,231,21,54,91,120,250,195,204,52,40,87,240,94,143,240,211,152,204,4,88,91,92,115,214,75,86,41,139,229,30,17,182,196,63,239,162,119,37,227,137,243,184,115,177,143,27,71,95,35,215,117,217,77,14,
136,180,197,199,122,216,73,71,136,41,174,105,33,4,101,7,11,142,34,159,132,109,248,96,153,184,16,242,12,98,156,28,245,173,51,27,123,146,123,171,28,61,110,223,127,8,131,245,195,194,104,65,235,197,241,253,
153,138,123,137,226,70,103,59,52,167,65,136,96,185,245,110,68,113,2,70,3,196,19,205,131,11,158,130,152,84,165,100,159,202,101,94,143,251,199,141,223,231,60,68,113,187,219,134,177,155,50,39,144,60,123,
188,40,85,3,154,154,236,60,208,59,70,160,251,58,79,226,157,195,128,226,238,219,82,153,90,67,88,244,181,104,221,184,131,110,113,161,157,167,8,58,26,77,213,195,10,208,105,17,40,244,111,197,41,83,232,200,
15,125,161,78,93,248,55,238,176,244,65,196,54,238,227,44,123,90,212,68,151,246,5,150,198,155,245,44,39,67,10,152,90,34,50,141,240,147,177,212,36,236,243,48,31,144,246,197,216,25,60,62,235,33,125,117,174,
163,212,119,133,204,151,236,93,139,105,23,223,127,240,253,99,241,225,230,82,190,240,212,68,102,241,248,145,221,48,118,241,93,230,173,88,160,88,92,156,141,219,71,114,137,35,118,188,231,13,174,191,166,204,
133,8,235,142,99,210,113,114,20,156,133,41,64,118,22,122,109,102,242,31,174,91,151,229,254,235,47,98,127,183,62,249,142,210,66,93,115,176,65,255,200,85,16,215,134,90,25,159,91,30,123,130,251,34,68,139,
88,166,78,187,110,108,183,69,48,64,80,236,188,177,50,217,193,16,211,98,179,125,172,149,111,214,142,99,1,62,13,205,113,214,158,213,192,114,188,184,6,220,179,113,218,183,217,24,162,122,99,184,109,251,155,
115,107,255,246,53,32,31,178,112,114,153,194,49,106,121,175,107,78,16,232,98,192,97,186,138,109,188,206,110,131,130,109,191,77,118,56,26,166,239,99,245,223,199,185,251,243,122,199,158,0,60,146,189,138,
56,120,146,102,214,137,203,133,41,234,118,91,121,100,182,164,58,181,88,78,26,94,220,184,8,183,219,125,18,106,35,202,55,204,243,3,228,78,198,20,11,99,216,244,197,131,192,26,206,97,221,50,81,102,11,218,
34,111,249,134,93,187,207,113,224,122,31,239,49,110,238,194,41,198,70,223,204,72,76,219,198,34,14,169,0,174,211,253,111,127,227,14,198,9,8,229,182,146,208,50,30,110,188,6,142,125,24,149,238,94,144,171,
103,253,148,222,146,84,210,21,52,128,6,99,143,29,9,15,73,85,100,11,209,144,131,137,24,151,153,67,154,170,74,64,22,62,149,68,52,110,197,50,90,155,16,96,113,112,128,97,17,151,93,42,74,4,48,160,174,51,4,
196,4,93,107,158,240,250,80,114,86,115,44,227,94,173,101,91,254,178,143,7,206,13,103,232,130,234,37,26,222,206,113,116,163,141,56,75,191,174,113,116,216,186,44,150,20,35,59,158,86,65,115,204,108,43,192,
213,226,115,13,32,148,174,192,243,223,70,69,61,132,93,30,83,161,230,227,188,24,132,91,108,251,227,119,63,199,77,160,47,250,248,240,216,150,255,254,227,99,236,28,79,102,236,112,238,27,84,37,206,171,15,
46,214,181,143,11,94,196,217,36,54,38,140,64,65,75,127,250,149,147,147,192,54,57,47,191,20,44,85,167,72,169,216,130,69,187,218,233,221,38,221,238,134,107,218,228,50,114,186,193,114,64,206,190,156,195,
154,65,148,189,11,87,11,225,217,217,190,42,241,64,57,209,222,184,211,36,223,188,197,20,49,52,101,56,242,152,150,149,37,255,224,206,93,45,21,216,132,199,178,153,91,149,177,67,115,87,60,160,166,154,45,165,
154,84,220,168,130,68,173,179,57,76,243,107,154,61,203,26,214,177,31,239,137,23,28,73,112,90,217,48,42,25,130,11,157,82,14,72,205,242,91,24,170,170,246,147,67,111,50,128,205,142,220,39,93,11,225,224,169,
250,191,89,229,200,83,199,37,22,70,199,255,235,79,191,48,121,22,15,4,168,105,155,101,46,133,22,143,125,178,207,3,240,191,14,65,103,107,222,166,93,13,155,201,108,27,65,24,95,141,239,253,140,154,178,186,
25,89,252,212,199,159,15,251,100,175,62,98,25,118,105,171,55,236,118,247,93,226,43,0,229,119,23,237,88,152,216,77,255,227,175,127,94,254,207,223,126,89,254,199,95,255,180,160,74,188,71,246,76,248,19,122,
38,203,157,216,197,46,158,118,234,66,160,123,1,105,215,126,67,88,68,23,109,255,228,165,29,250,161,248,125,44,154,128,158,88,228,51,60,170,76,232,135,79,114,96,165,73,139,92,205,202,69,211,173,136,12,78,
14,41,90,156,28,171,70,199,250,149,197,243,106,198,78,11,120,87,29,120,227,34,219,194,138,208,44,116,76,176,154,105,92,17,43,205,33,130,3,150,224,193,46,151,95,101,115,139,1,255,148,79,15,102,223,15,229,
157,243,251,135,128,46,130,164,28,180,42,34,176,64,235,240,217,108,158,42,109,191,200,164,129,187,41,175,133,77,193,252,243,217,42,210,40,95,98,98,37,123,152,243,237,72,130,207,141,7,127,124,151,239,227,
20,251,101,236,142,255,247,127,254,109,249,251,88,148,171,225,51,29,74,121,166,118,112,148,136,35,219,229,25,198,144,153,11,50,79,143,39,150,23,235,54,89,240,187,217,95,88,224,211,117,237,73,72,68,243,
74,22,175,192,46,91,165,41,193,25,117,152,49,198,230,39,79,9,18,111,103,4,0,223,192,39,111,187,231,204,227,175,254,247,127,254,101,249,235,55,1,225,47,46,40,219,189,173,178,35,38,228,180,103,118,160,216,
197,142,158,180,163,209,50,38,241,181,142,215,232,70,191,43,112,138,94,69,185,147,120,91,232,6,54,254,27,142,135,155,88,204,224,134,214,243,193,133,112,27,191,243,57,46,240,237,151,111,20,191,143,253,
77,185,222,104,198,198,123,94,89,15,194,218,207,113,116,201,67,242,252,252,151,163,132,181,168,83,125,106,150,14,51,130,126,45,251,120,171,135,235,200,6,247,226,199,168,173,176,16,33,123,24,175,159,33,
67,104,42,105,142,159,191,59,9,67,12,113,236,150,56,22,97,22,186,62,254,152,144,73,231,113,125,67,116,212,146,127,254,182,252,130,142,187,116,98,176,106,76,96,31,56,94,99,189,209,26,49,124,234,241,208,
52,134,8,140,7,98,60,60,72,203,96,105,50,126,55,113,212,248,228,36,77,141,6,160,153,7,79,53,242,133,199,53,129,251,89,123,125,170,100,120,140,29,239,67,59,227,74,132,37,209,72,160,223,191,243,51,220,0,
137,97,244,153,213,240,222,111,66,59,182,105,72,91,38,172,167,222,180,121,205,20,14,91,48,245,1,174,141,82,233,244,184,17,205,88,13,97,93,87,196,55,26,161,53,66,220,215,47,96,42,42,64,58,212,154,158,85,
13,252,98,123,199,49,45,243,124,145,8,2,244,142,65,252,97,191,244,189,124,81,203,133,177,64,186,177,86,196,200,146,245,197,248,245,219,118,155,190,67,236,56,63,110,147,197,194,186,115,252,238,247,95,127,
204,154,48,178,181,81,120,143,42,109,57,199,133,220,120,225,243,164,157,165,98,154,235,249,90,254,68,219,149,115,249,200,106,94,234,120,64,10,9,16,72,72,27,223,105,92,220,63,144,37,201,16,211,111,203,
199,102,7,179,36,227,211,114,199,119,26,63,253,243,95,178,66,28,191,137,239,134,212,172,190,23,50,191,183,172,81,235,93,219,231,216,109,197,96,255,241,67,194,174,131,249,56,43,31,8,56,87,220,158,175,233,
16,194,212,88,248,148,163,102,219,49,237,129,213,73,130,27,251,248,142,40,29,62,180,11,131,155,248,28,11,104,75,108,36,110,163,142,126,153,153,206,99,154,209,230,99,81,221,2,27,28,215,106,148,80,17,163,
76,39,19,148,92,227,117,110,54,179,189,127,187,243,148,187,141,7,185,149,111,180,228,227,142,77,180,194,172,125,10,213,196,113,192,195,69,42,154,119,188,192,128,115,128,252,232,67,170,225,193,38,22,57,
225,171,241,211,177,233,5,165,47,136,193,59,242,217,159,79,151,138,150,73,196,145,151,131,19,151,116,156,175,30,77,161,67,194,24,17,199,208,225,73,65,216,4,243,195,123,122,210,189,248,178,89,55,88,116,
248,34,79,220,156,113,35,30,240,226,193,174,177,24,52,199,110,65,93,114,215,46,116,188,102,192,20,227,246,192,56,247,5,34,203,57,123,222,61,234,168,13,95,158,115,224,190,220,141,153,114,50,2,32,188,171,
150,20,69,235,34,54,39,246,144,232,93,43,142,190,113,241,177,224,159,104,70,198,251,254,250,215,191,144,176,220,29,98,202,58,136,202,206,117,121,177,84,217,233,1,20,249,143,213,126,71,237,243,231,242,
49,26,148,8,38,88,77,94,237,116,18,254,54,101,186,197,179,231,15,227,137,40,236,169,245,9,200,164,201,106,230,206,93,231,112,0,210,104,24,225,24,210,204,33,181,105,150,8,192,210,10,225,61,241,154,68,63,
232,254,246,78,253,42,134,145,64,186,197,78,85,136,133,142,159,111,234,222,133,150,8,210,17,225,247,62,249,0,180,73,28,239,113,31,223,21,13,227,126,251,69,88,115,108,92,64,32,22,221,247,226,134,165,235,
203,104,108,88,175,127,99,127,209,123,202,215,148,224,62,55,138,162,83,178,235,196,141,136,23,252,221,26,24,101,49,25,244,106,114,105,205,183,149,79,200,105,48,157,186,11,27,122,98,11,198,207,236,134,
131,34,43,167,89,204,21,58,98,252,251,102,209,58,32,148,239,163,142,251,124,136,214,117,183,118,88,238,91,135,244,198,77,53,43,190,104,37,110,168,36,137,108,107,235,12,200,198,141,205,238,47,208,198,239,
158,205,206,15,120,13,144,75,146,116,58,171,201,198,92,204,152,203,27,119,19,241,224,169,162,28,239,1,216,6,55,177,220,153,92,240,241,161,232,184,231,235,20,201,153,225,245,135,186,116,11,171,112,28,55,
7,14,108,12,17,85,67,136,107,130,7,9,78,99,152,46,49,161,162,201,73,56,184,154,201,141,92,67,166,55,0,105,48,156,140,103,198,145,72,37,39,48,220,181,152,210,71,25,139,174,103,125,17,48,103,16,212,178,
78,245,229,29,141,140,141,175,138,39,41,168,255,119,187,188,5,34,193,102,212,220,77,228,47,178,145,193,61,225,3,214,156,40,231,211,51,106,242,24,3,163,52,217,52,101,11,117,98,52,57,49,129,66,211,73,115,
6,130,232,242,60,197,6,3,95,163,11,59,181,241,200,32,248,102,215,220,197,46,26,107,232,141,113,150,223,169,189,57,5,72,59,157,170,185,136,165,33,106,198,130,220,132,79,194,197,236,101,240,56,240,72,231,
60,246,32,233,178,174,204,236,232,130,180,241,129,99,231,249,48,125,62,241,24,98,129,238,120,222,48,47,77,198,39,55,155,187,47,86,87,46,107,153,11,41,251,98,172,214,15,223,13,122,99,228,118,120,30,207,
6,131,241,35,215,164,167,225,73,95,45,221,160,199,206,41,74,29,199,152,104,178,176,227,140,93,226,199,88,28,76,146,165,215,82,230,130,53,183,154,98,41,28,231,217,159,157,208,138,141,89,113,115,15,220,
220,122,114,250,133,57,56,67,165,78,197,177,176,137,128,131,89,72,18,192,77,244,8,14,139,137,117,223,166,93,149,15,104,86,109,253,124,137,8,115,255,208,247,65,83,201,235,255,227,135,165,35,99,97,88,127,
131,135,26,101,77,117,242,48,107,94,107,173,137,39,27,95,76,189,204,100,16,30,201,88,40,168,33,67,82,194,250,127,179,44,68,141,208,56,170,184,56,171,125,0,166,150,235,188,76,6,190,102,206,103,115,152,
193,225,28,29,54,202,190,55,33,235,198,105,4,27,234,106,200,40,199,162,68,157,247,50,9,161,89,2,121,94,111,57,237,234,14,239,180,123,218,228,79,26,181,88,173,43,190,5,205,42,148,140,126,186,241,59,88,
152,60,166,193,187,195,17,106,214,249,101,58,217,13,157,161,109,172,119,199,241,133,59,3,65,106,51,111,178,167,45,240,201,220,61,94,188,25,166,89,163,147,244,180,133,240,200,33,69,99,137,252,158,82,236,
36,39,153,231,183,209,169,222,71,9,17,53,18,187,215,34,150,244,13,71,28,33,173,206,29,147,11,23,239,231,152,19,214,205,192,44,199,162,3,214,24,250,27,220,128,179,105,49,36,31,145,224,13,254,248,243,159,
195,249,121,220,136,15,214,91,155,71,134,248,44,56,65,154,111,204,141,130,57,221,11,220,92,46,20,75,85,202,34,190,98,241,255,112,141,179,125,62,73,51,196,134,96,136,234,110,186,31,78,0,160,36,216,165,
104,106,106,226,4,54,134,226,248,104,156,12,223,209,104,57,27,169,77,47,250,198,7,131,165,82,149,185,62,63,143,153,78,41,197,58,41,211,185,175,217,31,160,112,250,115,159,82,136,224,41,104,98,40,170,220,
203,253,0,7,54,111,107,150,238,237,180,137,156,209,142,73,67,58,236,4,193,155,184,150,177,249,140,37,33,15,157,20,54,42,209,197,99,181,227,98,126,194,70,16,225,151,212,65,31,116,29,67,67,195,191,3,228,
144,164,175,150,53,92,158,59,225,106,70,121,11,18,71,42,42,248,61,117,193,78,113,251,184,207,207,76,64,223,164,97,92,232,203,36,222,177,4,166,43,238,230,29,151,73,5,104,42,208,88,209,242,216,71,208,83,
80,12,29,28,32,63,197,5,58,37,1,110,54,39,197,226,111,12,82,111,12,36,34,217,185,75,229,184,24,202,144,67,68,118,146,236,50,110,238,157,190,240,13,245,163,11,126,30,173,158,24,229,152,240,192,225,206,
35,70,30,173,236,236,95,60,106,111,198,22,67,206,31,76,243,197,15,104,119,131,25,28,199,200,219,198,231,189,56,2,214,88,243,118,203,220,221,69,112,22,48,190,131,93,127,24,51,70,255,176,232,129,175,30,
55,23,207,182,187,39,96,225,38,18,185,226,24,7,111,110,114,69,6,223,73,22,95,156,169,59,30,216,46,67,43,149,90,1,236,119,243,84,3,181,201,134,147,78,13,107,186,37,182,178,97,155,44,31,207,62,187,163,113,
139,106,197,174,14,184,78,15,159,213,50,217,32,145,18,103,218,183,127,27,194,139,109,179,206,90,144,122,18,238,28,122,42,110,156,129,222,249,158,240,194,196,81,17,204,37,252,212,105,135,219,98,117,28,
131,167,28,136,180,150,60,249,121,75,68,6,131,206,198,250,232,131,71,237,175,63,126,33,60,19,50,85,233,210,67,10,97,184,196,187,35,47,120,210,20,138,186,156,241,222,248,76,217,59,126,11,27,103,148,10,
60,57,86,206,159,81,223,97,154,194,102,43,196,109,36,48,116,238,252,120,72,131,240,178,145,26,168,154,42,26,18,48,99,46,195,108,216,181,178,13,192,54,159,78,196,252,198,107,112,122,146,92,35,103,157,38,
27,167,33,130,92,216,57,251,132,192,131,120,179,64,44,114,147,1,126,95,158,99,147,19,224,240,121,252,252,235,146,246,234,221,23,148,41,11,142,0,168,30,25,221,38,19,19,139,181,160,151,145,220,206,254,193,
253,109,225,59,37,143,251,78,25,140,75,167,197,46,202,140,81,46,217,235,65,167,207,28,51,98,85,23,203,93,229,81,216,197,210,198,190,100,118,135,183,225,62,90,254,62,118,38,62,1,181,79,231,181,68,66,71,
147,33,105,115,240,123,78,105,90,4,174,150,80,18,232,61,101,72,133,218,116,219,101,36,255,180,90,144,112,209,137,167,245,154,227,40,106,138,5,211,242,162,134,52,148,243,105,179,102,30,184,0,73,126,226,
59,99,83,154,71,116,14,214,28,223,239,131,225,80,151,184,137,225,234,118,105,230,30,81,30,245,108,78,122,125,17,191,171,70,28,186,235,202,213,102,77,196,113,179,252,125,136,243,34,179,103,219,230,16,34,
80,13,218,208,96,17,155,16,18,58,33,118,213,155,74,1,212,84,40,103,66,10,203,240,85,2,239,42,57,94,88,56,8,169,26,159,123,199,226,221,21,170,197,8,108,224,176,155,162,232,250,244,16,71,109,47,149,37,106,
53,92,103,162,16,214,136,115,180,154,215,183,154,208,187,88,216,74,79,159,168,48,231,247,61,56,44,85,217,73,248,168,49,10,215,216,89,16,81,79,98,236,247,209,220,245,209,44,247,209,8,247,100,163,89,133,
3,180,206,177,162,235,202,177,215,133,45,36,183,219,217,232,92,34,137,146,133,129,127,198,19,61,78,175,115,252,219,232,205,198,27,241,31,124,237,138,63,175,99,231,175,189,120,49,212,171,206,129,122,177,
190,183,22,203,13,82,118,189,161,47,122,70,242,234,186,122,102,190,241,134,208,134,24,221,241,33,9,6,118,150,203,166,161,247,253,54,133,108,205,94,67,100,219,0,240,181,250,13,23,107,91,237,196,129,221,
154,19,154,198,20,85,233,122,176,56,202,140,39,6,182,88,28,105,151,173,255,150,94,252,182,124,64,26,193,142,85,118,216,10,74,237,83,45,185,68,2,133,45,235,88,31,98,193,179,80,175,174,187,13,149,121,183,
231,209,24,130,182,113,42,96,193,243,129,178,43,113,113,23,90,44,182,18,95,116,220,28,135,185,23,79,212,16,110,197,135,2,48,141,73,26,171,177,191,125,213,117,233,78,30,86,213,217,221,176,22,110,50,221,
233,113,0,230,34,142,36,190,219,205,204,171,80,180,110,158,252,48,251,92,152,218,204,118,103,26,177,115,39,67,5,160,122,124,44,74,45,114,29,232,13,85,94,239,4,111,234,213,111,183,59,23,169,214,85,30,253,
107,29,255,45,141,133,200,245,38,7,143,115,66,66,121,188,24,126,232,138,69,215,8,202,235,200,150,109,253,248,255,227,141,57,235,162,141,219,248,145,177,218,83,209,16,63,69,93,99,159,127,30,153,141,6,169,
251,191,185,196,210,28,223,230,157,220,170,93,183,2,54,144,238,93,23,130,179,221,172,139,78,240,185,172,211,167,155,154,235,85,163,169,151,157,201,138,185,148,187,19,97,49,201,32,53,14,79,57,154,18,78,
166,76,193,90,213,224,156,49,165,114,125,199,6,169,20,239,20,24,141,110,204,22,98,22,164,93,109,195,63,105,55,165,63,102,183,60,254,157,250,32,193,148,38,25,228,103,178,123,190,207,192,249,205,166,180,
145,129,153,108,53,125,114,113,21,205,197,177,11,250,243,193,158,5,159,149,29,170,163,227,14,167,66,176,193,43,217,81,122,203,155,120,130,102,145,102,254,218,249,35,99,39,200,15,155,49,225,153,26,103,
109,207,97,20,134,100,239,192,165,157,171,40,216,45,205,116,94,142,11,115,118,188,52,27,228,238,50,14,59,222,232,181,142,54,74,140,54,174,87,195,63,99,13,52,172,181,134,245,149,115,27,175,205,53,135,77,
110,252,121,156,214,120,86,90,15,47,161,241,62,103,27,47,52,94,183,85,173,111,148,23,137,57,70,227,239,199,41,246,170,60,166,5,126,246,204,153,71,79,65,236,68,93,131,5,21,158,136,205,62,233,36,230,226,
216,75,171,33,164,108,246,136,8,6,162,218,47,134,67,60,33,176,99,2,23,115,36,225,58,255,17,145,207,61,140,221,15,81,231,102,70,34,25,216,178,253,224,238,61,61,187,151,153,191,24,36,227,40,37,178,9,201,
55,18,127,79,146,69,130,43,122,122,193,200,78,68,44,42,49,176,11,159,232,200,219,97,32,39,4,85,120,127,227,110,45,167,89,95,114,193,208,2,70,221,45,143,94,27,212,95,246,151,199,36,168,16,119,204,147,137,
147,107,159,13,133,120,139,7,119,209,23,84,164,171,174,45,241,195,46,234,31,5,128,91,225,184,14,215,14,15,5,176,203,8,232,162,95,188,107,91,155,124,74,52,247,122,77,209,224,238,105,93,245,34,37,106,178,
221,156,124,119,176,241,4,8,198,70,104,213,245,56,25,218,36,121,73,149,58,161,143,123,221,71,93,223,198,131,56,14,137,94,199,186,169,157,220,241,90,177,185,241,159,113,225,199,107,52,108,130,227,222,99,
161,242,148,142,112,167,54,118,36,44,76,46,192,177,36,46,158,114,227,202,143,23,195,117,27,127,238,217,14,8,56,230,243,120,65,46,208,6,135,43,15,223,121,97,190,68,155,4,71,176,56,36,19,144,16,46,192,109,
226,134,197,11,81,140,233,224,94,210,114,142,205,14,232,84,154,228,164,176,185,6,148,129,221,18,211,3,248,212,240,130,166,25,56,186,232,131,115,71,251,192,174,96,55,57,84,18,247,251,205,227,176,236,221,
219,77,91,146,189,75,220,180,8,167,226,142,247,237,155,229,170,1,36,87,38,175,222,136,44,156,38,18,203,25,36,117,215,166,156,253,191,200,153,156,214,130,171,192,252,234,88,187,110,64,61,135,246,229,82,
114,2,238,70,54,227,105,115,174,55,119,76,128,208,75,229,119,0,122,17,38,167,1,47,149,47,26,164,203,158,151,108,240,252,115,146,192,106,23,199,129,75,81,160,189,46,29,147,58,101,38,101,6,70,9,62,163,22,
202,142,104,121,170,27,69,69,107,97,201,227,69,61,174,101,79,26,180,244,177,161,140,157,177,84,170,121,198,31,199,127,195,58,186,198,127,187,182,109,197,83,132,141,14,11,182,141,83,143,59,233,248,110,
90,148,227,194,112,87,4,226,150,80,250,227,92,206,249,28,111,118,98,101,142,47,156,179,224,147,177,1,140,143,142,127,198,153,20,74,57,218,174,132,44,181,88,175,195,14,51,57,17,98,225,78,22,199,70,176,
93,80,219,196,145,95,86,91,140,0,228,125,105,34,1,0,59,217,51,124,113,126,52,47,116,146,185,107,245,77,229,81,135,58,208,148,58,57,174,9,224,46,145,90,102,254,165,146,198,186,235,204,219,148,182,18,180,
141,221,97,188,6,232,119,24,40,192,98,80,6,160,226,29,178,6,94,203,52,248,146,228,67,241,110,216,209,241,32,222,178,20,152,151,157,200,110,227,123,28,140,153,78,146,105,16,33,144,208,127,221,36,71,150,
61,183,38,39,68,28,150,119,152,102,80,245,186,89,82,196,20,157,32,219,123,178,244,32,49,79,157,163,96,139,251,105,175,103,150,87,51,56,78,212,193,205,75,68,42,99,215,62,94,210,106,199,119,11,218,92,117,
24,125,192,107,217,167,12,169,141,238,160,35,221,44,52,67,167,96,42,150,180,42,49,43,22,35,118,168,115,124,210,115,220,147,115,236,234,227,175,199,223,143,197,58,222,179,62,30,207,118,27,11,19,155,227,
106,95,151,177,70,43,127,97,220,232,115,28,95,163,100,57,95,99,53,111,194,129,81,220,165,241,126,23,157,56,198,118,157,71,215,151,20,221,166,93,34,92,127,185,197,175,171,165,11,178,226,232,19,84,21,48,
191,248,184,201,83,16,38,139,16,234,74,54,49,151,91,196,176,237,234,250,110,163,144,191,204,82,98,170,42,109,174,55,131,213,150,62,56,155,124,20,32,204,10,164,134,221,122,35,52,1,175,209,225,223,198,142,
92,66,181,25,227,51,215,75,23,213,128,130,40,200,86,33,183,83,181,239,140,250,64,29,156,54,125,254,156,156,83,120,167,154,113,33,216,46,211,173,249,121,188,163,146,15,73,219,11,141,223,138,45,97,48,55,
95,141,219,21,219,26,150,241,250,8,60,221,178,152,221,155,3,144,138,83,51,72,142,182,117,140,184,7,150,45,79,105,135,154,47,124,246,221,142,23,107,22,18,178,26,136,111,178,204,179,97,130,184,14,17,159,
205,249,58,202,147,236,204,161,44,62,195,183,239,223,133,196,216,221,162,218,216,64,196,157,52,197,115,73,146,98,84,130,13,37,227,120,80,175,113,61,206,113,157,159,163,92,27,117,96,123,245,53,31,99,67,
65,117,122,162,122,28,101,195,184,165,71,29,159,163,58,132,190,158,227,194,140,141,239,58,32,163,24,91,250,115,252,121,83,29,155,80,47,141,7,109,28,144,227,142,143,15,59,202,166,209,224,148,81,93,148,
156,168,5,113,135,150,237,238,43,151,50,177,141,139,169,109,26,83,38,126,169,213,249,41,210,116,75,122,1,120,133,52,166,81,169,30,14,153,228,65,208,250,156,36,149,200,18,68,61,227,218,7,29,234,81,237,
197,13,2,200,231,79,217,189,160,99,237,50,76,93,205,158,199,194,164,143,227,212,185,235,161,56,141,175,25,206,227,103,236,193,31,69,205,202,40,20,73,83,193,114,231,206,212,203,132,127,56,231,93,68,36,
169,54,97,136,99,157,120,170,143,237,4,90,103,95,204,200,234,142,26,60,102,122,27,27,58,15,5,80,234,92,17,247,151,140,209,90,117,202,147,166,55,123,104,246,73,116,0,67,61,249,75,52,206,168,87,30,245,120,
16,65,62,193,169,114,58,17,14,19,150,179,47,51,79,50,166,45,225,66,242,54,12,203,118,39,201,250,124,102,170,215,24,67,155,72,45,135,184,139,101,210,113,190,58,112,109,53,208,9,37,225,56,186,243,216,203,
174,241,31,202,99,60,236,207,241,48,35,209,234,133,29,20,183,96,44,39,108,138,120,70,171,103,223,13,124,130,215,40,184,159,99,97,60,198,15,174,99,55,226,93,26,31,0,47,122,142,55,223,212,84,230,188,229,
61,27,222,212,147,231,108,21,29,211,125,18,121,187,71,130,155,101,19,225,89,179,44,150,82,152,184,74,151,7,167,78,197,132,9,157,53,22,11,10,232,24,87,230,192,29,157,122,214,108,75,200,63,227,38,90,178,
89,29,204,20,129,239,139,143,194,226,17,24,9,39,107,153,70,252,12,187,164,136,203,233,173,181,43,117,213,102,94,1,87,157,167,8,26,75,184,94,124,77,13,187,68,222,205,22,102,85,11,234,58,37,176,146,0,135,
193,107,76,68,138,51,190,171,89,239,218,161,52,73,2,157,75,243,125,121,51,141,107,238,215,216,53,193,218,86,155,15,248,127,110,230,146,61,199,23,187,233,146,172,29,217,148,139,19,135,209,96,89,110,140,
114,136,250,168,56,177,57,125,169,111,7,181,30,221,187,83,138,157,131,46,184,72,223,227,245,124,218,206,69,93,248,198,201,35,159,148,230,62,237,26,59,233,216,17,19,136,4,207,241,223,126,142,235,252,57,
126,255,49,94,245,57,30,200,215,120,93,168,246,78,124,180,213,79,7,6,143,200,13,217,199,10,223,198,69,178,165,67,66,103,116,142,227,25,197,209,58,254,125,156,2,68,157,50,224,39,60,137,1,172,179,200,46,
233,203,83,211,29,128,153,148,86,106,185,110,152,22,132,21,72,94,223,198,1,28,61,117,193,42,33,76,199,89,75,119,92,166,84,93,220,73,34,11,48,156,196,34,45,161,89,187,28,230,4,148,71,96,20,134,58,119,85,
221,153,172,226,27,135,134,4,244,156,33,219,0,223,174,197,24,151,17,194,242,244,135,84,254,69,14,180,228,124,6,131,61,192,234,171,78,182,11,13,2,118,189,110,196,7,70,190,76,117,60,116,53,20,118,210,95,
242,144,58,51,249,26,218,200,244,110,105,9,33,35,26,214,54,103,215,188,166,195,68,179,185,173,32,52,167,9,55,59,145,216,255,61,2,14,66,27,67,3,47,232,98,210,62,67,157,2,193,160,255,121,211,144,66,39,100,
85,3,71,207,82,103,47,218,207,92,227,225,226,9,223,58,229,50,146,63,208,55,8,96,98,67,124,3,46,195,248,126,104,85,142,125,207,207,113,58,124,142,235,247,115,108,60,159,227,253,31,227,115,97,51,124,141,
123,115,160,132,180,70,103,123,142,151,220,1,17,37,192,144,4,137,71,155,190,150,177,121,213,215,56,158,55,236,158,9,126,38,227,127,227,195,39,224,148,7,47,12,230,190,250,224,204,0,244,2,138,58,44,200,
30,104,210,187,39,64,60,150,13,186,106,122,84,102,48,105,113,23,47,230,247,50,83,191,174,106,123,185,176,32,140,164,47,231,249,132,49,87,79,109,230,102,191,153,242,77,174,190,119,89,163,144,94,86,155,
149,122,171,234,94,147,40,72,110,13,67,42,31,79,216,73,187,163,78,72,169,67,167,92,146,195,174,228,4,177,25,107,13,142,33,206,33,96,137,197,55,28,181,222,225,17,32,137,14,220,250,237,225,185,216,154,219,
174,116,175,176,100,33,86,235,1,132,193,110,150,75,46,15,196,139,236,182,84,233,243,248,69,131,3,153,49,113,225,64,27,200,95,181,121,43,108,5,95,199,18,140,105,188,214,139,28,206,196,69,152,93,195,198,
196,231,48,176,191,44,150,200,218,29,173,250,51,7,83,139,174,42,196,110,217,60,117,76,111,198,194,101,135,61,202,136,11,39,46,142,236,241,179,176,246,253,28,15,221,31,227,237,225,210,245,24,159,11,37,
227,107,148,110,90,148,99,231,24,91,106,91,199,2,224,238,55,94,12,152,229,120,80,174,215,120,243,29,232,194,184,53,235,168,235,198,58,101,39,158,242,184,43,201,55,60,217,207,49,108,221,46,7,216,87,199,
245,86,219,206,209,74,143,79,220,182,8,243,55,81,120,85,60,47,76,173,68,147,74,51,221,42,28,128,227,72,33,166,86,28,155,130,35,172,118,27,141,246,57,25,81,74,90,154,134,10,189,68,50,130,65,223,69,187,
38,77,183,150,244,86,215,45,246,93,207,42,11,80,55,178,161,9,119,8,251,89,162,80,129,25,19,110,124,116,225,17,154,137,221,173,146,101,228,89,175,45,183,169,144,180,180,180,217,235,18,57,149,217,56,230,
233,35,49,91,211,211,28,164,37,136,39,140,192,150,233,9,121,144,84,34,91,190,195,4,140,236,7,154,15,128,31,90,28,191,175,151,172,88,82,4,108,165,60,117,57,43,24,241,228,138,42,21,130,252,216,154,200,146,
98,212,93,89,157,27,180,144,245,4,166,19,243,25,199,67,30,205,78,113,233,37,253,248,42,2,78,222,251,184,22,125,223,190,143,85,213,145,40,59,190,70,59,199,181,60,198,251,63,199,237,25,101,226,242,57,62,
243,31,227,215,62,199,42,226,110,57,190,199,17,19,157,7,80,32,29,185,149,70,176,248,222,227,63,61,185,32,59,152,244,173,224,232,30,11,152,139,146,119,221,71,88,100,52,182,44,170,126,229,195,237,252,62,
139,150,46,103,50,226,239,142,249,180,137,155,115,218,76,116,221,118,123,24,244,249,148,115,90,210,108,136,122,94,54,216,18,20,5,173,49,189,42,13,241,144,236,235,156,239,232,12,121,236,165,102,175,69,
71,240,5,167,209,35,51,30,191,144,186,102,165,126,197,184,109,177,69,202,168,96,108,251,103,88,133,164,104,53,112,36,133,152,75,137,209,102,242,145,125,145,207,40,121,49,67,155,204,194,218,172,129,15,
143,160,211,13,3,217,86,46,45,34,112,147,11,221,60,200,20,38,0,95,124,67,91,248,136,59,110,58,252,38,47,155,167,166,28,182,57,206,215,4,87,244,84,163,137,133,71,207,34,78,143,242,251,119,20,167,235,6,
106,121,43,68,45,129,168,14,158,90,236,224,204,235,80,85,39,95,236,21,118,218,79,143,242,170,143,178,96,60,123,215,216,183,198,142,183,110,117,124,78,204,24,49,150,123,141,191,122,142,205,8,225,152,159,
227,190,254,28,27,12,118,207,215,56,235,143,255,47,192,0,169,192,85,144,224,201,147,170,0,0,0,0,73,69,78,68,174,66,96,130,0,0};

const char* PadField::pad_light_png = (const char*) resource_PadField_pad_light_png;
const int PadField::pad_light_pngSize = 44388;


//[EndFile] You can add extra defines here...
//[/EndFile]
