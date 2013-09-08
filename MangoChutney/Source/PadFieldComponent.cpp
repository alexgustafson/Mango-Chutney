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
    addAndMakeVisible (pad1 = new DrumPad());
    addAndMakeVisible (pad2 = new DrumPad());
    addAndMakeVisible (pad3 = new DrumPad());
    addAndMakeVisible (pad4 = new DrumPad());
    addAndMakeVisible (pad5 = new DrumPad());
    addAndMakeVisible (pad6 = new DrumPad());
    addAndMakeVisible (pad7 = new DrumPad());
    addAndMakeVisible (pad8 = new DrumPad());
    addAndMakeVisible (pad9 = new DrumPad());
    addAndMakeVisible (pad10 = new DrumPad());
    addAndMakeVisible (pad11 = new DrumPad());
    addAndMakeVisible (pad12 = new DrumPad());
    addAndMakeVisible (pad13 = new DrumPad());
    addAndMakeVisible (pad14 = new DrumPad());
    addAndMakeVisible (pad15 = new DrumPad());
    addAndMakeVisible (pad16 = new DrumPad());

    //[UserPreSize]
    //[/UserPreSize]

    setSize (600, 400);


    //[Constructor] You can add your own custom stuff here..
    pad1->setName("pad0");
    pad2->setName("pad1");
    pad3->setName("pad2");
    pad4->setName("pad3");
    pad5->setName("pad4");
    pad6->setName("pad5");
    pad7->setName("pad6");
    pad8->setName("pad7");
    pad9->setName("pad8");
    pad10->setName("pad9");
    pad11->setName("pad10");
    pad12->setName("pad11");
    pad13->setName("pad12");
    pad14->setName("pad13");
    pad15->setName("pad14");
    pad16->setName("pad15");

    pad1->setPadNr(0);
    pad2->setPadNr(1);
    pad3->setPadNr(2);
    pad4->setPadNr(3);
    pad5->setPadNr(4);
    pad6->setPadNr(5);
    pad7->setPadNr(6);
    pad8->setPadNr(7);
    pad9->setPadNr(8);
    pad10->setPadNr(9);
    pad11->setPadNr(10);
    pad12->setPadNr(11);
    pad13->setPadNr(12);
    pad14->setPadNr(13);
    pad15->setPadNr(14);
    pad16->setPadNr(15);


    pads.add(pad1);
    pads.add(pad2);
    pads.add(pad3);
    pads.add(pad4);
    pads.add(pad5);
    pads.add(pad6);
    pads.add(pad7);
    pads.add(pad8);
    pads.add(pad9);
    pads.add(pad10);
    pads.add(pad11);
    pads.add(pad12);
    pads.add(pad13);
    pads.add(pad14);
    pads.add(pad15);
    pads.add(pad16);



    //[/Constructor]
}

PadField::~PadField()
{
    //[Destructor_pre]. You can add your own custom destruction code here..
    pads.clear(false);
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

    //[/Destructor]
}

//==============================================================================
void PadField::paint (Graphics& g)
{
    //[UserPrePaint] Add your own custom painting code here..
    //[/UserPrePaint]

    //[UserPaint] Add your own custom painting code here..
    //[/UserPaint]
}

void PadField::resized()
{
    pad1->setBounds (0, 0, 112, 112);
    pad2->setBounds (112, 0, 112, 112);
    pad3->setBounds (224, 0, 112, 112);
    pad4->setBounds (336, 0, 112, 112);
    pad5->setBounds (0, 112, 112, 112);
    pad6->setBounds (112, 112, 112, 112);
    pad7->setBounds (224, 112, 112, 112);
    pad8->setBounds (336, 112, 112, 112);
    pad9->setBounds (0, 224, 112, 112);
    pad10->setBounds (112, 224, 112, 112);
    pad11->setBounds (224, 224, 112, 112);
    pad12->setBounds (336, 224, 112, 112);
    pad13->setBounds (0, 336, 112, 112);
    pad14->setBounds (112, 336, 112, 112);
    pad15->setBounds (224, 336, 112, 112);
    pad16->setBounds (336, 336, 112, 112);
    //[UserResized] Add your own custom resize handling here..



    int i = 0;
    int j = 0;

    if(getHeight() >= getWidth())
    {
        int padWidth = (int)getWidth() / 4;
        int padHeight = (int)getHeight() / 4;
        int padVerticalOffset = (int) padHeight - 2;

        pad1->setBounds(padWidth * (i++ % 4), padVerticalOffset * j, padWidth, padHeight);
        pad2->setBounds(padWidth * (i++ % 4), padVerticalOffset * j, padWidth, padHeight);
        pad3->setBounds(padWidth * (i++ % 4), padVerticalOffset * j, padWidth, padHeight);
        pad4->setBounds(padWidth * (i++ % 4), padVerticalOffset * j++, padWidth, padHeight);
        pad5->setBounds(padWidth * (i++ % 4), padVerticalOffset * j, padWidth, padHeight);
        pad6->setBounds(padWidth * (i++ % 4), padVerticalOffset * j, padWidth, padHeight);
        pad7->setBounds(padWidth * (i++ % 4), padVerticalOffset * j, padWidth, padHeight);
        pad8->setBounds(padWidth * (i++ % 4), padVerticalOffset * j++, padWidth, padHeight);
        pad9->setBounds(padWidth * (i++ % 4), padVerticalOffset * j, padWidth, padHeight);
        pad10->setBounds(padWidth * (i++ % 4), padVerticalOffset * j, padWidth, padHeight);
        pad11->setBounds(padWidth * (i++ % 4), padVerticalOffset * j, padWidth, padHeight);
        pad12->setBounds(padWidth * (i++ % 4), padVerticalOffset * j++, padWidth, padHeight);
        pad13->setBounds(padWidth * (i++ % 4), padVerticalOffset * j, padWidth, padHeight);
        pad14->setBounds(padWidth * (i++ % 4), padVerticalOffset * j, padWidth, padHeight);
        pad15->setBounds(padWidth * (i++ % 4), padVerticalOffset * j, padWidth, padHeight);
        pad16->setBounds(padWidth * (i++ % 4), padVerticalOffset * j++, padWidth, padHeight);

    }else
    {
        int padWidth = (int)getWidth() / 8;
        int padHeight = (int)getHeight() / 2;
        int padVerticalOffset = (int) padWidth - 2;

        pad1->setBounds(padWidth * (i++ % 8), padVerticalOffset * j, padWidth, padHeight);
        pad2->setBounds(padWidth * (i++ % 8), padVerticalOffset * j, padWidth, padHeight);
        pad3->setBounds(padWidth * (i++ % 8), padVerticalOffset * j, padWidth, padHeight);
        pad4->setBounds(padWidth * (i++ % 8), padVerticalOffset * j, padWidth, padHeight);
        pad5->setBounds(padWidth * (i++ % 8), padVerticalOffset * j, padWidth, padHeight);
        pad6->setBounds(padWidth * (i++ % 8), padVerticalOffset * j, padWidth, padHeight);
        pad7->setBounds(padWidth * (i++ % 8), padVerticalOffset * j, padWidth, padHeight);
        pad8->setBounds(padWidth * (i++ % 8), padVerticalOffset * j++, padWidth, padHeight);
        pad9->setBounds(padWidth * (i++ % 8), padVerticalOffset * j, padWidth, padHeight);
        pad10->setBounds(padWidth * (i++ % 8), padVerticalOffset * j, padWidth, padHeight);
        pad11->setBounds(padWidth * (i++ % 8), padVerticalOffset * j, padWidth, padHeight);
        pad12->setBounds(padWidth * (i++ % 8), padVerticalOffset * j, padWidth, padHeight);
        pad13->setBounds(padWidth * (i++ % 8), padVerticalOffset * j, padWidth, padHeight);
        pad14->setBounds(padWidth * (i++ % 8), padVerticalOffset * j, padWidth, padHeight);
        pad15->setBounds(padWidth * (i++ % 8), padVerticalOffset * j, padWidth, padHeight);
        pad16->setBounds(padWidth * (i++ % 8), padVerticalOffset * j++, padWidth, padHeight);
    }

    //[/UserResized]
}



//[MiscUserCode] You can add your own definitions of your custom methods or any other code here...



//[/MiscUserCode]


//==============================================================================
#if 0
/*  -- Introjucer information section --

    This is where the Introjucer stores the metadata that describe this GUI layout, so
    make changes in here at your peril!

BEGIN_JUCER_METADATA

<JUCER_COMPONENT documentType="Component" className="PadField" componentName=""
                 parentClasses="public Component" constructorParams="" variableInitialisers=""
                 snapPixels="8" snapActive="1" snapShown="1" overlayOpacity="0.33"
                 fixedSize="0" initialWidth="600" initialHeight="400">
  <BACKGROUND backgroundColour="ffffff"/>
  <JUCERCOMP name="pad1" id="4e2a88cee6dd488a" memberName="pad1" virtualName=""
             explicitFocusOrder="0" pos="0 0 112 112" sourceFile="DrumPad.cpp"
             constructorParams=""/>
  <JUCERCOMP name="pad2" id="34d658e7330f0d7a" memberName="pad2" virtualName=""
             explicitFocusOrder="0" pos="112 0 112 112" sourceFile="DrumPad.cpp"
             constructorParams=""/>
  <JUCERCOMP name="pad3" id="6d6451fff5362597" memberName="pad3" virtualName=""
             explicitFocusOrder="0" pos="224 0 112 112" sourceFile="DrumPad.cpp"
             constructorParams=""/>
  <JUCERCOMP name="" id="5e5b05e2c206f54" memberName="pad4" virtualName=""
             explicitFocusOrder="0" pos="336 0 112 112" sourceFile="DrumPad.cpp"
             constructorParams=""/>
  <JUCERCOMP name="" id="fd966361ad1c634a" memberName="pad5" virtualName=""
             explicitFocusOrder="0" pos="0 112 112 112" sourceFile="DrumPad.cpp"
             constructorParams=""/>
  <JUCERCOMP name="" id="f0b0eba5435bd252" memberName="pad6" virtualName=""
             explicitFocusOrder="0" pos="112 112 112 112" sourceFile="DrumPad.cpp"
             constructorParams=""/>
  <JUCERCOMP name="" id="26352b07ec7a7586" memberName="pad7" virtualName=""
             explicitFocusOrder="0" pos="224 112 112 112" sourceFile="DrumPad.cpp"
             constructorParams=""/>
  <JUCERCOMP name="" id="dd0334a483c87e3e" memberName="pad8" virtualName=""
             explicitFocusOrder="0" pos="336 112 112 112" sourceFile="DrumPad.cpp"
             constructorParams=""/>
  <JUCERCOMP name="" id="554a1cd815592613" memberName="pad9" virtualName=""
             explicitFocusOrder="0" pos="0 224 112 112" sourceFile="DrumPad.cpp"
             constructorParams=""/>
  <JUCERCOMP name="" id="534ac94151d53edf" memberName="pad10" virtualName=""
             explicitFocusOrder="0" pos="112 224 112 112" sourceFile="DrumPad.cpp"
             constructorParams=""/>
  <JUCERCOMP name="" id="186ec0bddc11c2b9" memberName="pad11" virtualName=""
             explicitFocusOrder="0" pos="224 224 112 112" sourceFile="DrumPad.cpp"
             constructorParams=""/>
  <JUCERCOMP name="" id="fb2fb66696a63fc" memberName="pad12" virtualName=""
             explicitFocusOrder="0" pos="336 224 112 112" sourceFile="DrumPad.cpp"
             constructorParams=""/>
  <JUCERCOMP name="" id="aa66b29cede01d41" memberName="pad13" virtualName=""
             explicitFocusOrder="0" pos="0 336 112 112" sourceFile="DrumPad.cpp"
             constructorParams=""/>
  <JUCERCOMP name="" id="2a3e30fb4cfbc15f" memberName="pad14" virtualName=""
             explicitFocusOrder="0" pos="112 336 112 112" sourceFile="DrumPad.cpp"
             constructorParams=""/>
  <JUCERCOMP name="" id="55b9a25f48748b71" memberName="pad15" virtualName=""
             explicitFocusOrder="0" pos="224 336 112 112" sourceFile="DrumPad.cpp"
             constructorParams=""/>
  <JUCERCOMP name="" id="53dfe3e6a59aaecf" memberName="pad16" virtualName=""
             explicitFocusOrder="0" pos="336 336 112 112" sourceFile="DrumPad.cpp"
             constructorParams=""/>
</JUCER_COMPONENT>

END_JUCER_METADATA
*/
#endif


//[EndFile] You can add extra defines here...
//[/EndFile]
