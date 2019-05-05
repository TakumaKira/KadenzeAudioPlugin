/*
  ==============================================================================

    KAPPresetManager.h
    Created: 5 May 2019 4:10:09pm
    Author:  Takuma Kira

  ==============================================================================
*/

#pragma once

#include "JuceHeader.h"

#define PRESET_FILE_EXTENTION ".kpf"

class KAPPresetManager
{
public:
    
    KAPPresetManager(AudioProcessor* inProcessor);
    ~KAPPresetManager();
    
    void getXmlForPreset(XmlElement* inElement);
    
    void loadPresetForXml(XmlElement* inElement);
    
    int getNumberOfPresets();
    
    String getPresetName(int inPresetIndex);
    
    void createNewPreset();
    
    void savePreset();
    
    void saveAsPreset(String inPresetName);
    
    void loadPreset(int inPresetIndex);
    
    bool getIsCurrentPresetSaved();
    
    String getCurrentPresetName();
    
private:
    
    void storeLocalPreset();
    
    bool mCurrentPresetIsSaved;
    
    File mCurrentlyLoadedPreset;
    
    Array<File> mLocalPresets;
    
    String mCurrentPresetName;
    
    String mPresetDirectory;
    
    XmlElement* mCurrentPresetXml;
    
    AudioProcessor* mProcessor;
};
