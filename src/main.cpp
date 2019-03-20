#include<Arduino.h>
#include<Servo.h>
//defines the variables and pins used by the US sensor and the constants for conversion
int pinTrigger = 9;
int pinEcho = 10;
const float soundSpeed = 0.034; //cm/ms
volatile float distance = 0;
volatile float echoTime;

//defines the pins and variables used for the servo motor
int pinServo = 3;
Servo servo;
int servoAngle = 5;

void setup(){
  pinMode(pinTrigger, OUTPUT);
  digitalWrite(pinTrigger, LOW);
  pinMode(pinEcho, INPUT);
  Serial.begin(19200);
  servo.attach(pinServo);
}
float Head(){
  //finds the distance from target 
  float distance = 0;
  digitalWrite(pinTrigger, HIGH);
  delay(12);
  digitalWrite(pinTrigger, LOW);
  echoTime = pulseIn(pinEcho, HIGH);
  distance = echoTime*soundSpeed/2;
  return distance;
}
void servoSearch(){
  //rotates the servo to search for target, while it's too far TODO: distance>200
  int change = 10;
  while (distance>100){
    servo.write(servoAngle);
    distance = Head();
    servoAngle += change;
    if (servoAngle >=170){
      change = -change;
    }
  }
}
void loop(){
  distance = Head();
  if (distance>100){
      servoSearch();
  }
  Serial.println(distance);
  delay(50);
}
