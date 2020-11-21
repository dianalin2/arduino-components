// Diana Lin
// 18 November 2020

#include "RGBLed.h"

RGBLed::RGBLed(byte red, byte green, byte blue)
{
    this->red = new Led(red);
    this->green = new Led(green);
    this->blue = new Led(blue);
}

void RGBLed::on(byte red, byte green, byte blue)
{
    (*(this->red)).on(red);
    (*(this->green)).on(green);
    (*(this->blue)).on(blue);
}
