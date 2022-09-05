int Add(int a, int b)
{
    int c = 0 ;
    c = a + b ;
    return c ;
}

void setup()
{
    Serial.begin(9600);  
}
 
void loop()
{
    int add_value = Add(1, 2) ;
    Serial.println(add_value) ;
    delay(1000); 
}
