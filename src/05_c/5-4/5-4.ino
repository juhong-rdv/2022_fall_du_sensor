void setup()
{
    Serial.begin(9600);  
}
 
void loop()
{
    double value = 1.123456 ;

    Serial.print("value = ");
    Serial.println(value);

    delay(1000); 
}
