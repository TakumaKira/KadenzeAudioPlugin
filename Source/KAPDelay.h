/*
  ==============================================================================

    KAPDelay.h
    Created: 30 Apr 2019 2:54:25pm
    Author:  Takuma Kira

  ==============================================================================
*/

#pragma once

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
    
    double mSampleRate;
    double mBuffer[2048];
    double mFeedbackSample;
    
    int mDelayIndex;
    
};
