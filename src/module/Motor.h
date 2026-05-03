/*
 * File: Motor
 * Author: Michael Franks 
 * Description:
 */

#ifndef MOTOR_H
#define MOTOR_H
#pragma once
#include <cstdint>

#include <Arduino.h>

class Motor
{
private:
    uint8_t _pinA;
    uint8_t _pinB;
    bool _isArmed;

public:
    // Constructor
    Motor(uint8_t pinA, uint8_t pinB);

    void begin();
    void arm();
    void disarm();
    // speed: 0.0 to 100.0 (Percentage)
    void setThrust(float percentage) const;
    void stop() const;
};

#endif // MOTOR_H
