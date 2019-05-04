/*
  ==============================================================================

    KAPGainPanel.cpp
    Created: 2 May 2019 10:34:48pm
    Author:  Takuma Kira

  ==============================================================================
*/

#include "KAPGainPanel.h"

#include "KAPParameters.h"

KAPGainPanel::KAPGainPanel(KadenzeAudioPluginAudioProcessor* inProcessor)
:   KAPPanelBase(inProcessor)
{
    setSize(GAIN_PANEL_WIDTH,
            GAIN_PANEL_HEIGHT);
}

KAPGainPanel::~KAPGainPanel()
{
    
}

void KAPGainPanel::setParameterID(int inParameterID)
{
    mSlider = new KAPParameterSlider(mProcessor->parameters, KAPParameterID[inParameterID]);
}
