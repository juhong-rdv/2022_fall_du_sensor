// C++ code
//
void setup()
{
  Serial.begin(9600); //  시리얼 설정
}

void loop()
{
  int analog_value = analogRead(A0);
  Serial.println(analog_value);          // 값 출력
}
