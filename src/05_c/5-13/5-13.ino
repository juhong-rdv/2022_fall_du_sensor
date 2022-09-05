void setup()
{
    Serial.begin(9600);  
}
 
void loop()
{
    int a = 10 ;
    if( a < 10 )
    {
        Serial.println("Run") ;
    }    

    delay(1000); 
}
