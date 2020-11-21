// Diana Lin
// 18 November 2020

#include "Led.h"

Led::Led(byte pin)
{
    this->pin = pin;
    init();
}

void Led::init()
{
    pinMode(pin, OUTPUT);

    off();
}

void Led::on()
{
    digitalWrite(pin, HIGH);
}

void Led::off()
{
    digitalWrite(pin, LOW);
}

void Led::on(byte val)
{
    analogWrite(pin, val);
}
