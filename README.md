# DroneProject
Little Diy Drone Project with ESP32_C6_ZERO

# Parts List 
- ESP32_C6_ZERO
- DRV8833 Motor Driver
- 4 x Micro DC Motors with Propellers
- LiPo Battery

# Connections

ESP32_C6_ZERO ----> DRV8833 Motor Driver
GPIO 0   ----> IN1
GPIO 1   ----> IN2
GPIO 2   ----> IN3
GPIO 3  ----> IN4
3.3V   ----> VCC
GND    ----> GND

DRV8833 Motor Driver ----> Micro DC Motors
OUT1   ----> Motor 1
OUT2   ----> Motor 1
OUT3   ----> Motor 2
OUT4   ----> Motor 2

ESP32_C6_ZERO ----> DRV8833 Motor Driver
GPIO 15  ----> IN1
GPIO 18  ----> IN2
GPIO 19  ----> IN3
GPIO 20  ----> IN4
3.3V   ----> VCC
GND    ----> GND

DRV8833 Motor Driver ----> Micro DC Motors
OUT1   ----> Motor 3
OUT2   ----> Motor 3
OUT3   ----> Motor 4
OUT4   ----> Motor 4
