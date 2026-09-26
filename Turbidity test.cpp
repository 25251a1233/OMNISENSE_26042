#define TURBIDITY_PIN 35

void setup() {
  Serial.begin(115200);
  delay(1000);

  analogReadResolution(12);

  Serial.println("Turbidity Sensor Test");
}

void loop() {
  int rawValue = analogRead(TURBIDITY_PIN);

  Serial.print("Turbidity Raw Value: ");
  Serial.println(rawValue);

  delay(1000);
}