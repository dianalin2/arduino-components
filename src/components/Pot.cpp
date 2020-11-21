// Diana Lin
// 18 November 2020

#include "Pot.h"

Pot::Pot(byte pin)
{
    this->pin = pin;
    init();
}

void Pot::init()
{
    pinMode(pin, INPUT);
}

int Pot::getValue()
{
    return analogRead(pin);
}
