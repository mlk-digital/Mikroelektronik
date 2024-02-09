// Ein einfaches Programm zum einschalten einer internen LED
void setup() {
  // Initialisiere den eingebauten LED-Pin als Ausgang
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  // Schalte die LED ein (beachte, dass bei aktiv niedrigen Systemen wie dem ESP8266, LOW die LED einschaltet)
  digitalWrite(LED_BUILTIN, LOW);  
}
