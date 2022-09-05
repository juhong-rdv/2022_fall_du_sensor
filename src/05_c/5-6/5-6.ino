void setup()
{
    Serial.begin(9600);  
}
 
void loop()
{
    int value[3] ;
    value[0] = 10 ;
    value[1] = 12 ;
    value[2] = 31 ;

    Serial.print("value[0] = ");
    Serial.println(value[0]);

    delay(1000); 
}
