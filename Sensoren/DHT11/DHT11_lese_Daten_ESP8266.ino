#include "DHT.h"

// Sketch > Bibliothek einbinden > Bibliotheken verwalten....
// Suche nach "Adafruit Unified Sensor" > installieren
// Suchen nach "DHT sensor library" von Adafruit > installieren

#define DHTPIN D4                    // Der Pin, an dem der Sensor angeschlossen ist
#define DHTTYPE DHT11               // DHT 11
#define RAUMNUMMER "101"            // Die Raumnummer als Beispiel
#define SENSORNAME "DHT11-03A02"    // Beispielhafte Seriennummer als Sensornamen

DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(9600);
  Serial.println("DHT11 Testprogramm");
  dht.begin();
}

void loop() {
  // Warte ein wenig zwischen den Messungen.
  delay(2000); // 2 Sekunden

  // Lesen der Temperatur und Feuchtigkeit dauert etwa 250 Millisekunden!
  float temp = dht.readTemperature();
  float hum = dht.readHumidity();

  // Überprüfe, ob die Messungen fehlgeschlagen sind, und wenn ja, beende die Ausführung.
  if (isnan(temp) || isnan(hum)) {
    Serial.println("Fehler beim Lesen des DHT-Sensors!");
    return;
  }

  // Ausgabe der Raumnummer und des Sensornamens zusammen mit Temperatur und Luftfeuchtigkeit
  Serial.print("Raum Nr. ");
  Serial.print(RAUMNUMMER);
  Serial.print(" - Sensor ");
  Serial.print(SENSORNAME);
  Serial.print(" - Aktuelle Temperatur: ");
  Serial.print(temp);
  Serial.print(" °C, ");
  Serial.print("Aktuelle Luftfeuchtigkeit: ");
  Serial.print(hum);
  Serial.println(" %");
}