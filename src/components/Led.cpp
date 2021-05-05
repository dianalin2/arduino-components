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
    value = HIGH;
    digitalWrite(pin, HIGH);
}

void Led::off()
{
    value = LOW;
    digitalWrite(pin, LOW);
}

void Led::on(byte val)
{
    value = val;
    analogWrite(pin, val);
}

byte Led::getValue()
{
    return value;
}