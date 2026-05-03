/*
 * File: Motor
 * Author: Michael Franks 
 * Description:
 */

#include "Motor.h"

Motor::Motor(uint8_t pinA, uint8_t pinB) : _pinA(pinA), _pinB(pinB), _isArmed(false)
{
}

void Motor::begin()
{
    pinMode(_pinA, OUTPUT);
    pinMode(_pinB, OUTPUT);
    disarm(); // Ensure safe state on startup[cite: 1]
}

void Motor::arm()
{
    _isArmed = true;
}

void Motor::disarm()
{
    _isArmed = false;
    stop(); // Immediate cut-off[cite: 1]
}

void Motor::setThrust(float percentage) const
{
    if (!_isArmed)
    {
        stop();
        return;
    }

    // Constrain input for safety
    percentage = constrain(percentage, 0.0f, 100.0f);

    // Map 0-100% to 0-255 PWM
    int pwmValue = static_cast<int>((percentage / 100.0f) * 255);

    // Standard Drone rotation (Assuming forward direction)
    analogWrite(_pinA, pwmValue);
    digitalWrite(_pinB, LOW);
}

void Motor::stop() const
{
    digitalWrite(_pinA, LOW);
    digitalWrite(_pinB, LOW); // Safe state[cite: 1]
}
