int s1=3;
 int s2=4;
 int m1=5;
 int m2=6;
 int m3=7;
 int m4=8;
 int c=0;
 void setup()
 {
  pinMode(s1,INPUT);
delay(500);
  pinMode(s2,INPUT);
delay(500);
  pinMode(m1,OUTPUT);
  pinMode(m2,OUTPUT);
  pinMode(m3,OUTPUT);
  pinMode(m4,OUTPUT);
  }
  void loop()
  {
    if(c<=1 && digitalRead(s1)==LOW && digitalRead(s2)==LOW)
    {digitalWrite(m1,HIGH);  
    digitalWrite(m2,LOW);  
    digitalWrite(m3,HIGH);  
    digitalWrite(m4,LOW); 
    }

     if(c<=1 && digitalRead(s1)==LOW && digitalRead(s2)==HIGH)
    {digitalWrite(m1,HIGH);  
    digitalWrite(m2,LOW);  
    digitalWrite(m3,HIGH);  
    digitalWrite(m4,LOW); 
    c++;}  
     
     if(c<=1 && digitalRead(s1)==HIGH && digitalRead(s2)==LOW)
    {digitalWrite(m1,HIGH);  
    digitalWrite(m2,LOW);  
    digitalWrite(m3,HIGH);  
    digitalWrite(m4,LOW); 
    c++;}
    
     if(c<=1 && digitalRead(s1)==HIGH && digitalRead(s2)==HIGH)
    {digitalWrite(m1,HIGH);  
    digitalWrite(m2,LOW);  
    digitalWrite(m3,HIGH);  
    digitalWrite(m4,LOW); 
    c++;}
    
    else if(c>1)
    {digitalWrite(m1,LOW);  
    digitalWrite(m2,LOW);  
    digitalWrite(m3,LOW);  
    digitalWrite(m4,LOW); } 
    
    }
