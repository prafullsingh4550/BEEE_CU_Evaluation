void setup()
{  pinMode(3,OUTPUT);
 pinMode(2,OUTPUT);
  pinMode(5,INPUT);
  pinMode(4,INPUT);
  Serial.begin(9600);
}

void loop()
{
 int d= 0;
  d =  digitalRead(4);
  delay(500);
  int c = 0;
    c= digitalRead(5);
  delay(500);
  int e=analogRead(A0);
  if(e>30)
  {
    if((d==1 && c==0)|| (d==0 && c==1))
      digitalWrite(3,HIGH);
    else if(d==1 && c==1)
       digitalWrite(2,1);
      else
    {
      digitalWrite(3,0);
       digitalWrite(2,0);
    }
  }
  else
  {
    digitalWrite(3,0);
       digitalWrite(2,0);
    }
    
    
}
