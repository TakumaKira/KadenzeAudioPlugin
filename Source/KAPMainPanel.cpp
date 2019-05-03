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
    
    mInputGainPanel = new KAPGainPanel(inProcessor);
    mInputGainPanel->setTopLeftPosition(0, TOP_PANEL_HEIGHT);
    addAndMakeVisible(mInputGainPanel);
    
    mOutputGainPanel = new KAPGainPanel(inProcessor);
    mOutputGainPanel->setTopLeftPosition(MAIN_PANEL_WIDTH - GAIN_PANEL_WIDTH, TOP_PANEL_HEIGHT);
    addAndMakeVisible(mOutputGainPanel);
    
    mCenterPanel = new KAPCenterPanel(inProcessor);
    mCenterPanel->setTopLeftPosition(GAIN_PANEL_WIDTH, TOP_PANEL_HEIGHT);
    addAndMakeVisible(mCenterPanel);
}

KAPMainPanel::~KAPMainPanel()
{
    
}
