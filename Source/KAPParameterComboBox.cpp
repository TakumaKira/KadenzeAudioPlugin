/*
  ==============================================================================

    KAPParameterComboBox.cpp
    Created: 4 May 2019 1:15:17pm
    Author:  Takuma Kira

  ==============================================================================
*/

#include "KAPParameterComboBox.h"

KAPParameterComboBox::KAPParameterComboBox(AudioProcessorValueTreeState& stateToControl, const String& parameterID)
:   juce::ComboBox(parameterID)
{
    mAttachment = new AudioProcessorValueTreeState::ComboBoxAttachment(stateToControl, parameterID, *this);
}

KAPParameterComboBox::~KAPParameterComboBox()
{
    
}
