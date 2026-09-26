// To test the Ph sensor 
#define PH_PIN 34

void setup() {
  Serial.begin(115200);
  delay(1000);

  analogReadResolution(12);

  Serial.println("pH Sensor Test");
}

void loop() {
  int rawValue = analogRead(PH_PIN);

  Serial.print("pH Raw Value: ");
  Serial.println(rawValue);

  delay(1000);
}