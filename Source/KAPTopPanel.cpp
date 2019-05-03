/*
  ==============================================================================

    KAPTopPanel.cpp
    Created: 2 May 2019 10:35:16pm
    Author:  Takuma Kira

  ==============================================================================
*/

#include "KAPTopPanel.h"

KAPTopPanel::KAPTopPanel(KadenzeAudioPluginAudioProcessor* inProcessor)
:   KAPPanelBase(inProcessor)
{
    setSize(TOP_PANEL_WIDTH,
            TOP_PANEL_HEIGHT);
}

KAPTopPanel::~KAPTopPanel()
{
    
}
