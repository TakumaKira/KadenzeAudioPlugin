/*
  ==============================================================================

    KAPGain.h
    Created: 30 Apr 2019 2:54:10pm
    Author:  Takuma Kira

  ==============================================================================
*/

#pragma once

class KAPGain
{
public:
    
    KAPGain(); // constructor
    ~KAPGain(); // deconstructor
    
    void process(float* inAudio,
                 float inGain,
                 float* outAudio,
                 int inNumSamplesToRender);
    
    float getMeterLevel();
    
private:
    
    float mOutputSmoothed;
};
