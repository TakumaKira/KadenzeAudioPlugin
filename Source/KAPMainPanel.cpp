/*
  ==============================================================================

    KAPMainPanel.cpp
    Created: 2 May 2019 10:33:06pm
    Author:  Takuma Kira

  ==============================================================================
*/

#include "KAPMainPanel.h"

KAPMainPanel::KAPMainPanel(KadenzeAudioPluginAudioProcessor* inProcessor)
:   KAPPanelBase(inProcessor)
{
    setSize(MAIN_PANEL_WIDTH,
            MAIN_PANEL_HEIGHT);
}

KAPMainPanel::~KAPMainPanel()
{
    
}
