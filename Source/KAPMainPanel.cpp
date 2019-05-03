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
    
    mTopPanel = new KAPTopPanel(inProcessor);
    mTopPanel->setTopLeftPosition(0, 0);
    addAndMakeVisible(mTopPanel);
}

KAPMainPanel::~KAPMainPanel()
{
    
}
