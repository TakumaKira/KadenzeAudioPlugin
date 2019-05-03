/*
  ==============================================================================

    KAPCenterPanel.cpp
    Created: 2 May 2019 10:33:33pm
    Author:  Takuma Kira

  ==============================================================================
*/

#include "KAPCenterPanel.h"

KAPCenterPanel::KAPCenterPanel(KadenzeAudioPluginAudioProcessor* inProcessor)
:   KAPPanelBase(inProcessor)
{
    setSize(CENTER_PANEL_WIDTH,
            CENTER_PANEL_HEIGHT);
    
    mMenuBar = new KAPCenterPanelMenuBar(inProcessor);
    mMenuBar->setTopLeftPosition(0, 0);
    addAndMakeVisible(mMenuBar);
}

KAPCenterPanel::~KAPCenterPanel()
{
    
}
