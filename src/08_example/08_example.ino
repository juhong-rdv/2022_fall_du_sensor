void setup()
{
  Serial.begin(9600) ;
  
  pinMode(6, OUTPUT);  //6 : Trigger
  pinMode(7, INPUT);    //7 : Echo

  pinMode(9, OUTPUT) ;  //BLUE
  pinMode(10, OUTPUT) ; //GREEN
  pinMode(11, OUTPUT) ; //red
}

void loop()
{
  //trigger 발생
  digitalWrite(6, LOW) ;
  delayMicroseconds(2) ;
  digitalWrite(6, HIGH) ;
  delayMicroseconds(10) ;
  digitalWrite(6, LOW) ;
  
  long value = pulseIn(7, HIGH) ;
  
  float distance = (float)value * 0.01723 ;
  
  Serial.print("Ultra Sonic : ") ;
  Serial.print(distance) ;
  Serial.println("cm") ;

  int green_value = (distance / 100.0)* 255 ;
  if( green_value > 255 ) green_value = 255 ;

  int red_value = 255 - green_value ;

  analogWrite(11, red_value) ;
  analogWrite(10, green_value) ;
}
