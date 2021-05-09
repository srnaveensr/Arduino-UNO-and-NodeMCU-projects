#include <DHT.h>
#include <DHT_U.h>
int sensor=7;
void setup() {
pinMode(sensor,INPUT);
Serial.begin(9600);// put your setup code here, to run once:
}
dht DHT;
void loop() {
  int value=DHT.read11(sensor);
  float temp=DHT.temperature;
  float hum=DHT.humidity;
  Serial.print("Temperature:");
  Serial.print(temp);
  Serial.println("Humidity:");
  Serial.begin(hum);
  // put your main code here, to run repeatedly:
}