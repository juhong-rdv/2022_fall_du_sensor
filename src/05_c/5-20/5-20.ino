void setup() {
  // put your setup code here, to run once:
  pinMode(11, OUTPUT) ;
  pinMode(10, OUTPUT) ;
  pinMode(9, OUTPUT) ;
}

void loop() {
  // put your main code here, to run repeatedly:
  analogWrite(11, 255) ;
  analogWrite(10, 128) ;
  analogWrite(9, 0) ;
}
