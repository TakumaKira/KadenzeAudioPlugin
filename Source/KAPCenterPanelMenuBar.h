/*
  ==============================================================================

    KAPCenterPanelMenuBar.h
    Created: 2 May 2019 10:34:01pm
    Author:  Takuma Kira

  ==============================================================================
*/

#pragma once

#include "KAPPanelBase.h"
#include "KAPParameterComboBox.h"

class KAPCenterPanelMenuBar
:   public KAPPanelBase
{
public:
    KAPCenterPanelMenuBar(KadenzeAudioPluginAudioProcessor* inProcessor);
    ~KAPCenterPanelMenuBar();
    
    void addFxTypeComboBoxListener(ComboBox::Listener inListener);
    
    void removeFxTypeComboBoxListener(ComboBox::Listener inListener);

private:
    
    ScopedPointer<KAPParameterComboBox> mFxTypeComboBox;
};
