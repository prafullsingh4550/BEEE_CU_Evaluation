void setup()
{  pinMode(10,OUTPUT);
 pinMode(11,OUTPUT);
  pinMode(8,INPUT);
  pinMode(9,INPUT);
  Serial.begin(9600);
}

void loop()
{
 int d= 0;
  d =  digitalRead(8);
  delay(500);
  int c = 0;
    c= digitalRead(9);
  delay(500);
  int e=analogRead(A0);
  if(e<30)
  {
    if((d==1 && c==0)|| (d==0 && c==1))
      digitalWrite(10,1);
    else if(d==1 && c==1)
       digitalWrite(11,1);
      else
    {
      digitalWrite(10,0);
       digitalWrite(11,0);
    }
  }
  else
  {
    digitalWrite(10,0);
       digitalWrite(11,0);
    }
    
    
}
