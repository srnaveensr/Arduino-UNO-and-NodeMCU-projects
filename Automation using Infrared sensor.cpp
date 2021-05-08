int sensor=A0;
int led=7;
void setup() 
{
pinMode(sensor,INPUT);
pinMode(led,OUTPUT);
// put your setup code here, to run once:
}

void loop() {
  int state=digitalRead(sensor);

  if(state==true)
  {
    Serial.println(state);
    delay(1000);
    digitalWrite(led,LOW);
  }
  else
  {
    digitalWrite(led,HIGH);
    }
  // put your main code here, to run repeatedly:

}