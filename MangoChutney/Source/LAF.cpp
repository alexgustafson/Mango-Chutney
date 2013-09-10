/*
  ==============================================================================

    LAF.cpp
    Created: 15 Aug 2013 9:17:32pm
    Author:  Alex Gustafson

  ==============================================================================
*/

#include "LAF.h"

static void drawTriangle (Graphics& g, float x1, float y1, float x2, float y2, float x3, float y3, const Colour& fill, const Colour& outline) noexcept
{
    Path p;
    p.addTriangle (x1, y1, x2, y2, x3, y3);
    g.setColour (fill);
    g.fillPath (p);
    
    g.setColour (outline);
    g.strokePath (p, PathStrokeType (0.3f));
}

void LAF::drawButtonBackground (Graphics& g,
                                              Button& button,
                                              const Colour& backgroundColour,
                                              bool isMouseOverButton,
                                              bool isButtonDown)
{
    const int width = button.getWidth();
    const int height = button.getHeight();
    
    const float indent = 1.0f;
    const int cornerSize = jmin (roundToInt (width * 0.2f),
                                roundToInt (height * 0.2f));
    

    
    Path p;
    p.addRoundedRectangle (indent, indent,
                           width - indent * 2.0f,
                           height - indent * 2.0f,
                           (float) cornerSize);
    
    
    Colour bc (backgroundColour.withMultipliedSaturation (0.3f));
    
    if (isMouseOverButton)
    {
        if (isButtonDown)
            bc = bc.brighter();
        else if (bc.getBrightness() > 0.5f)
            bc = bc.darker (0.1f);
        else
            bc = bc.brighter (0.1f);
    }
    
    g.setColour (bc);
    g.fillPath (p);
    
    g.setColour (bc.contrasting().withAlpha ((isMouseOverButton) ? 0.6f : 0.4f));
    g.strokePath (p, PathStrokeType ((isMouseOverButton) ? 1.0f : 0.5f));
}

void LAF::drawToggleButton (Graphics& g,
                                          ToggleButton& button,
                                          bool isMouseOverButton,
                                          bool isButtonDown)
{
    if (button.hasKeyboardFocus (true))
    {
        g.setColour (button.findColour (TextEditor::focusedOutlineColourId));
        g.drawRect (0, 0, button.getWidth(), button.getHeight());
    }
    
    const int tickWidth = jmin (20, button.getHeight() - 4);
    
    drawTickBox (g, button, 4.0f, (button.getHeight() - tickWidth) * 0.5f,
                 (float) tickWidth, (float) tickWidth,
                 button.getToggleState(),
                 button.isEnabled(),
                 isMouseOverButton,
                 isButtonDown);
    
    g.setColour (button.findColour (ToggleButton::textColourId));
    g.setFont (jmin (15.0f, button.getHeight() * 0.6f));
    
    if (! button.isEnabled())
        g.setOpacity (0.5f);
    
    const int textX = tickWidth + 5;
    
    g.drawFittedText (button.getButtonText(),
                      textX, 4,
                      button.getWidth() - textX - 2, button.getHeight() - 8,
                      Justification::centredLeft, 10);
}

void LAF::drawTickBox (Graphics& g,
                                     Component& /*component*/,
                                     float x, float y, float w, float h,
                                     const bool ticked,
                                     const bool isEnabled,
                                     const bool /*isMouseOverButton*/,
                                     const bool isButtonDown)
{
    Path box;
    box.addRoundedRectangle (0.0f, 2.0f, 6.0f, 6.0f, 1.0f);
    
    g.setColour (isEnabled ? Colours::blue.withAlpha (isButtonDown ? 0.3f : 0.1f)
                 : Colours::lightgrey.withAlpha (0.1f));
    
    AffineTransform trans (AffineTransform::scale (w / 9.0f, h / 9.0f).translated (x, y));
    
    g.fillPath (box, trans);
    
    g.setColour (Colours::black.withAlpha (0.6f));
    g.strokePath (box, PathStrokeType (0.9f), trans);
    
    if (ticked)
    {
        Path tick;
        tick.startNewSubPath (1.5f, 3.0f);
        tick.lineTo (3.0f, 6.0f);
        tick.lineTo (6.0f, 0.0f);
        
        g.setColour (isEnabled ? Colours::black : Colours::grey);
        g.strokePath (tick, PathStrokeType (2.5f), trans);
    }
}

void LAF::drawLinearSlider (Graphics& g,
                                          int x, int y,
                                          int w, int h,
                                          float sliderPos,
                                          float minSliderPos,
                                          float maxSliderPos,
                                          const Slider::SliderStyle style,
                                          Slider& slider)
{
    g.fillAll (slider.findColour (Slider::backgroundColourId));
    
    if (style == Slider::LinearBar)
    {
        g.setColour (slider.findColour (Slider::thumbColourId));
        g.fillRect (x, y, (int) sliderPos - x, h);
        
        g.setColour (slider.findColour (Slider::textBoxTextColourId).withMultipliedAlpha (0.5f));
        g.drawRect (x, y, (int) sliderPos - x, h);
    }
    else
    {
        g.setColour (slider.findColour (Slider::trackColourId)
                     .withMultipliedAlpha (slider.isEnabled() ? 1.0f : 0.3f));
        
        if (slider.isHorizontal())
        {
            g.fillRect (x, y + roundToInt (h * 0.8f),
                        w, roundToInt (h * 0.2f));
        }
        else
        {
            g.fillRect (x + roundToInt (w * 0.5f - jmin (3.0f, w * 0.1f)), y,
                        jmin (4, roundToInt (w * 0.2f)), h);
        }
        
        float alpha = 0.35f;
        
        if (slider.isEnabled())
            alpha = slider.isMouseOverOrDragging() ? 1.0f : 0.7f;
        
        const Colour fill (slider.findColour (Slider::thumbColourId).withAlpha (alpha));
        const Colour outline (Colours::black.withAlpha (slider.isEnabled() ? 0.7f : 0.35f));
        
        if (style == Slider::TwoValueVertical || style == Slider::ThreeValueVertical)
        {
            drawTriangle (g, x + w * 0.5f + jmin (4.0f, w * 0.3f), minSliderPos,
                          x + w * 0.5f - jmin (8.0f, w * 0.4f), minSliderPos - 7.0f,
                          x + w * 0.5f - jmin (8.0f, w * 0.4f), minSliderPos,
                          fill, outline);
            
            drawTriangle (g, x + w * 0.5f + jmin (4.0f, w * 0.3f), maxSliderPos,
                          x + w * 0.5f - jmin (8.0f, w * 0.4f), maxSliderPos,
                          x + w * 0.5f - jmin (8.0f, w * 0.4f), maxSliderPos + 7.0f,
                          fill, outline);
        }
        else if (style == Slider::TwoValueHorizontal || style == Slider::ThreeValueHorizontal)
        {
            drawTriangle (g, minSliderPos, y + h * 0.6f - jmin (4.0f, h * 0.3f),
                          minSliderPos - 7.0f, y + h * 0.9f ,
                          minSliderPos, y + h * 0.9f,
                          fill, outline);
            
            drawTriangle (g, maxSliderPos, y + h * 0.6f - jmin (4.0f, h * 0.3f),
                          maxSliderPos, y + h * 0.9f,
                          maxSliderPos + 7.0f, y + h * 0.9f,
                          fill, outline);
        }
        
        if (style == Slider::LinearHorizontal || style == Slider::ThreeValueHorizontal)
        {
            drawTriangle (g, sliderPos, y + h * 0.9f,
                          sliderPos - 7.0f, y + h * 0.2f,
                          sliderPos + 7.0f, y + h * 0.2f,
                          fill, outline);
        }
        else if (style == Slider::LinearVertical || style == Slider::ThreeValueVertical)
        {
            drawTriangle (g, x + w * 0.5f - jmin (4.0f, w * 0.3f), sliderPos,
                          x + w * 0.5f + jmin (8.0f, w * 0.4f), sliderPos - 7.0f,
                          x + w * 0.5f + jmin (8.0f, w * 0.4f), sliderPos + 7.0f,
                          fill, outline);
        }
    }
}


