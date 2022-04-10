//Codigo de ejemplo Pruebas

int salida = 22; // Salida para ESP32
//int salida = 16; // Salida para ESP8266
 
void setup() { //ejecuta 1 vez
  
  pinMode(salida, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(salida, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(300);                       // wait for a second
  digitalWrite(salida, LOW);    // turn the LED off by making the voltage LOW
  delay(300);                       // wait for a second
}
