/*
  ==============================================================================

    LAF.h
    Created: 15 Aug 2013 9:17:32pm
    Author:  Alex Gustafson

  ==============================================================================
*/

#ifndef __LAF_H_C639A91E__
#define __LAF_H_C639A91E__

#include "JuceHeader.h"

class LAF : public LookAndFeel
{
 
    void drawButtonBackground (Graphics& g,
                               Button& button,
                               const Colour& backgroundColour,
                               bool isMouseOverButton,
                               bool isButtonDown);
    
    void drawToggleButton (Graphics& g,
                                ToggleButton& button,
                                bool isMouseOverButton,
                                bool isButtonDown);
    
    void drawTickBox (Graphics& g,
                           Component& /*component*/,
                           float x, float y, float w, float h,
                           const bool ticked,
                           const bool isEnabled,
                           const bool /*isMouseOverButton*/,
                           const bool isButtonDown);
    
    void drawLinearSlider (Graphics& g,
                                int x, int y,
                                int w, int h,
                                float sliderPos,
                                float minSliderPos,
                                float maxSliderPos,
                                const Slider::SliderStyle style,
                                Slider& slider);
    
    
};



#endif  // __LAF_H_C639A91E__
