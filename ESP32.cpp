//To test the communication between ESP32 and the software 
void setup() {
  Serial.begin(115200);
  delay(1000);

  Serial.println("ESP32 Connected!");
}

void loop() {
  Serial.println("ESP32 is working...");
  delay(1000);
}