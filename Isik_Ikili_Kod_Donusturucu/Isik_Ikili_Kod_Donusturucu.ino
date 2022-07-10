#include<Servo.h>
int buton=A0,butondurumu=1;
int key1=3,key2=5,key3=2,key4=4;
int ledpin1=13,ledpin2=12,ledpin3=8,ledpin4=7;
Servo servo1,servo2,servo3,servo4;

void setup() { 

  Serial.begin(9600);
  servo1.write(0);
  servo2.write(0);
  servo3.write(0);
  servo4.write(0);
  pinMode(buton,INPUT);
  pinMode(ledpin1,OUTPUT);
  pinMode(ledpin2,OUTPUT);
  pinMode(ledpin3,OUTPUT);
  pinMode(ledpin4,OUTPUT);
  pinMode(key1, INPUT_PULLUP);
  pinMode(key2, INPUT_PULLUP);
  pinMode(key3, INPUT_PULLUP);
  pinMode(key4, INPUT_PULLUP);
  servo1.attach(6);
  servo2.attach(9);
  servo3.attach(10);
  servo4.attach(11);

}

void loop() {
  
  butondurumu=digitalRead(buton);
  int sensorpin1=analogRead(A1);
  int sensorpin2=analogRead(A2);
  int sensorpin3=analogRead(A3);
  int sensorpin4=analogRead(A4);
  int key1S = digitalRead(key1);
  int key2S = digitalRead(key2);
  int key3S = digitalRead(key3);
  int key4S = digitalRead(key4);
     if(!key1S){
      servo1.write(0);
     }
     if(!key2S){
      servo2.write(0);
     }
     if(!key3S){
      servo3.write(0);
     }
     if(!key4S){
      servo4.write(0);
     }
     if (sensorpin1<600){
    digitalWrite(ledpin1,HIGH);
     }
     else{
      digitalWrite(ledpin1,LOW);
     }
     if (sensorpin2<600){
    digitalWrite(ledpin2,HIGH);
     }
     else{
      digitalWrite(ledpin2,LOW);
     }
     if (sensorpin3<600){
    digitalWrite(ledpin3,HIGH);
     }
     else{
      digitalWrite(ledpin3,LOW);
     }
     if (sensorpin4<600){
    digitalWrite(ledpin4,HIGH);
     }
     else{
      digitalWrite(ledpin4,LOW);
     }
     if (butondurumu==HIGH){
  servo1.write(45);
  servo2.write(45);
  servo3.write(45);
  servo4.write(45);
      digitalWrite(ledpin1,HIGH);
      digitalWrite(ledpin2,HIGH);
      digitalWrite(ledpin3,HIGH);
      digitalWrite(ledpin4,HIGH);
     delay(500);
      digitalWrite(ledpin1,LOW);
      digitalWrite(ledpin2,LOW);
      digitalWrite(ledpin3,LOW);
      digitalWrite(ledpin4,LOW);
     delay(500);
      digitalWrite(ledpin1,HIGH);
      digitalWrite(ledpin2,HIGH);
      digitalWrite(ledpin3,HIGH);
      digitalWrite(ledpin4,HIGH);
     delay(500);
      digitalWrite(ledpin1,LOW);
      digitalWrite(ledpin2,LOW);
      digitalWrite(ledpin3,LOW);
      digitalWrite(ledpin4,LOW);
     delay(500);  
     }
}
    
     
