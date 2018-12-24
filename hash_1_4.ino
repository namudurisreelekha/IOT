void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
 pinMode(8, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int x = analogRead(A0);
  Serial.println(x);
  if(x == 1023){
    digitalWrite(8,HIGH);
    Serial.println("Light Glow");
  }
  else{
    digitalWrite(8,LOW);
    Serial.println("Light off");
  }
}
