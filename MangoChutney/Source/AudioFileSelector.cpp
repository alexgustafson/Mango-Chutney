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

#include "AudioFileSelector.h"


//[MiscUserDefs] You can add your own user definitions and misc code here...
//[/MiscUserDefs]

//==============================================================================
AudioFileSelector::AudioFileSelector (int flags_, const File& initialFileOrDirectory, const FileFilter* fileFilter_, FilePreviewComponent* previewComp_)
{
    addAndMakeVisible (selectButton = new TextButton ("new button"));
    selectButton->setButtonText ("select");
    selectButton->addListener (this);

    addAndMakeVisible (cancelButton = new TextButton ("new button"));
    cancelButton->setButtonText ("cancel");
    cancelButton->addListener (this);

    addAndMakeVisible (fileBrowser = new FileBrowserComponent (flags_, initialFileOrDirectory, fileFilter_, previewComp_));
    fileBrowser->setName ("fileBrowser");


    //[UserPreSize]
    //[/UserPreSize]

    setSize (400, 400);


    //[Constructor] You can add your own custom stuff here..
    fileBrowser->addListener(this);
    //[/Constructor]
}

AudioFileSelector::~AudioFileSelector()
{
    //[Destructor_pre]. You can add your own custom destruction code here..
    //[/Destructor_pre]

    selectButton = nullptr;
    cancelButton = nullptr;
    fileBrowser = nullptr;


    //[Destructor]. You can add your own custom destruction code here..
    listener = nullptr;
    //[/Destructor]
}

//==============================================================================
void AudioFileSelector::paint (Graphics& g)
{
    //[UserPrePaint] Add your own custom painting code here..
    //[/UserPrePaint]

    g.fillAll (Colour (0xffd8d8d8));

    //[UserPaint] Add your own custom painting code here..
    //[/UserPaint]
}

void AudioFileSelector::resized()
{
    selectButton->setBounds (336, 384, 63, 24);
    cancelButton->setBounds (272, 384, 63, 24);
    fileBrowser->setBounds (0, 0, 400, 376);
    //[UserResized] Add your own custom resize handling here..
    int boarder = 3;
    selectButton->setBounds (getWidth() - (2*63), getHeight() - 25, 62, 24);
    cancelButton->setBounds (getWidth() - 63, getHeight() - 25, 62, 24);
    fileBrowser->setBounds (boarder, boarder, getWidth() - boarder*2, getHeight() - (24 + boarder*2));

    //[/UserResized]
}

void AudioFileSelector::buttonClicked (Button* buttonThatWasClicked)
{
    //[UserbuttonClicked_Pre]
    //[/UserbuttonClicked_Pre]

    if (buttonThatWasClicked == selectButton)
    {
        //[UserButtonCode_selectButton] -- add your button handler code here..
        if (fileIsSelected) {
            listener->fileSelected(selectedFile);
        }
        //[/UserButtonCode_selectButton]
    }
    else if (buttonThatWasClicked == cancelButton)
    {
        //[UserButtonCode_cancelButton] -- add your button handler code here..
        listener->selectionCanceled();
        //[/UserButtonCode_cancelButton]
    }

    //[UserbuttonClicked_Post]
    //[/UserbuttonClicked_Post]
}



//[MiscUserCode] You can add your own definitions of your custom methods or any other code here...
void AudioFileSelector::selectionChanged(){

}
void AudioFileSelector::fileClicked (const File& file, const MouseEvent& e)
{
    selectedFile = file;
    fileIsSelected = true;
}
void AudioFileSelector::fileDoubleClicked (const File& file)
{

}
void AudioFileSelector::browserRootChanged (const File& newRoot)
{

}

void AudioFileSelector::setListener (AudioFileSelectorListener* const newListener)
{
    listener = newListener;
}

//[/MiscUserCode]


//==============================================================================
#if 0
/*  -- Introjucer information section --

    This is where the Introjucer stores the metadata that describe this GUI layout, so
    make changes in here at your peril!

BEGIN_JUCER_METADATA

<JUCER_COMPONENT documentType="Component" className="AudioFileSelector" componentName=""
                 parentClasses="public Component, public FileBrowserListener"
                 constructorParams="int flags_, const File&amp; initialFileOrDirectory, const FileFilter* fileFilter_, FilePreviewComponent* previewComp_"
                 variableInitialisers="" snapPixels="8" snapActive="1" snapShown="1"
                 overlayOpacity="0.330000013" fixedSize="0" initialWidth="400"
                 initialHeight="400">
  <BACKGROUND backgroundColour="ffd8d8d8"/>
  <TEXTBUTTON name="new button" id="36e73d197a61a3a" memberName="selectButton"
              virtualName="" explicitFocusOrder="0" pos="336 384 63 24" buttonText="select"
              connectedEdges="0" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="new button" id="aebb7e6b836236f0" memberName="cancelButton"
              virtualName="" explicitFocusOrder="0" pos="272 384 63 24" buttonText="cancel"
              connectedEdges="0" needsCallback="1" radioGroupId="0"/>
  <GENERICCOMPONENT name="fileBrowser" id="518128bcd2656d34" memberName="fileBrowser"
                    virtualName="" explicitFocusOrder="0" pos="0 0 400 376" class="FileBrowserComponent"
                    params="flags_, initialFileOrDirectory, fileFilter_, previewComp_"/>
</JUCER_COMPONENT>

END_JUCER_METADATA
*/
#endif


//[EndFile] You can add extra defines here...
//[/EndFile]
