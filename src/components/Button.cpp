// Diana Lin
// 18 November 2020

#include "Button.h"

Button::Button(byte pin)
{
    this->pin = pin;
    init();
}

void Button::init()
{
    pinMode(pin, INPUT);
    this->lastVal = digitalRead(pin);
    this->currentVal = digitalRead(pin);
}

int Button::getValue()
{
    this->lastVal = this->currentVal;
    this->currentVal = digitalRead(pin);
    return currentVal;
}

int Button::getLastValue()
{
    return lastVal;
}