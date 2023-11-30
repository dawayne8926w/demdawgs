#include "pros/motors.h"
#include "pros/motors.hpp"
#include "clawv2.hpp"


pros::Motor clawv2_motor(3, pros::E_MOTOR_GEARSET_18, false, pros::E_MOTOR_ENCODER_DEGREES);
pros::Rotation rotationv2(5);


void up(int speed){
    clawv2_motor.move_velocity(speed); // move the motor at speed
}
void down(int speed){
    clawv2_motor.move_velocity(-speed); // negative speed to reverse the motor
}
void stop(){
    clawv2_motor.move_velocity(0); // sets the speed of the motor to 0
    clawv2_motor.set_brake_mode(pros::E_MOTOR_BRAKE_HOLD);
}

void hang(int speed){
clawv2_motor.move_velocity(speed);
}

void degreeup(int degreesv) {
while(rotationv2.get_position() < degreesv){
    clawv2_motor.move_velocity(150);
}
    clawv2_motor.move_velocity(0); // sets the speed of the motor to 0
    clawv2_motor.set_brake_mode(pros::E_MOTOR_BRAKE_HOLD);
}

void degreedown(int degreesv) {

while(rotationv2.get_position() > degreesv){
    clawv2_motor.move_velocity(200);
}
clawv2_motor.move_velocity(0); // sets the speed of the motor to 0
    clawv2_motor.set_brake_mode(pros::E_MOTOR_BRAKE_HOLD);
}

void resetv2() {
    rotationv2.reset_position();
}