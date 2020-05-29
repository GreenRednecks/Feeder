#include <Arduino.h>

//Futterverhaeltniss
const int timeFeedA = 5;
const int timeFeedB = 1;

#define FEEDERA 16
#define FEEDERB 5

void setup() {
  // put your setup code here, to run once:
  pinMode(FEEDERA, OUTPUT);
  pinMode(FEEDERB, OUTPUT);
}

void loop() {

  digitalWrite(FEEDERA, HIGH);
  delay(timeFeedA*1000);
  digitalWrite(FEEDERA, LOW);
  digitalWrite(FEEDERB, HIGH);
  delay(timeFeedB*1000);
  digitalWrite(FEEDERB, LOW);

  // put your main code here, to run repeatedly:
}