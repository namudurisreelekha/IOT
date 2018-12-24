#include<Servo.h>
Servo myservo;
void setup() {
  // put your setup code here, to run once:
  myservo.attach(9);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  float i;
  for(i=0;i<=180;i+=3.5){
    Serial.println(i);
    myservo.write(i);
    delay(1000);
  }
  for(i=180;i>=0;i-=3.5){
    Serial.println(i);
    myservo.write(i);
    delay(1000);
  }
}
