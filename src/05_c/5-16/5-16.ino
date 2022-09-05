void setup()
{
    Serial.begin(9600);  
}
 
void loop()
{
    int a = 20 ;
    if( a < 10 )
    {
        Serial.println("if Run") ;
    }   
    else if( a < 20 )
    {
        Serial.println("else if Run") ;
    } 
    else
    {
        Serial.println("else Run") ;
    }

    delay(1000); 
}
