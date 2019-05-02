/*
  ==============================================================================

    KAPDelay.h
    Created: 30 Apr 2019 2:54:25pm
    Author:  Takuma Kira

  ==============================================================================
*/

#pragma once

const int maxBufferDelaySize = 192000;

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
                 float* outAudio,
                 int inNumSamplesToRender);
    
private:
    
    /** internal */
    double getInterpolatedSample(float inDelayTimeInSamples);
    
    double mSampleRate;
    double mBuffer[maxBufferDelaySize];
    double mFeedbackSample;
    
    int mDelayIndex;
    
};
