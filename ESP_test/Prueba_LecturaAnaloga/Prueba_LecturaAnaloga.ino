//Lectura Analoga

int sensorPin = A0;
int ledPin = 16; // Salida ESP8266
//int ledPin = 22; // Salida ESP32
int sensorValue = 0;  // Inicialización del valor de lectura analoga

void setup() {
  // Declaración del ledPin como salida
  pinMode(ledPin, OUTPUT);
}

void loop() {
 
  // Lectura Analoga:
  sensorValue = analogRead(sensorPin);
  digitalWrite(ledPin, HIGH);
  delay(sensorValue);
  digitalWrite(ledPin, LOW);
  delay(sensorValue);
}
