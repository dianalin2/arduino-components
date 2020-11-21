/**
 * @brief Class for the RGB LED component.
 * 
 * @author Diana Lin
 * @version 1.0 11/18/20
 */

#ifndef RGBLED_H_
#define RGBLED_H_

#include "Led.h"

class RGBLed
{
private:
    Led *red;   /** Led object for red LED */
    Led *green; /** Led object for blue LED */
    Led *blue;  /** Led object for green LED */

public:
    /**
     * @brief Construct a new RGBLed object
     * 
     * @param redPin Red LED output pin
     * @param greenPin Green LED output pin
     * @param bluePin Blue LED output pin
     */
    RGBLed(byte redPin, byte greenPin, byte bluePin);

    /**
     * @brief Turn on the RGB LED with the specified RGB value
     * 
     * @param red Red LED output analog value
     * @param green Green LED output analog value
     * @param blue Blue LED output analog value
     */
    void on(byte red, byte green, byte blue);

    /**
     * @brief Turn off the RGB LED
     * 
     */
    void off();

    /**
     * @brief Set the analog red value
     * 
     * @param red Analog red value
     */
    void setRed(byte red);

    /**
     * @brief Get the analog red value
     * 
     * @return byte Analog red value
     */
    byte getRed();

    /**
     * @brief Set the analog green value
     * 
     * @param green Analog green value
     */
    void setGreen(byte green);

    /**
     * @brief Get the analog green value
     * 
     * @return byte Analog green value
     */
    byte getGreen();

    /**
     * @brief Set the analog blue value
     * 
     * @param blue Analog blue value
     */
    void setBlue(byte blue);

    /**
     * @brief Get the analog blue value
     * 
     * @return byte Analog blue value
     */
    byte getBlue();
};

#endif
