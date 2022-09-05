int count = 0 ;
int pulse_status = 0 ;
unsigned long pre_time = 0;
unsigned long now_time = 0;
unsigned long pulse_time = 0 ;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600) ;
  pinMode(5, INPUT) ;
}

void loop() {
  // put your main code here, to run repeatedly:
  if( digitalRead(5) == HIGH )
  {
    if( pulse_status == 0 )
    {
      now_time = millis();

      pulse_time = now_time - pre_time ;
      
      pulse_status = 1 ;
      count++ ;

      pre_time = millis();
    }
  }
  else
  {
    pulse_status = 0 ;
  }

  Serial.print("count = ") ;
  Serial.println(count) ;
  Serial.print("pulse time = ") ;
  Serial.println(pulse_time) ;

  //delay(500) ;
}
