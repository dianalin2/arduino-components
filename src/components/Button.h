/**
 * @brief Class for the button component.
 * 
 * @author Diana Lin
 * @version 1.0 11/18/20
 */

#ifndef BTN_H_
#define BTN_H_

#include <Arduino.h>

class Button
{
private:
    byte pin;    /** Button input pin */
    int lastVal;
    int currentVal;
    void init(); /** Initialize the Button object */

public:
    /**
     * @brief Construct a new Button object
     * 
     * @param pin Button input pin
     */
    Button(byte pin);

    /**
     * @brief Get the Value object
     * 
     * @return int Button input value
     */
    int getValue();

    /**
     * @brief Get the LastValue object
     * 
     * @return int Button last input value
     */
    int getLastValue();
};

#endif