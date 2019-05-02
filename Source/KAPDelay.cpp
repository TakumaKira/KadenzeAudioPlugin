/*
  ==============================================================================

    KAPDelay.cpp
    Created: 30 Apr 2019 2:54:25pm
    Author:  Takuma Kira

  ==============================================================================
*/

#include "KAPDelay.h"

#include "JuceHeader.h"

KAPDelay::KAPDelay()
:   mSampleRate(-1),
    mFeedbackSample(0.0),
    mDelayIndex(0)
{
    
}

KAPDelay::~KAPDelay()
{
    
}

void KAPDelay::setSampleRate(double inSampleRate)
{
    mSampleRate = inSampleRate;
}

void KAPDelay::reset()
{
    zeromem(mBuffer, (sizeof(double) * maxBufferDelaySize));
}

void KAPDelay::process(float* inAudio,
                       float inTime,
                       float inFeedback,
                       float inWetDry,
                       float* outAudio,
                       int inNumSamplesToRender)
{
    const float wet = inWetDry;
    const float dry = 1.0f - wet;
    const float feedbackMapped = jmap(inFeedback, 0.0f, 1.0f, 0.0f, 0.95f);
    
    for (int i = 0; i < inNumSamplesToRender; i++) {
        
        const double delayTimeInSamples = (inTime * mSampleRate);
        
        const double sample = getInterpolatedSample(delayTimeInSamples);
        
    }
    
}

double KAPDelay::getInterpolatedSample(float inDelayTimeInSamples)
{
    double readPosition = (double)mDelayIndex - inDelayTimeInSamples;
    
    if (readPosition < 0.0f) {
        readPosition = readPosition + maxBufferDelaySize;
    }
    
    int index_y0 = (int)readPosition - 1;
    
    if (index_y0 < 0) {
        index_y0 = index_y0 + maxBufferDelaySize;
    }
    
    int index_y1 = readPosition;
    
    if (index_y1 > maxBufferDelaySize) {
        index_y1 = index_y1 - maxBufferDelaySize;
    }
    
    const float sample_y0 = mBuffer[index_y0];
    const float sample_y1 = mBuffer[index_y1];
    
    
}
