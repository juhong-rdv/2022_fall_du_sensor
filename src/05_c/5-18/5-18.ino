void setup()
{
    Serial.begin(9600);  
}
 
void loop()
{
    int i = 0 ;
    while(i<5)
    {
        Serial.print("i = ") ;
        Serial.println(i) ;

        i = i + 1 ;
    }    
    delay(1000); 
}
