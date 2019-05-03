/*
  ==============================================================================

    KAPPanelBase.cpp
    Created: 2 May 2019 10:32:52pm
    Author:  Takuma Kira

  ==============================================================================
*/

#include "KAPPanelBase.h"

KAPPanelBase::KAPPanelBase(KadenzeAudioPluginAudioProcessor* inProcessor)
{
    
}

KAPPanelBase::~KAPPanelBase()
{
    
}

void KAPPanelBase::paint (Graphics& g)
{
    g.setColour(Colours::whitesmoke);
    g.fillAll();
    
    g.setColour(Colours::black);
    g.drawRect(1, 1, getWidth()-1, getHeight()-1, 2);
}
