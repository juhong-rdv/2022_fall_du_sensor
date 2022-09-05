#include <Adafruit_MLX90614.h>

Adafruit_MLX90614 mlx = Adafruit_MLX90614();

void setup() {
  // put your setup code here, to run once:

  //1. 시리얼통신 시작 : 통신속도는 9600
  //2. 물체감지를 위한 아두이노 5번핀을 입력핀으로 설정 
  //3. LED 출력을 위한 아날로그 출력이 가능한 아두이노 9, 10, 11번핀을 출력핀으로 설정
  //4. 부저 출력을 위한 아두이노 8번핀을 출력핀으로 설정
  //5. mlx 시작
}

void loop() {
  // put your main code here, to run repeatedly:
  if( 물체가 감지 되었다면 )
  {
    float 물체온도 = mlx.섭씨온도() ;
    
    if( 물체온도가 37.5도 이상이면 )
    {
      큰소리의 부저 출력 ;
      LED를 빨간색으로 ;
    }
    else
    {
      작은소리의 부저 출력 ;
      LED를 초록 색으로 ;
    }

    1초 delay ;
  }
  else    //물체가 감지되지 않은경우
  {
  }
}
