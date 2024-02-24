/*
 Interne LED blinken lassen
*/

// Die Setup-Funktion wird einmal ausgeführt, wenn du den Reset-Knopf drückst oder das Board mit Strom versorgst.
void setup() {
  // Initialisiere den digitalen Pin LED_BUILTIN als Ausgang.
  pinMode(LED_BUILTIN, OUTPUT);
}

// Die Loop-Funktion wird immer wieder ausgeführt, für immer.
void loop() {
  digitalWrite(LED_BUILTIN, HIGH);   // Schalte die LED ein (HIGH bedeutet, dass die Spannung hoch ist).
  delay(1000);                       // Warte eine Sekunde.
  digitalWrite(LED_BUILTIN, LOW);    // Schalte die LED aus, indem du die Spannung auf LOW setzt.
  delay(1000);                       // Warte eine Sekunde.
}
