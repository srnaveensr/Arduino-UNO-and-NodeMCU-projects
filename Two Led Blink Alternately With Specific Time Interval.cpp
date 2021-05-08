int button=3;
 int led=4;
 int lamp=7;
 void setup()
 {
  pinMode(button,INPUT);
  pinMode(led,OUTPUT);
  pinMode(lamp,OUTPUT);
  // put your setup code here, to run once:

}

void loop() 
{
  int state=digitalRead(button);
  if(state==false)
  {
    digitalWrite(led,HIGH);
    delay(400);
    digitalWrite(led,LOW);
    digitalWrite(lamp,HIGH);
    delay(400);
    digitalWrite(lamp,LOW);
    
   
    
  }
 
  // put your main code here, to run repeatedly:

}