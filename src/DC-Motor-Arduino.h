// -- DC Motor Class to control a real DC Motor --
// -- Platform: Arduino --
// -- Author: Allan Cedric --

#ifndef __DC_MOTOR_ARDUINO_H__
#define __DC_MOTOR_ARDUINO_H__

#include <Arduino.h>

// -- DC Motor Class --
class DC_Motor
{

private:
    uint8_t _pwmPin;                       // PWM pin to control motor's speed
    uint8_t _clockwise, _counterClockwise; // Digital pins to control motor's rotation
    uint8_t _speed;                        // Motor's speed

public:
    /*!
        @brief  Constructor

        @param  pwmPin              PWM pin
        @param  clockwise           Digital pin for clockwise rotation
        @param  counterClockwise    Digital pin for counter clockwise rotation
    */
    DC_Motor(uint8_t pwmPin, uint8_t clockwise, uint8_t counterClockwise);

    /*!
        @brief  Set a new speed to motor

        @param  speed   Desired speed
    */
    void setSpeed(uint8_t speed);

    /*!
        @brief  Get motor's speed

        @return Current speed
    */
    uint8_t getSpeed();

    /*!
        @brief  Motor goes forward

        @param  speed   Desired speed
    */
    void forward(uint8_t speed);

    /*!
        @brief  Motor goes backwards

        @param  speed   Desired speed
    */
    void backwards(uint8_t speed);

    /*!
        @brief  Brake the motor
    */
    void shortBrake();

    /*!
        @brief  Stop the motor
    */
    void stop();
};

#endif
