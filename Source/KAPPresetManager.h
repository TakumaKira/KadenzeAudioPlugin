/*
  ==============================================================================

    KAPPresetManager.h
    Created: 5 May 2019 4:10:09pm
    Author:  Takuma Kira

  ==============================================================================
*/

#pragma once

#include "JuceHeader.h"

class KAPPresetManager
{
public:
    
    KAPPresetManager(AudioProcessor* inProcessor);
    ~KAPPresetManager();
    
    void getXmlForPreset(XmlElement* inElement);
    
    void loadPresetForXml(XmlElement* inElement);
    
private:
    
    AudioProcessor* mProcessor;
};
