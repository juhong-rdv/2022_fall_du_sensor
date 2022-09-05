void setup()
{
    Serial.begin(9600);  
}
 
void loop()
{
    int a = 0 ;
    a++ ;
    Serial.println(a) ;

    a = 5 ;
    a-- ;
    Serial.println(a) ;

    delay(1000); 
}
