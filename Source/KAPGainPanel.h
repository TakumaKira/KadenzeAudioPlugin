/*
  ==============================================================================

    KAPGainPanel.h
    Created: 2 May 2019 10:34:48pm
    Author:  Takuma Kira

  ==============================================================================
*/

#pragma once

#include "KAPPanelBase.h"
#include "KAPParameterSlider.h"
#include "KAPVuMeter.h"

class KAPGainPanel
:   public KAPPanelBase
{
public:
    
    KAPGainPanel(KadenzeAudioPluginAudioProcessor* inProcessor);
    ~KAPGainPanel();
    
    void paint(Graphics& g) override;
    
    void setParameterID(int inParameterID);
    
private:
    
    ScopedPointer<KAPVuMeter> mVuMeter;
    ScopedPointer<KAPParameterSlider> mSlider;
};
