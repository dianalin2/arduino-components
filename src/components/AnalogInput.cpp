// Diana Lin
// 18 November 2020

#include "AnalogInput.h"

AnalogInput::AnalogInput(byte pin)
{
    this->pin = pin;
    init();
}

void AnalogInput::init()
{
    pinMode(pin, INPUT);
    lastVal = getValue();
    currentVal = getValue();
}

int AnalogInput::getValue()
{
    lastVal = currentVal;
    currentVal = analogRead(pin);
    return currentVal;
}

int AnalogInput::getLastValue()
{
    return this->lastVal;
}