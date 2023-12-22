#ifndef __CONFIG_H__
#define __CONFIG_H__

#define GATE_MOTOR_FORWARD_PIN 9
#define GATE_MOTOR_BACKWARD_PIN 5
#define GATE_CLOSED_END_PIN A6
#define GATE_OPENED_END_PIN A7

#define FEEDER_MOTOR_FORWARD_PIN 6
#define FEEDER_MOTOR_BACKWARD_PIN 3
#define FEEDER_CONSTRAIN_END_PIN 12
#define FEEDER_CONSTRAIN_IR_PIN A2

#define LOADING_DRUM_MOVER_MOTOR_FORWARD_PIN 8
#define LOADING_DRUM_MOVER_MOTOR_BACKWARD_PIN 7
#define LOADING_DRUM_MOVER_MOTOR_FRONT_END_PIN 4
#define LOADING_DRUM_MOVER_MOTOR_BACK_END_PIN 2

#define LOADING_DRUM_ROTATION_MOTOR_FORWARD_PIN 10
#define LOADING_DRUM_ROTATION_MOTOR_BACKWARD_PIN 11
#define LOADING_DRUM_ROTATION_MOTOR_POSITION_PIN A1
#define LOADING_DRUM_ROTATION_SHELL_CHECKER_PIN A0


// Commands
#define CALIBRATION_COMMAND 0x01

void init_pins(void) {
  pinMode(GATE_MOTOR_FORWARD_PIN, OUTPUT);
  pinMode(GATE_MOTOR_BACKWARD_PIN, OUTPUT);
  pinMode(GATE_CLOSED_END_PIN, INPUT);
  pinMode(GATE_OPENED_END_PIN, INPUT);
  pinMode(FEEDER_MOTOR_FORWARD_PIN, OUTPUT);
  pinMode(FEEDER_MOTOR_BACKWARD_PIN, OUTPUT);
  pinMode(FEEDER_CONSTRAIN_END_PIN, INPUT_PULLUP);
  pinMode(FEEDER_CONSTRAIN_IR_PIN, INPUT);
  pinMode(LOADING_DRUM_MOVER_MOTOR_FORWARD_PIN, OUTPUT);
  pinMode(LOADING_DRUM_MOVER_MOTOR_BACKWARD_PIN, OUTPUT);
  pinMode(LOADING_DRUM_MOVER_MOTOR_FRONT_END_PIN, INPUT_PULLUP);
  pinMode(LOADING_DRUM_MOVER_MOTOR_BACK_END_PIN, INPUT_PULLUP);
  pinMode(LOADING_DRUM_ROTATION_MOTOR_FORWARD_PIN, OUTPUT);
  pinMode(LOADING_DRUM_ROTATION_MOTOR_BACKWARD_PIN, OUTPUT);
  pinMode(LOADING_DRUM_ROTATION_MOTOR_POSITION_PIN, INPUT);
  pinMode(LOADING_DRUM_ROTATION_SHELL_CHECKER_PIN, INPUT);
}

#endif