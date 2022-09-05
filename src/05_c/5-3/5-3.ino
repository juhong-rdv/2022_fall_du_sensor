void setup()
{
    Serial.begin(9600);  
}
 
void loop()
{
    float value = 1.12 ;

    Serial.print("value = ");
    Serial.println(value);

    delay(1000); 
}
