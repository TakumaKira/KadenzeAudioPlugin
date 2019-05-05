/*
  ==============================================================================

    KAPPresetManager.cpp
    Created: 5 May 2019 4:10:09pm
    Author:  Takuma Kira

  ==============================================================================
*/

#include "KAPPresetManager.h"

KAPPresetManager::KAPPresetManager(AudioProcessor* inProcessor)
:   mProcessor(inProcessor)
{
    
}

KAPPresetManager::~KAPPresetManager()
{
    
}

void KAPPresetManager::getXmlForPreset(XmlElement* inElement)
{
    const int numParameters = mProcessor->getNumParameters();
    
    for (int i = 0; i < numParameters; i++) {
        inElement->setAttribute(mProcessor->getParameterName(i),
                                mProcessor->getParameter(i));
    }
}

void KAPPresetManager::loadPresetForXml(XmlElement* inElement)
{
    mCurrentPresetXml = inElement;
    
    for (int i = 0; i < mCurrentPresetXml->getNumAttributes(); i++) {
        
        const String name = mCurrentPresetXml->getAttributeName(i);
        const float value = mCurrentPresetXml->getDoubleAttribute(name);
        
        for (int j = 0; j < mProcessor->getNumParameters(); j++) {
            if (mProcessor->getParameterName(j) == name) {
                mProcessor->setParameterNotifyingHost(j, value);
            }
        }
    }
}

int KAPPresetManager::getNumberOfPresets()
{
    
}

String KAPPresetManager::getPresetName(int inPresetIndex)
{
    
}

void KAPPresetManager::createNewPreset()
{
    
}

void KAPPresetManager::savePreset()
{
    
}

void KAPPresetManager::saveAsPreset(String inPresetName)
{
    
}

void KAPPresetManager::loadPreset(int inPresetIndex)
{
    
}

bool KAPPresetManager::getIsCurrentPresetSaved()
{
    
}

String KAPPresetManager::getCurrentPresetName()
{
    
}

void KAPPresetManager::storeLocalPreset()
{
    
}
