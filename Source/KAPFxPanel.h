/*
  ==============================================================================

    KAPFxPanel.h
    Created: 2 May 2019 10:34:26pm
    Author:  Takuma Kira

  ==============================================================================
*/

#pragma once

#include "KAPPanelBase.h"

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
    
    void setFxPanelStyle(KAPFxPanelStyle inStyle);
    
private:
    
    KAPFxPanelStyle mStyle;
};
