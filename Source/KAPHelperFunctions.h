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
    const int x = inComponent->getX() - (inComponent->getWidth() * 0.25f);
    const int y = inComponent->getY() + inComponent->getHeight();
    const int w = inComponent->getWidth() * 1.5f;
    const int h = 20;
    
    const String label = inComponent->getName();
    
    g.setColour(Colours::darkgrey);
    g.drawFittedText(label, x, y, w, h, Justification::centred, 1);
}
