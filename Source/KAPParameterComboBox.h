/*
  ==============================================================================

    KAPParameterComboBox.h
    Created: 4 May 2019 1:15:17pm
    Author:  Takuma Kira

  ==============================================================================
*/

#pragma once

#include "JuceHeader.h"

class KAPParameterComboBox
:   public ComboBox
{
public:
    
    KAPParameterComboBox(AudioProcessorValueTreeState& stateToControl, const String& parameterID);
    ~KAPParameterComboBox();
    
private:
    
    ScopedPointer<AudioProcessorValueTreeState::ComboBoxAttachment> mAttachment;
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR(KAPParameterComboBox);
};
