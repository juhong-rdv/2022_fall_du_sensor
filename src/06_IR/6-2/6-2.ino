void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600) ;
  pinMode(5, INPUT) ;
}

void loop() {
  // put your main code here, to run repeatedly:
  if( digitalRead(5) == LOW )
  {
    Serial.println("Check Line!") ;
  }
  else
  {
    Serial.println("Line") ;
  }

  delay(500) ;
}
