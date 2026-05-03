/*
 * File: DroneController
 * Author: Michael Franks 
 * Description:
 */

#pragma once
#ifndef DRONE_CONTROLLER_H
#define DRONE_CONTROLLER_H

#include "Motor.h"

class DroneController
{
private:
    Motor frontLeft, frontRight, rearLeft, rearRight;
    uint8_t _sleep_pin;
public:
    DroneController();

};

#endif // DRONE_CONTROLLER_H
