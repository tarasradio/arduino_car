#include <Arduino.h>

class Motor 
{
private: 
  int pinA, pinB;
public:
  Motor(int pinA, int pinB);
  void init();
  void forward();
  void backward();
  void stop();
};