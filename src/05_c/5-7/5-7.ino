void PrintMyName(void)
{
    Serial.println("Juhong Park") ;
}

void setup()
{
    Serial.begin(9600);  
}
 
void loop()
{
    PrintMyName() ;
    delay(1000); 
}
