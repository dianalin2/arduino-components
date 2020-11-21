/**
 * @brief Class for the potentiometer component.
 * 
 * @author Diana Lin
 * @version 1.0 11/18/20
 */

#ifndef POT_H_
#define POT_H_

#include <Arduino.h>

class Pot
{
private:
    byte pin;    /** Potentiometer input pin */
    void init(); /** Initialize the Pot object */

public:
    /**
     * @brief Construct a new Pot object
     * 
     * @param pin Potentiometer input pin
     */
    Pot(byte pin);

    /**
     * @brief Get the Value object
     * 
     * @return int Potentiometer input value
     */
    int getValue();
};

#endif
