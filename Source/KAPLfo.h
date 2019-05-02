/*
  ==============================================================================

    KAPLfo.h
    Created: 30 Apr 2019 2:53:57pm
    Author:  Takuma Kira

  ==============================================================================
*/

#pragma once

#include "KAPAudioHelpers.h"

class KAPLfo
{
public:
    KAPLfo();
    ~KAPLfo();
    
    void reset();
    
    void getSampleRate(double inSampleRate);
    
    void process(float inRate, float inDepth, int inNumSamples);
    
private:
    
    double mSampleRate;
    
    float mPhase;
    
    float mBuffer [maxBufferDelaySize];
};
