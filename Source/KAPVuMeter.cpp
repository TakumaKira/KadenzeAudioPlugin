/*
  ==============================================================================

    KAPVuMeter.cpp
    Created: 6 May 2019 2:55:41pm
    Author:  Takuma Kira

  ==============================================================================
*/

#include "KAPVuMeter.h"

KAPVuMeter::KAPVuMeter(KadenzeAudioPluginAudioProcessor* inProcessor)
:   mCh0Level(0),
    mCh1Level(0),
    mParameterID(-1),
    mProcessor(inProcessor)
{
    
}

KAPVuMeter::~KAPVuMeter()
{
    
}

void KAPVuMeter::paint(Graphics& g)
{
    
}

void KAPVuMeter::setParameterID(int inParameterID)
{
    mParameterID = inParameterID;
}
