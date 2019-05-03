/*
  ==============================================================================

    KAPGainPanel.h
    Created: 2 May 2019 10:34:48pm
    Author:  Takuma Kira

  ==============================================================================
*/

#pragma once

#include "KAPPanelBase.h"

class KAPGainPanel
:   public KAPPanelBase
{
public:
    
    KAPGainPanel(KadenzeAudioPluginAudioProcessor* inProcessor);
    ~KAPGainPanel();
    
private:
};
