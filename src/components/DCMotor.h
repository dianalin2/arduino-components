/**
 * @brief Class for the DC motor component.
 * 
 * @author Diana Lin
 * @version 1.0 11/18/20
 */

#ifndef _DCMOTOR_H_
#define _DCMOTOR_H_

#include <Arduino.h>
#include "../enums/Direction.h"

class DCMotor
{
private:
    byte pin1;     /** First motor output pin */
    byte pin2;     /** Second motor output pin */
    Direction dir; /** Default direction of motor */
    int velocity;  /** Default velocity of motor */
    void init();   /** Initialize the motor object */

public:
    /**
     * @brief Construct a new DCMotor object
     * 
     * @param pin1 First motor output pin
     * @param pin2 Second motor output pin
     */
    DCMotor(byte pin1, byte pin2);

    /**
     * @brief Rotate the motor at the default velocity
     * 
     */
    void rotate();

    /**
     * @brief Set the default velocity and rotate the motor at the given velocity
     * 
     * @param velocity Velocity to be set
     */
    void rotate(int velocity);

    /**
     * @brief Set the default velocity and direction and rotate the motor at the given velocity
     * 
     * @param velocity Velocity to be set
     * @param dir Direction to be set
     */
    void rotate(int velocity, Direction dir);

    /**
     * @brief Stop the motor from rotating
     * 
     */
    void stop();

    /**
     * @brief Set the direction of the motor
     * 
     * @param dir Direction to be set
     */
    void setDirection(Direction dir);

    /**
     * @brief Get the Direction
     * 
     * @return Direction direction
     */
    Direction getDirection();

    /**
     * @brief Set the velocity of the motor
     * 
     * @param velocity Velocity to be set
     */
    void setVelocity(int velocity);

    /**
     * @brief Get the Velocity object
     * 
     * @return int velocity
     */
    int getVelocity();
};

#endif
