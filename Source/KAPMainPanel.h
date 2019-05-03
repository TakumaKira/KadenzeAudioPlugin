/*
  ==============================================================================

    KAPMainPanel.h
    Created: 2 May 2019 10:33:06pm
    Author:  Takuma Kira

  ==============================================================================
*/

#pragma once

#include "KAPPanelBase.h"

#include "KAPTopPanel.h"
#include "KAPGainPanel.h"
#include "KAPCenterPanel.h"

class KAPMainPanel
:   public KAPPanelBase
{
public:
    
    KAPMainPanel(KadenzeAudioPluginAudioProcessor* inProcessor);
    ~KAPMainPanel();

private:
    
    ScopedPointer<KAPTopPanel> mTopPanel;
    ScopedPointer<KAPGainPanel> mInputGainPanel;
    ScopedPointer<KAPGainPanel> mOutputGainPanel;
    ScopedPointer<KAPCenterPanel> mCenterPanel;
};
