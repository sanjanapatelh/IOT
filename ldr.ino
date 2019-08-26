
int ldrvalue=0;
int lightsensitivity=500;
void setup()
{
  Serial.begin(9600);
  pinMode(11,OUTPUT);
 
  
}
void loop()
{
  ldrvalue=analogRead(A0);
  Serial.println(ldrvalue);
  delay(50);
  if(ldrvalue<lightsensitivity)
  digitalWrite(11,HIGH);
  else
  digitalWrite(11,LOW);
  delay(1000);
}
