/**
 * @brief Class for the potentiometer component.
 * 
 * @author Diana Lin
 * @version 1.0 11/18/20
 */

#ifndef ANLGIN_H_
#define ANLGIN_H_

#include <Arduino.h>

class AnalogInput
{
private:
    byte pin;    /** Analog input pin */
    int lastVal; /** Value of last analog reading */
    int currentVal;
    void init(); /** Initialize the AnalogInput object */

public:
    /**
     * @brief Construct a new AnalogInput object
     * 
     * @param pin Analog input pin
     */
    AnalogInput(byte pin);

    /**
     * @brief Get the value of the analog reading
     * 
     * @return byte Analog input value
     */
    int getValue();

    /**
     * @brief Get the last value of the analog reading
     * 
     * @return byte Last analog input value
     */
    int getLastValue();
};

#endif