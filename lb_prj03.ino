int sensorPin = A0;
int sampleValue;
int ledNumber;



void setup()
{
	pinMode(9, OUTPUT);
	pinMode(sensorPin, INPUT);

 
	analogWrite(9, 0);

	Serial.begin(9600);
}

void loop()
{
	Serial.print("sampleValue is  = ");

	sampleValue = analogRead(sensorPin);
	Serial.print(sampleValue);
	Serial.println();

	ledNumber = map(sampleValue, 0, 1023, 0, 255);

	if (sampleValue > 0){
		for (int i = 0; i <= ledNumber; i++)
			{
				analogWrite(9, i);
				delay(2);
			}
	
	 
		for (int j = ledNumber; j > 1; j--)
		{
			analogWrite(9, j);
			delay(2);
		}
	}

}
