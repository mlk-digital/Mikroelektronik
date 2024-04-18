#include <ESP8266WiFi.h> // Inkludiere die ESP8266 WiFi Bibliothek

void setup() {
  Serial.begin(115200); // Starte die serielle Kommunikation mit 115200 Baud
  delay(10); // Kurze Verzögerung, um sicherzustellen, dass die serielle Kommunikation startet

  // Gib eine Startmeldung im seriellen Monitor aus
  Serial.println("\nESP8266 MAC Address Display");

  // Rufe die WiFi.macAddress() Funktion auf, um die MAC-Adresse zu erhalten
  uint8_t mac[WL_MAC_ADDR_LENGTH];
  WiFi.macAddress(mac);

  // Formatiere und gib die MAC-Adresse als eine Zeichenkette im seriellen Monitor aus
  Serial.print("MAC Address: ");
  for (int i = 0; i < WL_MAC_ADDR_LENGTH; i++) {
    if (mac[i] < 16) {
      Serial.print("0");
    }
    Serial.print(mac[i], HEX);
    if (i < WL_MAC_ADDR_LENGTH - 1) {
      Serial.print(":");
    }
  }
  Serial.println(); // Füge eine neue Zeile am Ende hinzu
}

void loop() {
  // Hier könnte weiterer Code eingefügt werden, der wiederholt ausgeführt werden soll.
  // Für dieses Beispiel ist der loop leer, da wir nur die MAC-Adresse einmal anzeigen wollen.
}
