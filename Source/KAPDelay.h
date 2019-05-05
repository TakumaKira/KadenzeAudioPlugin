/*
  ==============================================================================

    KAPDelay.h
    Created: 30 Apr 2019 2:54:25pm
    Author:  Takuma Kira

  ==============================================================================
*/

#pragma once

#include "KAPAudioHelpers.h"

enum KAPDelayType
{
    kKAPDelayType_Delay = 0,
    kKAPDelayType_Chorus,
};

class KAPDelay
{
public:
    KAPDelay();
    ~KAPDelay();
    
    void setSampleRate(double inSampleRate);
    
    void reset();
    
    void process(float* inAudio,
                 float inTime,
                 float inFeedback,
                 float inWetDry,
                 float inType,
                 float* inModulationBuffer,
                 float* outAudio,
                 int inNumSamplesToRender);
    
private:
    
    /** internal */
    double getInterpolatedSample(float inDelayTimeInSamples);
    
    double mSampleRate;
    double mBuffer[maxBufferDelaySize];
    double mFeedbackSample;
    
    float mTimeSmoothed;
    
    int mDelayIndex;
    
};
