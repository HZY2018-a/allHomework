void setup()
{
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  if(Serial.available()>0)
  {
     digitalWrite(2,LOW);
     digitalWrite(3,HIGH);
     digitalWrite(4,HIGH);
     digitalWrite(5,LOW);   
  }     
}
