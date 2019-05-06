/*
  ==============================================================================

    KAPPanelBase.cpp
    Created: 2 May 2019 10:32:52pm
    Author:  Takuma Kira

  ==============================================================================
*/

#include "KAPPanelBase.h"
#include "KAPInterfaceDefines.h"

KAPPanelBase::KAPPanelBase(KadenzeAudioPluginAudioProcessor* inProcessor)
:   mProcessor(inProcessor)
{
    
}

KAPPanelBase::~KAPPanelBase()
{
    
}

void KAPPanelBase::mouseEnter (const MouseEvent& event)
{
    repaint();
}

void KAPPanelBase::mouseExit (const MouseEvent& event)
{
    repaint();
}

void KAPPanelBase::paint (Graphics& g)
{
    if (isMouseOver()) {
        g.setColour(KAPColour_4);
        g.fillAll();
    }
}
