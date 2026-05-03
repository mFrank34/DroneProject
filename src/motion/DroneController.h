/*
 * File: DroneController
 * Author: Michael Franks 
 * Description: Quad Motor controller
 */

#pragma once
#ifndef DRONE_CONTROLLER_H
#define DRONE_CONTROLLER_H

#include "Motor.h"

class DroneController
{
public:
    DroneController(uint motorPinA, uint motorPinB, uint motorPinC, uint motorPinD);

    void forward(float speed);
    void backward(float speed);

    void turnLeft(float speed);
    void turnRight(float speed);

    void spinLeft(float speed);
    void spinRight(float speed);

    void brake();
    void coast();

private:
    Motor frontLeft, frontRight, rearLeft, rearRight;
    uint8_t _sleep_pin;

protected:
    void setup();
};

#endif // DRONE_CONTROLLER_H
