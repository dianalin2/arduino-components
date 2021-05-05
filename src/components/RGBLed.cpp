// Diana Lin
// 18 November 2020

#include "RGBLed.h"

RGBLed::RGBLed(byte red, byte green, byte blue)
{
    this->red = new Led(red);
    this->green = new Led(green);
    this->blue = new Led(blue);
}

RGBLed::~RGBLed() 
{
    delete red;
    delete green;
    delete blue;
}

void RGBLed::on(byte red, byte green, byte blue)
{
    (*(this->red)).on(red);
    (*(this->green)).on(green);
    (*(this->blue)).on(blue);
}

void RGBLed::off()
{
    (*(this->red)).off();
    (*(this->green)).off();
    (*(this->blue)).off();
}

void RGBLed::setRed(byte red)
{
    (*(this->red)).on(red);    
}

byte RGBLed::getRed()
{
    return red->getValue();
}

void RGBLed::setGreen(byte green)
{
    (*(this->green)).on(green);    
}

byte RGBLed::getGreen()
{
    return green->getValue();
}

void RGBLed::setBlue(byte blue)
{
    (*(this->blue)).on(blue);    
}

byte RGBLed::getBlue()
{
    return blue->getValue();
}

