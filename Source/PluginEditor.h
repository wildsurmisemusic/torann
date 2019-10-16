/*
  ==============================================================================

    This file was auto-generated!

    It contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#pragma once

#include "../JuceLibraryCode/JuceHeader.h"
#include "PluginProcessor.h"
#include "Interface.h"


typedef AudioProcessorValueTreeState::SliderAttachment SliderAttachment;


//==============================================================================
/**
*/
class SimpleSynthAudioProcessorEditor  : public AudioProcessorEditor, private MidiInputCallback, private MidiKeyboardStateListener
{
public:
    SimpleSynthAudioProcessorEditor (SimpleSynthAudioProcessor&);
    ~SimpleSynthAudioProcessorEditor();

    //==============================================================================
    void paint (Graphics&) override;
    void resized() override;

private:

    void handleNoteOn (MidiKeyboardState*, int midiChannel, int midiNoteNumber, float velocity) override;
    void handleNoteOff (MidiKeyboardState*, int midiChannel, int midiNoteNumber, float /*velocity*/) override;
    void handleIncomingMidiMessage (MidiInput* source, const MidiMessage& message) override;
  
    MidiKeyboardState keyboardState;            // [5]
    MidiKeyboardComponent keyboardComponent;    // [6]
    
    OpenGLContext m_glContext;

//    AudioProcessorValueTreeState& m_vts;

    ScopedPointer<Interface> m_main;
    
    Slider cutoffSlider;
    Label cutoffLabel;
  
    // This reference is provided as a quick way for your editor to
    // access the processor object that created it.
    SimpleSynthAudioProcessor& processor;
    
    
//    AudioProcessorValueTreeState& m_vts;


    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (SimpleSynthAudioProcessorEditor)
};
