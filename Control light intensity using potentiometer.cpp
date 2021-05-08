int led=9;
int pot=A0;
int value=0;
void setup()
{
 pinMode(led,OUTPUT);
 Serial.begin(9600);
  // put your setup code here, to run once:

}

void loop() 
{
 value=analogRead(pot);
 analogWrite(led,value);
 Serial.print("Potentiometer value : ");
 Serial.println(value);
 delay(1000);
  // put your main code here, to run repeatedly:

}