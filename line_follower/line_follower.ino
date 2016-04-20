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
  leftMotor.run(FORWARD);
  rightMotor.run(FORWARD);
  leftMotor.setSpeed(150);
  rightMotor.setSpeed(150);
}

void loop() {
  int l = digitalRead(LEFT_PIN);
  int r = digitalRead(RIGHT_PIN);
  int m = digitalRead(MIDDLE_PIN);
  if(m==1&&l==0&&r==0)
  {}
  else if(m==1&&l==1&&r==0)
  {
    rightMotor.faster(10);
    leftMotor.slower(10);
  }
  else if(m==1&&l==0&&r==1)
  {
    rightMotor.slower(10);
    leftMotor.faster(10);
  }
  else if(m==1&&l==1&&r==1)
  {
    leftMotor.setSpeed(150);
    rightMotor.setSpeed(150);
  }
  else if(m==0&&l==0&&r==0)
  {
    leftMotor.setSpeed(150);
    rightMotor.setSpeed(150);
  }
  else if(m==0&&l==1&&r==0)
  {
    rightMotor.faster(10);
    leftMotor.slower(10);
  }
  else if(m==0&&l==0&&r==1)
  {
    rightMotor.slower(10);
    leftMotor.faster(10);
  }
  else if(m==0&&l==1&&r==1)
  {
    leftMotor.setSpeed(150);
    rightMotor.setSpeed(150);
  }
  delay(100);
}
