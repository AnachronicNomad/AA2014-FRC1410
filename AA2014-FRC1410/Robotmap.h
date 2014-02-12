#ifndef ROBOTMAP_H
#define ROBOTMAP_H


/**
 * The RobotMap is a mapping from the ports sensors and actuators are wired into
 * to a variable name. This provides flexibility changing wiring, makes checking
 * the wiring easier and significantly reduces the number of magic numbers
 * floating around.
 */

/**
 * Useful Values
 */

#define MAX_INTAKE_ANGLE 0
#define MIN_INTAKE_ANGLE 0

#define MAX_SHOOTER_ANGLE 0
#define MIN_SHOOTER_ANGLE 0

#define MAX_PULLBACK_DISTANCE 0
#define POT_RANGE 0.006
#define ENCODER_RANGE 1
#define ELEV_SPEED 0.5
#define WINCH_SPEED 0.5
#define SHOOTER_LIFT_SPEED 0.5

/**
 * Chassis Subsystem Ports
 */

//Chassis Motors

#define CHASSIS_FL_PORT 1
#define CHASSIS_FR_PORT 3
#define CHASSIS_RL_PORT 2
#define CHASSIS_RR_PORT 4

//Chassis Sensors

#define CHASSIS_ENCODER_LEFT_CHAN_A_PORT 1
#define CHASSIS_ENCODER_LEFT_CHAN_B_PORT 2
#define CHASSIS_ENCODER_RIGHT_CHAN_A_PORT 3
#define CHASSIS_ENCODER_RIGHT_CHAN_B_PORT 4

/**
 * Intake Subsystem Ports
 */

//Intake Motors

#define INTAKE_ROLLER_PORT_RELAY 1 
#define INTAKE_LIFT_ARM_PORT 5

//Intake Sensors
#define INTAKE_ARM_POTENTIOMETER_PORT 1

/**
 * Elevator
 */

//Elevator Motors
#define ELEVATOR_HEIGHT_PORT 8

//Elevator Sensors
#define ELEVATOR_LIMIT_SWITCH_LOWER_PORT 9
#define ELEVATOR_LIMIT_SWITCH_UPPER_PORT 10
#define ELEVATOR_ENCODER_CHAN_A_PORT 7
#define ELEVATOR_ENCODER_CHAN_B_PORT 8

/**
 * Shooter
 */

//Shooter Motors
#define SHOOTER_WINCH_MOTOR_PORT 6
#define SHOOTER_ANGLE_MOTOR_PORT 7

//Shooter Pneumatics
#define SHOOTER_COMPRESSOR_RELAY_PORT_RELAY 2
#define SHOOTER_COMPRESSOR_PRESSURE_SWITCH_DIO_PORT 11
#define SHOOTER_TRIGGER_EXTEND_PORT 1
#define SHOOTER_TRIGGER_RETRACT_PORT 2

//Shooter Sensors
#define SHOOTER_WINCH_ENCODER_CHAN_A_PORT 5
#define SHOOTER_WINCH_ENCODER_CHAN_B_PORT 6
#define SHOOTER_ANGLE_POTENTIOMETER_PORT 2

#endif
