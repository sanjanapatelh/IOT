#include<SoftwareSerial.h>
int sensorpin=A0;
int sensorvalue=0;
int led=9;
int buzzer=12;
void setup()
{
  pinMode(led,OUTPUT);
  pinMode(buzzer,OUTPUT);
  Serial.begin(9600);
}
void loop()
{
  sensorvalue=analogRead(sensorpin);
  Serial.println(sensorvalue);
  if(sensorvalue<950)
  {
  digitalWrite(buzzer,HIGH);
  digitalWrite(led,HIGH);
  delay(1000);
  }
  else
  {
    digitalWrite(buzzer,LOW);
  digitalWrite(led,LOW);
  delay(sensorvalue);
  }
}
