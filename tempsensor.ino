void setup(){
  Serial.begin(9600);
}

void loop(){
  int sensorValue=analogRead(A0);
  float miliVolt = (sensorValue/1024.0)*5000;
  float celsius = miliVolt/10;
  Serial.print(celsius);
   Serial.println("`C");
   delay(1000);
}
