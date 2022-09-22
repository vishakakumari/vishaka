char data=0;
void setup() {
  Serial.begin(9600);
  pinMode(D0,OUTPUT);
  pinMode(D1,OUTPUT);
  pinMode(D2,OUTPUT);
  pinMode(D3,OUTPUT);
}

void loop() {
  if (Serial.available()>0)  {
    data=Serial.read();
    if(data=='Forword'){
      digitalWrite(D0,HIGH);
      digitalWrite(D1,LOW);
      digitalWrite(D2,HIGH);
      digitalWrite(D3,LOW);
    }
      if(data=='Reavers'){
      digitalWrite(D0,LOW);
      digitalWrite(D1,HIGH);
      digitalWrite(D2,LOW);
      digitalWrite(D3,HIGH);}
        if(data=='Left'){
      digitalWrite(D0,HIGH);
      digitalWrite(D1,LOW);
      digitalWrite(D2,LOW);
      digitalWrite(D3,LOW);}
        if(data=='Right'){
      digitalWrite(D0,LOW);
      digitalWrite(D1,LOW);
      digitalWrite(D2,HIGH);
      digitalWrite(D3,LOW);
      }
       if(data=='Vishaka'){
      digitalWrite(D0,LOW);
      digitalWrite(D1,LOW);
      digitalWrite(D2,LOW);
      digitalWrite(D3,LOW);
      
      }
      
    }
  
    
  }
