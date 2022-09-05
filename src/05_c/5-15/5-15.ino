void setup()
{
    Serial.begin(9600);  
}
 
void loop()
{
    int a = 3 ;
    if( a < 10 )
    {
        Serial.println("Run1") ;
    }   
    else if( a < 20 )
    {
        Serial.println("Run2") ;
    } 

    delay(1000); 
}
