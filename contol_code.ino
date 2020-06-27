#define CW 7
#define CCW 8

void setup() {
 pinMode(CW, OUTPUT);
 pinMode(CCW, OUTPUT);
  
}

void loop() {
  digitalWrite(CW, HIGH); // Motor run Clockwise
  delay(1000);
  digitalWrite(CW, LOW);
  digitalWrite(CCW, HIGH); //Motor run CounterClockwise
  delay(1000);
  digitalWrite(CCW, LOW);

}
