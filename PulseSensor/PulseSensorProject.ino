//  Variables
int PulseSensorPurplePin = 36;
int LED13 = 2;
int Signal;
int Threshold = 3000;


// The SetUp Function:
void setup() {
    pinMode(LED13,OUTPUT);
    Serial.begin(9600);

}

// The Main Loop Function
void loop() {

	Signal = analogRead(PulseSensorPurplePin);
	Serial.println(Signal); 

	if (Signal > Threshold) {
		digitalWrite(LED13, HIGH);
	} else {
		digitalWrite(LED13, LOW);
	}
	delay(10);
}
