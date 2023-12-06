#include "Ultrasonic.h"

int trig = 3;
int echo = 4;
int distancia = 0;

Ultrasonic ultrasonic(trig,echo);

void setup() {
  pinMode(2, OUTPUT);
  pinMode(1, OUTPUT);
  pinMode(0, OUTPUT);
}

void loop() {
 distancia = ultrasonic.read();

 if (distancia<5) {
  digitalWrite(2,HIGH);
  digitalWrite(1,HIGH);
  digitalWrite(0,HIGH);
 } 
 else if (distancia>=5 && distancia<10){
  digitalWrite(2,LOW);
  digitalWrite(1,HIGH);
  digitalWrite(0,HIGH);
 }  
  else if (distancia>=10 && distancia<15){
  digitalWrite(2,LOW);
  digitalWrite(1,LOW);
  digitalWrite(0,HIGH);
 } 
  else if (distancia>=15){
  digitalWrite(2,LOW);
  digitalWrite(1,LOW);
  digitalWrite(0,LOW);
 }
}