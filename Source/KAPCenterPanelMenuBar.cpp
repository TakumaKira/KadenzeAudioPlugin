/*
  ==============================================================================

    KAPCenterPanelMenuBar.cpp
    Created: 2 May 2019 10:34:01pm
    Author:  Takuma Kira

  ==============================================================================
*/

#include "KAPCenterPanelMenuBar.h"

KAPCenterPanelMenuBar::KAPCenterPanelMenuBar(KadenzeAudioPluginAudioProcessor* inProcessor)
:   KAPPanelBase(inProcessor)
{
    setSize(CENTER_PANEL_MENU_BAR_WIDTH,
            CENTER_PANEL_MENU_BAR_HEIGHT);
}

KAPCenterPanelMenuBar::~KAPCenterPanelMenuBar()
{
    
}
