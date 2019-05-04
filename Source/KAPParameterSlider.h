/*
  ==============================================================================

    KAPParameterSlider.h
    Created: 4 May 2019 1:14:49pm
    Author:  Takuma Kira

  ==============================================================================
*/

#pragma once

#include "JuceHeader.h"

class KAPParameterSlider
:   public Slider
{
public:
    
    KAPParameterSlider(AudioProcessorValueTreeState& stateToControl,
                       const String& parameterID);
    
    ~KAPParameterSlider();
    
private:
    
    ScopedPointer<AudioProcessorValueTreeState::SliderAttachment> mAttachment;
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR(KAPParameterSlider);
};
