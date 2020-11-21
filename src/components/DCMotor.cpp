// Diana Lin
// 18 November 2020

#include "DCMotor.h"

DCMotor::DCMotor(byte pin1, byte pin2)
{
    this->pin1 = pin1;
    this->pin2 = pin2;
    init();
}

void DCMotor::init()
{
    pinMode(pin1, OUTPUT);
    pinMode(pin2, OUTPUT);
}

void DCMotor::rotate()
{
    if (dir == Direction::Forward)
    {
        if (velocity >= 0)
        {
            analogWrite(pin1, velocity);
            analogWrite(pin2, 0);
        }
        else
        {
            analogWrite(pin1, 0);
            analogWrite(pin2, -velocity);
        }
    }
    else
    {
        if (velocity >= 0)
        {
            analogWrite(pin1, 0);
            analogWrite(pin2, velocity);
        }
        else
        {

            analogWrite(pin1, -velocity);
            analogWrite(pin2, 0);
        }
    }
}

void DCMotor::rotate(int velocity)
{
    this->velocity = velocity;
    rotate();
}

void DCMotor::rotate(int velocity, Direction dir)
{
    this->velocity = velocity;
    this->dir = dir;
    rotate();
}

void DCMotor::stop()
{
    analogWrite(pin1, 0);
    analogWrite(pin2, 0);
}

void DCMotor::setDirection(Direction dir)
{
    this->dir = dir;
}

Direction DCMotor::getDirection()
{
    return dir;
}

void DCMotor::setVelocity(int velocity)
{
    this->velocity = velocity;
}

int DCMotor::getVelocity()
{
    return velocity;
}
