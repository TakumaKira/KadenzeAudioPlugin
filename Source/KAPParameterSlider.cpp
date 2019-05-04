/*
  ==============================================================================

    KAPParameterSlider.cpp
    Created: 4 May 2019 1:14:49pm
    Author:  Takuma Kira

  ==============================================================================
*/

#include "KAPParameterSlider.h"

KAPParameterSlider::KAPParameterSlider(AudioProcessorValueTreeState& stateToControl,
                   const String& parameterID)
:   juce::Slider(parameterID)
{
    setSliderStyle(SliderStyle::RotaryHorizontalVerticalDrag);
    setTextBoxStyle(Slider::TextEntryBoxPosition::TextBoxBelow, false, 0, 0);
    
    setRange(0.0f, 1.0f, 0.001f);
    
    mAttachment = new AudioProcessorValueTreeState::SliderAttachment(stateToControl, parameterID, *this);
}

KAPParameterSlider::~KAPParameterSlider()
{
    
}
