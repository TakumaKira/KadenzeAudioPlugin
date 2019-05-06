/*
  ==============================================================================

    KAPGainPanel.cpp
    Created: 2 May 2019 10:34:48pm
    Author:  Takuma Kira

  ==============================================================================
*/

#include "KAPGainPanel.h"
#include "KAPParameters.h"
#include "KAPHelperFunctions.h"

KAPGainPanel::KAPGainPanel(KadenzeAudioPluginAudioProcessor* inProcessor)
:   KAPPanelBase(inProcessor)
{
    setSize(GAIN_PANEL_WIDTH,
            GAIN_PANEL_HEIGHT);
    
    const int meter_width = 64;
    mVuMeter = new KAPVuMeter(mProcessor);
    mVuMeter->setBounds((getWidth() * 0.5) - (meter_width * 0.5),
                        (getHeight() * 0.55) - (meter_width*0.5),
                        meter_width,
                        getHeight() * 0.45);
    addAndMakeVisible(mVuMeter);
}

KAPGainPanel::~KAPGainPanel()
{
    
}

void KAPGainPanel::paint(Graphics& g)
{
    KAPPanelBase::paint(g);
    
    if (mSlider) {
        paintComponentLabel(g, mSlider);
    }
}

void KAPGainPanel::setParameterID(int inParameterID)
{
    mSlider = new KAPParameterSlider(mProcessor->parameters, KAPParameterID[inParameterID]);
    
    const int slider_size = 54;
    
    mSlider->setBounds((getWidth() * 0.5) - (slider_size * 0.5),
                       (getHeight() * 0.25) - (slider_size * 0.5) - 10,
                       slider_size,
                       slider_size);
    
    addAndMakeVisible(mSlider);
    
    mVuMeter->setParameterID(inParameterID);
}
