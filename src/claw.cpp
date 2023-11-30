#include "claw.hpp"
#include "pros/motors.h"
#include "pros/motors.hpp"



pros::Motor claw_motor(10, pros::E_MOTOR_GEARSET_06, false, pros::E_MOTOR_ENCODER_DEGREES);  // sets up the motor for the intake


void clawclose(int speed){
    claw_motor.move_velocity(speed); // move the motor at speed
}
void clawopen(int speed){
    claw_motor.move_velocity(-speed); // negative speed to reverse the motor
}
void clawStop(){
    claw_motor.move_velocity(0);  // sets the speed of the motor to 0
}