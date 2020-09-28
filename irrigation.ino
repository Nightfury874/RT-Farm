
 int motor=13;
 int water=A0;
 int soil=A3;
 int old_status = 0, new_status = 1;
 void setup()
 {
  pinMode(motor,OUTPUT);
  Serial.begin(9600);
  }
 void loop()
 {
  int w=analogRead(water);
  int s=analogRead(soil);
  if(w<400 || s<950)
  {
    new_status = 1;
    if(old_status != new_status)
    {
      Serial.end();
      Serial.begin(9600);
      digitalWrite(motor,HIGH);
      Serial.print("Stop the motor\nWater level is touching sensor\n");
      Serial.print("water level: ");
      Serial.print(w);
      Serial.print("\n");
      Serial.print("Soil level: ");
      Serial.print(s);
      Serial.print("\n");
    }
  }
  else if(w<160 || s<360)
  {
    new_status = 2;
    if(old_status != new_status)
    {
      Serial.end();
      Serial.begin(9600);
      digitalWrite(motor,HIGH);
      Serial.print("Stop the motor\nWater is about to overflow\n");
      Serial.print("water level: ");
      Serial.print(w);
      Serial.print("\n");
      Serial.print("Soil level: ");
      Serial.print(s);
      Serial.print("\n");
    }
  }
  else
  {
    new_status = 3;
    if(old_status != new_status)
    { 
      digitalWrite(motor,LOW);
      Serial.end();
      Serial.begin(9600);
      Serial.print("Start the motor\n");  
    }
  }
  old_status = new_status;
  
  delay(2000);
  
 }
