/*
  ==============================================================================

    This file was auto-generated!

  ==============================================================================
*/

#include "MainComponent.h"



//==============================================================================
MainContentComponent::MainContentComponent()
{
    setSize (500, 400);
    
    juce::File theDocumentDirectory = File::getSpecialLocation(File::currentApplicationFile).getSiblingFile("Documents");
    DirectoryIterator iter (theDocumentDirectory, true);
    
    juce::String fileName = theDocumentDirectory.getFileName();
    
    while (iter.next())
    {
        File theFileItFound (iter.getFile());
        std::cout << theFileItFound.getFileName();
    }
    std::cout << theDocumentDirectory.getFullPathName();
    
}

MainContentComponent::~MainContentComponent()
{
}

void MainContentComponent::paint (Graphics& g)
{
    g.fillAll (Colour (0xffeeddff));

}

void MainContentComponent::resized()
{
    // This is called when the MainContentComponent is resized.
    // If you add any child components, this is where you should
    // update their positions.
}
