void setup()
{
    Serial.begin(9600);  
}
 
void loop()
{
    bool value = 1 ;  //or 0

    Serial.print("value = ");
    Serial.println(value);

    delay(1000); 
}
