float Add(float a, float b)
{
  float c = a+ b ;
  return c ;
}

float Sub(float a, float b )
{
  return a - b ;
}

float Mul(float a, float b)
{
  float c = 0 ;
  c = a * b ;
  return c ;
}

float Div(float a, float b )
{
  return a / b ;
}

void setup() {
  Serial.begin(9600) ;
}

void loop() {
  float input1 = 5.1 ;
  float input2 = 2.3 ;
  
  float a = Add(input1, input2) ;
  float s = Sub(input1, input2) ;
  float m = Mul(input1, input2) ;
  float d = Div(input1, input2) ;

  Serial.print(input1) ;
  Serial.print("+") ;
  Serial.print(input2) ;
  Serial.print(" = ") ;
  Serial.println(a) ;
}
