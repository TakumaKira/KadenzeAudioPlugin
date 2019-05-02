/*
  ==============================================================================

    KAPLfo.cpp
    Created: 30 Apr 2019 2:53:57pm
    Author:  Takuma Kira

  ==============================================================================
*/

#include "KAPLfo.h"
#include "JuceHeader.h"

KAPLfo::KAPLfo()
{
    reset();
}

KAPLfo::~KAPLfo()
{
    
}

void KAPLfo::reset()
{
    mPhase = 0.0f;
}

void KAPLfo::setSampleRate(double inSampleRate)
{
    zeromem(mBuffer, sizeof(float) * maxBufferDelaySize);
}

void KAPLfo::process(float inRate, float inDepth, int inNumSamples)
{
    const float rate = jmap(inRate, 0.0f, 1.0f, 0.01f, 10.0f);
    
    for (int i = 0; i < inNumSamples; i++) {
        mPhase = mPhase + (rate / mSampleRate);
        
        if (mPhase > 1.0f) {
            mPhase = mPhase - 1.0f;
        }
        
        const float lfoPosition = sinf(mPhase * k2PI) * inDepth;
        mBuffer[i] = lfoPosition;
    }
}

float* KAPLfo::getBuffer()
{
    return mBuffer;
}
