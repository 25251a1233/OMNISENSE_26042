#define PH_PIN 34

void setup() {
  Serial.begin(115200);
  delay(1000);

  analogReadResolution(12);
  analogSetPinAttenuation(PH_PIN, ADC_11db);

  Serial.println("================================");
  Serial.println("      pH SENSOR TEST");
  Serial.println("================================");
  Serial.println("Probe is in water sample...");
}

void loop() {

  long total = 0;

  // Take 10 readings and average them
  for (int i = 0; i < 10; i++) {
    total += analogRead(PH_PIN);
    delay(20);
  }

  int averageRaw = total / 10;

  Serial.print("pH Raw Value: ");
  Serial.println(averageRaw);

  delay(1000);
}