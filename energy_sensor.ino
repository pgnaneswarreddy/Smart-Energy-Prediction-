int voltagePin = A0;
int currentPin = A1;
float voltage, current, powerFactor, energy;

void setup() {
  Serial.begin(9600);
}

void loop() {
  voltage = analogRead(voltagePin) * (5.0 / 1023.0);
  current = analogRead(currentPin) * (5.0 / 1023.0);
  powerFactor = 0.9; // Assume constant
  energy = voltage * current * powerFactor;
  
  Serial.print(voltage); Serial.print(",");
  Serial.print(current); Serial.print(",");
  Serial.println(energy);
  
  delay(1000);
}
