#include "pros/motors.h"
#include "pros/motors.hpp"
#include "arm.hpp"


pros::Motor Arm_motor(2, pros::E_MOTOR_GEARSET_18, false, pros::E_MOTOR_ENCODER_DEGREES);  // sets up the motor for the intake


void armup(int speed){
    Arm_motor.move_velocity(speed); // move the motor at speed
}
void armdown(int speed){
    Arm_motor.move_velocity(-speed); // negative speed to reverse the motor
}
void armStop(){
    Arm_motor.move_velocity(0);  // sets the speed of the motor to 0
}