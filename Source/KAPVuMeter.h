/*
  ==============================================================================

    KAPVuMeter.h
    Created: 6 May 2019 2:55:41pm
    Author:  Takuma Kira

  ==============================================================================
*/

#pragma once

#include "JuceHeader.h"
#include "PluginProcessor.h"

class KAPVuMeter
{
public:
    KAPVuMeter(KadenzeAudioPluginAudioProcessor* inProcessor);
    ~KAPVuMeter();
    
    void paint(Graphics& g) override;
    
    void setParameterID(int inParameterID);
    
private:
    
    int mParameterID;
    
    float mCh0Level;
    float mCh1Level;
};
