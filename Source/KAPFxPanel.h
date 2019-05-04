/*
  ==============================================================================

    KAPFxPanel.h
    Created: 2 May 2019 10:34:26pm
    Author:  Takuma Kira

  ==============================================================================
*/

#pragma once

#include "KAPPanelBase.h"
#include "KAPParameterSlider.h"

enum KAPFxPanelStyle
{
    kKAPFxPanelStyle_Delay,
    kKAPFxPanelStyle_Chorus,
    kKAPFxPanelStyle_TotalNumStyles
};

class KAPFxPanel
:   public KAPPanelBase
{
public:
    
    KAPFxPanel(KadenzeAudioPluginAudioProcessor* inProcessor);
    ~KAPFxPanel();
    
    void paint(Graphics& g) override;
    
    void setFxPanelStyle(KAPFxPanelStyle inStyle);
    
private:
    
    KAPFxPanelStyle mStyle;
    
    OwnedArray<KAPParameterSlider> mSliders;
};
