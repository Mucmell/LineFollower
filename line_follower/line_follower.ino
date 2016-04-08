#include <AFMotor.h>
#define LEFT_PIN A2
#define RIGHT_PIN A1
#define MIDDLE_PIN A0

AF_DCMotor leftMotor(2);
AF_DCMotor rightMotor(1);

void setup() {
  Serial.begin(9600);           // set up Serial library at 9600 bps
  pinMode(LEFT_PIN, INPUT);
  pinMode(RIGHT_PIN, INPUT);
  pinMode(MIDDLE_PIN, INPUT);
}

void loop() {
  leftMotor.run(FORWARD);
  rightMotor.run(FORWARD);
  leftMotor.setSpeed(150);

}
