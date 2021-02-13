#include <Arduino.h>
#include "motor.hpp"

#define MOTOR_LA_PIN 12
#define MOTOR_LB_PIN 13

#define MOTOR_RA_PIN 11
#define MOTOR_RB_PIN 10

Motor left(MOTOR_LA_PIN, MOTOR_LB_PIN);
Motor right(MOTOR_RA_PIN, MOTOR_RB_PIN);

void setup()
{
  left.init();
  right.init();
}

void loop()
{
  left.forward();
  right.forward();
  delay(1000);
  left.stop();
  right.stop();
  delay(1000);
  left.backward();
  right.backward();
  delay(1000);
  left.stop();
  right.stop();
  delay(1000);
}