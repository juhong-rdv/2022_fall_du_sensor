void setup()
{
    Serial.begin(9600);  
}
 
void loop()
{
    int a = 10 ;
    if( a < 10 )
    {
        Serial.println("Run1") ;
    }   
    else
    {
        Serial.println("Run2") ;
    } 

    delay(1000); 
}
