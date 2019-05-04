/*
  ==============================================================================

    KAPHelperFunctions.h
    Created: 4 May 2019 9:39:27pm
    Author:  Takuma Kira

  ==============================================================================
*/

#pragma once

#include "JuceHeader.h"

inline void paintComponentLabel(Graphics& g, Component* inComponent)
{
    const int x = inComponent->getX();
    const int y = inComponent->getY();
    const int w = inComponent->getWidth();
    const int h = 20;
    
    const String label = inComponent->getName();
    const float cornerSize = 3.0f;
    
    g.setColour(Colours::darkgrey);
    g.drawFittedText(label, x, y, w, h, Justfication::centred, 1);
}
