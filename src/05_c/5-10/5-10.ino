void setup()
{
    Serial.begin(9600);  
}
 
void loop()
{
    int a = 0 ;
    int b = 10 ;
    a = b + 1 ;
    Serial.println(a) ;
    delay(1000); 
}
