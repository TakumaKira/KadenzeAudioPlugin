/*
  ==============================================================================

    KAPFxPanel.cpp
    Created: 2 May 2019 10:34:26pm
    Author:  Takuma Kira

  ==============================================================================
*/

#include "KAPFxPanel.h"

KAPFxPanel::KAPFxPanel(KadenzeAudioPluginAudioProcessor* inProcessor)
:   KAPPanelBase(inProcessor),
    mStyle(kKAPFxPanelStyle_Delay)
{
    setSize(FX_PANEL_WIDTH,
            FX_PANEL_HEIGHT);
}

KAPFxPanel::~KAPFxPanel()
{
    
}

void KAPFxPanel::paint(Graphics& g)
{
    KAPPanelBase::paint(g);
    
    switch (mStyle)
    {
        case(kKAPFxPanelStyle_Delay):{
            
            g.drawFittedText("DELAY", 0, 0, getWidth(), getHeight(), Justification::centred, 1);
        } break;
            
        case(kKAPFxPanelStyle_Chorus):{
            
            g.drawFittedText("CHORUS", 0, 0, getWidth(), getHeight(), Justification::centred, 1);
        } break;
            
        case(kKAPFxPanelStyle_TotalNumStyles):{
            
            // this shouldn't happen!
            g.drawFittedText("no no no", 0, 0, getWidth(), getHeight(), Justification::centred, 1);
            jassertfalse;
        } break;
    }
}

void KAPFxPanel::setFxPanelStyle(KAPFxPanelStyle inStyle)
{
    mStyle = inStyle;
}
