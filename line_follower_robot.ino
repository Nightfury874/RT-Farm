int s1=3;
 int s2=4;
 int m1=5;
 int m2=6;
 int m3=7;
 int m4=8;
 int p=9;
 int a=0;
 int t=0;

 void setup()
 {
  if(Serial.available()>0)
  {
  t = Serial.read();
  Serial.println(t);
  }
  pinMode(s1,INPUT);
  pinMode(s2,INPUT);
  pinMode(m1,OUTPUT);
  pinMode(m2,OUTPUT);
  pinMode(m3,OUTPUT);
  pinMode(m4,OUTPUT);
  pinMode(p,OUTPUT);
  }
  void loop()
 {
    if(t=='1' && digitalRead(s1)==LOW && digitalRead(s2)==LOW)
    {digitalWrite(m1,HIGH);  
    digitalWrite(m2,LOW);  
    digitalWrite(m3,HIGH);  
    digitalWrite(m4,LOW); 
    t=0;}

     if(t=='1' && digitalRead(s1)==LOW && digitalRead(s2)==HIGH)
    {digitalWrite(m1,LOW);  
    digitalWrite(m2,HIGH);  
    digitalWrite(m3,HIGH);  
    digitalWrite(m4,LOW);
    t=0;}  
     
     if(t=='1' && digitalRead(s1)==HIGH && digitalRead(s2)==LOW)
    {digitalWrite(m1,HIGH);  
    digitalWrite(m2,LOW);  
    digitalWrite(m3,LOW);  
    digitalWrite(m4,HIGH);
    t=0;} 
    
     if(digitalRead(s1)==HIGH && digitalRead(s2)==HIGH)
    {digitalWrite(m1,LOW);  
    digitalWrite(m2,LOW);  
    digitalWrite(m3,LOW);  
    digitalWrite(m4,LOW);
    digitalWrite(p,HIGH);
    t=0;}  
    if(t=='2' && digitalRead(s1)==LOW && digitalRead(s2)==LOW)
    {digitalWrite(m1,HIGH);  
    digitalWrite(m2,LOW);  
    digitalWrite(m3,HIGH);  
    digitalWrite(m4,LOW); 
    t=1;}
 }
 
