void setup()
{
    Serial.begin(9600);  
}
 
void loop()
{
    int value = 10 ;

    Serial.print("value = ");
    Serial.println(value);

    delay(1000); 
}
