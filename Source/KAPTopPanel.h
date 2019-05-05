/*
  ==============================================================================

    KAPTopPanel.h
    Created: 2 May 2019 10:35:16pm
    Author:  Takuma Kira

  ==============================================================================
*/

#pragma once

#include "KAPPanelBase.h"

class KAPTopPanel
:   public KAPPanelBase,
    public Button::Listener,
    public ComboBox::Listener
{
public:
    
    KAPTopPanel(KadenzeAudioPluginAudioProcessor* inProcessor);
    ~KAPTopPanel();
    
    void paint(Graphics& g) override;
    
    void buttonClicked (Button* b) override;
    
    void comboBoxChanged (ComboBox* comboBoxThatHasChanged) override;
    
private:
    
    void displaySaveAsPopup();
    
    void updatePresetComboBox();
    
    ScopedPointer<ComboBox> mPresetDisplay;
    
    ScopedPointer<TextButton> mNewPreset, mSavePreset, mSaveAsPreset;
    
};
