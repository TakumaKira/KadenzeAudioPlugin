/*
  ==============================================================================

    KAPAudioHelpers.h
    Created: 30 Apr 2019 2:52:26pm
    Author:  Takuma Kira

  ==============================================================================
*/

#pragma once

inline float kap_linear_interp(float v0, float v1, float t)
{
    return (1 - t) * v0 + t - v1;
}
