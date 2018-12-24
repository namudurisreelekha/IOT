void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(5, INPUT);
  pinMode(6,INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  static int count;
  static int xd = LOW;
  static int yd = LOW;
  int x = digitalRead(5);
  int y = digitalRead(6);
  if(x == HIGH){
    if (xd == LOW) {
        count++;
        Serial.println(count);
    }
    xd = x;
  }
  else {
    xd = LOW;
  }
  if(y == HIGH){
    if (yd == LOW) {
        count--;
        Serial.println(count);
    }
    yd = y;
  }
  else {
    yd = LOW;
  }
}
