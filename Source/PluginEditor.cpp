/*
  ==============================================================================

    This file was auto-generated!

    It contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#include "PluginProcessor.h"
#include "PluginEditor.h"

//==============================================================================
SimpleSynthAudioProcessorEditor::SimpleSynthAudioProcessorEditor (SimpleSynthAudioProcessor& p)
    : AudioProcessorEditor (&p), processor (p), keyboardComponent (keyboardState, MidiKeyboardComponent::horizontalKeyboard)
{
    
    // Make sure that before the constructor has finished, you've set the
    // editor's size to whatever you need it to be.
    addAndMakeVisible(m_main = new Interface());


    keyboardComponent.setAlwaysOnTop(true);



    m_glContext.setComponentPaintingEnabled(true);
    m_glContext.attachTo(*this);

    setSize (800, 510);

  
  addAndMakeVisible (keyboardComponent);
  keyboardState.addListener (this);
    
//  addAndMakeVisible (cutoffSlider);
//  cutoffSlider.setRange (50.0, 10000.0);
//  cutoffSlider.setValue(5000.0);
//  cutoffSlider.onValueChange = [this] {
//    processor.setCutoff(cutoffSlider.getValue());
//  };
//
//  addAndMakeVisible(cutoffLabel);
//  cutoffLabel.setText ("Cutoff", dontSendNotification);
//  cutoffLabel.attachToComponent (&cutoffSlider, true);
  
}

SimpleSynthAudioProcessorEditor::~SimpleSynthAudioProcessorEditor()
{
      keyboardState.removeListener(this);
          m_glContext.detach();


}

void SimpleSynthAudioProcessorEditor::handleNoteOn (MidiKeyboardState*, int midiChannel, int midiNoteNumber, float velocity)
{
  processor.keyOn(midiNoteNumber,int(127*velocity));
}

void SimpleSynthAudioProcessorEditor::handleNoteOff (MidiKeyboardState*, int midiChannel, int midiNoteNumber, float /*velocity*/)
{
  processor.keyOff(midiNoteNumber);
}

void SimpleSynthAudioProcessorEditor::handleIncomingMidiMessage (MidiInput* source, const MidiMessage& message) {}


//==============================================================================
void SimpleSynthAudioProcessorEditor::paint (Graphics& g)
{
    // (Our component is opaque, so we must completely fill the background with a solid colour)
    g.fillAll (getLookAndFeel().findColour (ResizableWindow::backgroundColourId));

    g.setColour (Colours::white);
    g.setFont (15.0f);
    g.drawFittedText ("Hello World!", getLocalBounds(), Justification::centred, 1);
}

void SimpleSynthAudioProcessorEditor::resized()
{
    // This is generally where you'll want to lay out the positions of any
    // subcomponents in your editor..
    const int sliderLeft = 80;
  keyboardComponent.setBounds (10,410,getWidth()-30,100);
      m_main->setBounds(0, 0, getWidth(),getHeight());

  //cutoffSlider.setBounds (sliderLeft, 120, getWidth() - sliderLeft - 20, 20);
}
