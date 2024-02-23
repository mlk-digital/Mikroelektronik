# Node MCU V3 CH340 - ESP 8266

### Pinout
![](https://mischianti.org/wp-content/uploads/2021/10/NodeMcu-V3-CH340-Lua-ESP8266-pinout-mischianti-low-resolution.jpg)

### So richtest du die Boardverwaltung für einen ESP8266 in der Arduino IDE ein

#### Schritt 1: Mach die Arduino IDE startklar

Check erst, ob du die Arduino IDE auf deinem Computer installiert hast. Wenn nicht, hol dir die neueste Version von der offiziellen Webseite und installiere sie.

#### Schritt 2: Füge die URL für den ESP8266 hinzu

1. **Öffne die Arduino IDE.**
2. Geh oben im Menü auf `Datei` > `Voreinstellungen` (oder drück auf Linux und Windows `Ctrl` + `,` und auf macOS `Cmd` + `,`).
3. Jetzt siehst du ein Fenster namens "Voreinstellungen". Da gibt's ein Feld, das heißt `Zusätzliche Boardverwalter URLs`. Hier kopierst du die URL für die ESP8266 Boardverwaltung rein: `http://arduino.esp8266.com/stable/package_esp8266com_index.json`.
4. Falls da schon andere URLs stehen, einfach mit einem Komma dazwischen die neue URL einfügen.
5. Klick auf `OK`, um deine Änderungen zu speichern und das Fenster zu schließen.

#### Schritt 3: Installier die ESP8266 Boardverwaltung

1. Klick oben im Menü auf `Werkzeuge` > `Board` > `Boardverwaltung...`. Ein neues Fenster geht auf.
2. Tippe im Suchfeld `ESP8266` ein und drück Enter. Warte kurz, bis die Suche fertig ist.
3. Du solltest jetzt einen Eintrag sehen, der `esp8266 by ESP8266 Community` heißt. Klick darauf.
4. Jetzt klick auf die Schaltfläche `Installieren`. Das kann ein paar Minuten dauern, also hab ein bisschen Geduld.

#### Schritt 4: Wähl dein ESP8266 Board aus

1. Nachdem die Installation fertig ist, geh wieder über `Werkzeuge` > `Board`. Scroll runter bis zu den `ESP8266 Boards` (ganz unten in der Liste).
2. Hier suchst du dir dein ESP8266-Board aus, zum Beispiel den ESP8266 NodeMCU oder den WeMos D1 Mini.

#### Schritt 5: Wähl den richtigen Port

1. Steck deinen ESP8266 über USB an deinen Computer.
2. Warte kurz, bis dein Computer den Mikrocontroller erkannt hat (beim ersten Mal kann das ein bisschen dauern).
3. Jetzt geh nochmal zu `Werkzeuge` > `Port` und wähl den Port aus, an dem dein ESP8266 hängt. Auf Linux und macOS siehst du was wie `/dev/ttyUSB0` oder `/dev/cu.SLAB_USBtoUART`, und auf Windows wird es als `COM3`, `COM4` oder so ähnlich angezeigt.

Jetzt bist du bereit, deine ersten Programme (Sketches) zu schreiben und auf den ESP8266 zu laden.
