int sensor = A0;
int led = 7;

void setup() 

{
  pinMode(sensor,INPUT);
  pinMode(led,OUTPUT);
  Serial.begin(9600);
}

void loop() 

{
  int value = analogRead(sensor);
  Serial.println(value);
  delay(1000);
 
  if(value<400)
  {
    digitalWrite(led,HIGH);
  }
 
  if(value>800)
  {
    digitalWrite(led,LOW);
// put your main code here, to run repeatedly:
  }

}