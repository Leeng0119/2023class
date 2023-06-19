#include <Servo.h>

Servo myservo;

int motorPinA = 2;
int motorPinB = 3;
int enablePin = 11;

void setup()
{
  myservo.attach(9);
  pinMode(motorPinA,OUTPUT);
  pinMode(motorPinB,OUTPUT);
  pinMode(enablePin,OUTPUT);
  analogWrite(enablePin,1000);
}

void move_forward(){
  digitalWrite(motorPinA,LOW);
  digitalWrite(motorPinB,HIGH); 
}

void move_backward(){
  digitalWrite(motorPinA,HIGH);
  digitalWrite(motorPinB,LOW);
}

void wheel_forward(){
  myservo.write(90);  
}

void wheel_left(){
  myservo.write(50);
}

void wheel_right(){
  myservo.write(130);
}

void stop_move(){
  digitalWrite(motorPinA,LOW);
  digitalWrite(motorPinB,LOW);
}

void loop()
{
  wheel_forward();
  move_forward();
  delay(1500);
  wheel_left();
  delay(200);
  wheel_forward();
  delay(1900);
  wheel_left();
  delay(1500);
  wheel_forward();
  delay(750);
  wheel_left();
  delay(1200);
  wheel_forward();
  delay(1500);
  wheel_left();
  delay(200);
  wheel_forward();
  delay(1900);
  stop_move();
  delay(3000);
}
