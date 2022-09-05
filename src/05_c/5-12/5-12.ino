void setup()
{
    Serial.begin(9600);  
}
 
void loop()
{
    int a = 0 ;
    int b = 10 ;
    bool c = a == b ;
    Serial.println(c) ;
    delay(1000); 
}
