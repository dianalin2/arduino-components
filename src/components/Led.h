/**
 * @brief Class for the LED component.
 * 
 * @author Diana Lin
 * @version 1.0 11/18/20
 */

#ifndef LED_H_
#define LED_H_

#include <Arduino.h>

class Led
{
private:
    byte pin;    /** LED output pin */
    void init(); /** Initialize the Pot object */

public:
    /**
     * @brief Construct a new Led object
     * 
     * @param pin LED output pin
     */
    Led(byte pin);

    /**
     * @brief Turn on the LED with the specified analog value
     * 
     * @param val Analog value
     */
    void on(byte val);

    /**
     * @brief Turn on the LED to HIGH
     * 
     */
    void on();

    /**
     * @brief Turn off the LED
     * 
     */
    void off();
};

#endif
