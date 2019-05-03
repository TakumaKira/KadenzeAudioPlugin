/*
  ==============================================================================

    KAPCenterPanel.h
    Created: 2 May 2019 10:33:33pm
    Author:  Takuma Kira

  ==============================================================================
*/

#pragma once

#include "KAPPanelBase.h"

#include "KAPCenterPanelMenuBar.h"
#include "KAPFxPanel.h"

class KAPCenterPanel
:   public KAPPanelBase
{
public:
    
    KAPCenterPanel(KadenzeAudioPluginAudioProcessor* inProcessor);
    ~KAPCenterPanel();

private:
    
    ScopedPointer<KAPCenterPanelMenuBar> mMenuBar;
    ScopedPointer<KAPFxPanel> mFxPanel;
};
