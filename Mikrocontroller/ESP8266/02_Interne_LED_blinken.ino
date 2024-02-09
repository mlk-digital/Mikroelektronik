// Ein einfaches Programm zum Blinken einer internen LED
void setup() {
  // Initialisiere den eingebauten LED-Pin als Ausgang
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  // Schalte die LED ein (beachte, dass bei aktiv niedrigen Systemen wie dem ESP8266, LOW die LED einschaltet)
  digitalWrite(LED_BUILTIN, LOW);  
  delay(1000); // Warte eine Sekunde

  // Schalte die LED aus, indem die Spannung auf HIGH gesetzt wird
  digitalWrite(LED_BUILTIN, HIGH); 
  delay(2000); // Warte zwei Sekunden, um das Blinken der LED zu demonstrieren
}
