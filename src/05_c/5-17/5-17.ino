void setup()
{
    Serial.begin(9600);  
}
 
void loop()
{
    for(int i=0 ; i<5 ; i++ )
    {
        Serial.println("") ;
        Serial.print("*") ;
    }    
    delay(1000); 
}
