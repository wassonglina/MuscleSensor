// Pins for Arduino Uno and MyoWare Muscle Sensor
// Connect MyoWare Muscle Sensor + pin with 3.3 V

int SensorPin = A0;            
int MinSensorValue = 350; //check serial print values and adjust number (300- 400)    
int LED (13); 

void setup() {
    Serial.begin(9600);
     pinMode(LED, OUTPUT);
}

void loop() {
  int sensorValue = analogRead(SensorPin);
    if(sensorValue < MinSensorValue) { 
     digitalWrite(LED, LOW); //turns LED off when muscles are contracted
  }
     else { 
        digitalWrite(LED, HIGH); //turns LEDs on when muscels are relaxed
  } 
  Serial.println(sensorValue);
  delay(70);
}
