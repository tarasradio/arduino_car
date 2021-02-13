#include "motor.hpp"

// Конструктор
Motor::Motor(int pinA, int pinB) {
  this->pinA = pinA;
  this->pinB = pinB;
}

void Motor::init() {
  pinMode(this->pinA, OUTPUT);
  pinMode(this->pinB, OUTPUT);
}

void Motor::forward() {
  digitalWrite(this->pinA, HIGH);
  digitalWrite(this->pinB, LOW);
}

void Motor::backward() {
  digitalWrite(this->pinA, LOW);
  digitalWrite(this->pinB, HIGH); 
}

void Motor::stop() {
  digitalWrite(this->pinA, LOW);
  digitalWrite(this->pinB, LOW);
}