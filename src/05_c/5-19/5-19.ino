void setup()
{
    Serial.begin(9600);  
}
 
void loop()
{
    int i = 0 ;
    do
    {
        Serial.print("i = ") ;
        Serial.println(i) ;

        i = i + 1 ;
    }while(i<5)  ;

    delay(1000); 
}
