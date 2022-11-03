int count = 0 ;             //카드가 몇번 꽂혔는지 count하는 변수
int pulse_status = 0 ;      //카드의 상태를 잠시 저장하는 변수

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600) ;      //시리얼 통신 시작
  pinMode(5, INPUT_PULLUP) ;       //포토인터럽트 센서의 Digital Output -5
}

void loop() {
  // put your main code here, to run repeatedly:
  if( digitalRead(5) == LOW )  //포토인터럽트에 장애물이 없는 경우
  {
    if( pulse_status == 1 )     //pulse_status : 0 - 직전에 카드가 존재 했었다, 1  - 직전에 카드가 존재하지 않았다.
    {
      count++ ;                 //카드가 꽂힌 수 1 증가
      pulse_status = 0 ;        //포토인터럽트에 장애물이 없어서 반복 수행되더라도 cunt가 1만 증가 되도록 0으로 만든다.      
    }
  }
  else                          //포토인터럽트에 장애물이 있는경우
  {
    pulse_status = 1 ;          //카드가 존재한다. pulse_status = 1 ;
  }

  Serial.print("count = ") ;    //카운트 출력
  Serial.println(count) ;
}