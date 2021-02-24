void setup()
{
  pinMode(13, OUTPUT);
  pinMode(A0, INPUT);
	Serial.begin(9600);
}

void loop()
{
  int sensorValue = analogRead(A0);
  analogWrite(9, sensorValue); // Wait for 1000 millisecond(s)
  Serial.println(sensorValue);
}