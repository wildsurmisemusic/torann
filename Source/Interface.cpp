/*
  ==============================================================================

  This is an automatically generated GUI class created by the Projucer!

  Be careful when adding custom code to these files, as only the code within
  the "//[xyz]" and "//[/xyz]" sections will be retained when the file is loaded
  and re-saved.

  Created with Projucer version: 5.4.3

  ------------------------------------------------------------------------------

  The Projucer is part of the JUCE library.
  Copyright (c) 2017 - ROLI Ltd.

  ==============================================================================
*/

//[Headers] You can add your own extra header files here...
//[/Headers]

#include "Interface.h"


//[MiscUserDefs] You can add your own user definitions and misc code here...
typedef AudioProcessorValueTreeState::SliderAttachment SliderAttachment;

//[/MiscUserDefs]

//==============================================================================
Interface::Interface ()
{
    //[Constructor_pre] You can add your own custom stuff here..
    //[/Constructor_pre]

    slider.reset (new Slider ("attack"));
    addAndMakeVisible (slider.get());
    slider->setRange (0, 10, 0);
    slider->setSliderStyle (Slider::Rotary);
    slider->setTextBoxStyle (Slider::TextBoxBelow, false, 80, 20);
    slider->addListener (this);

    slider->setBounds (5, 7, 263, 120);

    slider2.reset (new Slider ("decay"));
    addAndMakeVisible (slider2.get());
    slider2->setRange (0, 10, 0);
    slider2->setSliderStyle (Slider::Rotary);
    slider2->setTextBoxStyle (Slider::TextBoxBelow, false, 80, 20);
    slider2->addListener (this);

    slider2->setBounds (8, 144, 263, 120);

    slider3.reset (new Slider ("sustain"));
    addAndMakeVisible (slider3.get());
    slider3->setRange (0, 10, 0);
    slider3->setSliderStyle (Slider::Rotary);
    slider3->setTextBoxStyle (Slider::TextBoxBelow, false, 80, 20);
    slider3->addListener (this);

    slider3->setBounds (8, 280, 263, 120);

    slider4.reset (new Slider ("release"));
    addAndMakeVisible (slider4.get());
    slider4->setRange (0, 10, 0);
    slider4->setSliderStyle (Slider::Rotary);
    slider4->setTextBoxStyle (Slider::TextBoxBelow, false, 80, 20);
    slider4->addListener (this);

    slider4->setBounds (8, 432, 263, 120);


    //[UserPreSize]
    //[/UserPreSize]

    setSize (800, 400);


    //[Constructor] You can add your own custom stuff here..
//    attackAttachment = new SliderAttachment(m_vts, "attack", *slider);
//    decayAttachment = new SliderAttachment(m_vts, "decay", *slider2);
//    sustainAttachment = new SliderAttachment(m_vts, "sustain", *slider3);
//    releaseAttachment = new SliderAttachment(m_vts, "release", *slider4);
    //[/Constructor]
}

Interface::~Interface()
{
    //[Destructor_pre]. You can add your own custom destruction code here..
    //[/Destructor_pre]

    slider = nullptr;
    slider2 = nullptr;
    slider3 = nullptr;
    slider4 = nullptr;


    //[Destructor]. You can add your own custom destruction code here..
//        attackAttachment = nullptr;
//    decayAttachment = nullptr;
//    sustainAttachment = nullptr;
//    releaseAttachment = nullptr;
    //[/Destructor]
}

//==============================================================================
void Interface::paint (Graphics& g)
{
    //[UserPrePaint] Add your own custom painting code here..
    //[/UserPrePaint]

    g.fillAll (Colour (0xffdddddd));

    //[UserPaint] Add your own custom painting code here..
    //[/UserPaint]
}

void Interface::resized()
{
    //[UserPreResize] Add your own custom resize code here..
    //[/UserPreResize]

    //[UserResized] Add your own custom resize handling here..
    //[/UserResized]
}

void Interface::sliderValueChanged (Slider* sliderThatWasMoved)
{
    //[UsersliderValueChanged_Pre]
    //[/UsersliderValueChanged_Pre]

    if (sliderThatWasMoved == slider.get())
    {
        //[UserSliderCode_slider] -- add your slider handling code here..
        //[/UserSliderCode_slider]
    }
    else if (sliderThatWasMoved == slider2.get())
    {
        //[UserSliderCode_slider2] -- add your slider handling code here..
        //[/UserSliderCode_slider2]
    }
    else if (sliderThatWasMoved == slider3.get())
    {
        //[UserSliderCode_slider3] -- add your slider handling code here..
        //[/UserSliderCode_slider3]
    }
    else if (sliderThatWasMoved == slider4.get())
    {
        //[UserSliderCode_slider4] -- add your slider handling code here..
        //[/UserSliderCode_slider4]
    }

    //[UsersliderValueChanged_Post]
    //[/UsersliderValueChanged_Post]
}



//[MiscUserCode] You can add your own definitions of your custom methods or any other code here...
//[/MiscUserCode]


//==============================================================================
#if 0
/*  -- Projucer information section --

    This is where the Projucer stores the metadata that describe this GUI layout, so
    make changes in here at your peril!

BEGIN_JUCER_METADATA

<JUCER_COMPONENT documentType="Component" className="Interface" componentName=""
                 parentClasses="public Component" constructorParams="" variableInitialisers=""
                 snapPixels="8" snapActive="1" snapShown="1" overlayOpacity="0.330"
                 fixedSize="0" initialWidth="800" initialHeight="400">
  <BACKGROUND backgroundColour="ffdddddd"/>
  <SLIDER name="attack" id="9f652f07d3615f31" memberName="slider" virtualName=""
          explicitFocusOrder="0" pos="5 7 263 120" min="0.0" max="10.0"
          int="0.0" style="Rotary" textBoxPos="TextBoxBelow" textBoxEditable="1"
          textBoxWidth="80" textBoxHeight="20" skewFactor="1.0" needsCallback="1"/>
  <SLIDER name="decay" id="57bff19f7bc22df9" memberName="slider2" virtualName=""
          explicitFocusOrder="0" pos="8 144 263 120" min="0.0" max="10.0"
          int="0.0" style="Rotary" textBoxPos="TextBoxBelow" textBoxEditable="1"
          textBoxWidth="80" textBoxHeight="20" skewFactor="1.0" needsCallback="1"/>
  <SLIDER name="sustain" id="813e41017f197418" memberName="slider3" virtualName=""
          explicitFocusOrder="0" pos="8 280 263 120" min="0.0" max="10.0"
          int="0.0" style="Rotary" textBoxPos="TextBoxBelow" textBoxEditable="1"
          textBoxWidth="80" textBoxHeight="20" skewFactor="1.0" needsCallback="1"/>
  <SLIDER name="release" id="8e8fd5e618a26487" memberName="slider4" virtualName=""
          explicitFocusOrder="0" pos="8 432 263 120" min="0.0" max="10.0"
          int="0.0" style="Rotary" textBoxPos="TextBoxBelow" textBoxEditable="1"
          textBoxWidth="80" textBoxHeight="20" skewFactor="1.0" needsCallback="1"/>
</JUCER_COMPONENT>

END_JUCER_METADATA
*/
#endif


//[EndFile] You can add extra defines here...
//[/EndFile]

