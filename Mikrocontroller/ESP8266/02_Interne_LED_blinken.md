# 02 Interne LED blinken

Der bereitgestellte Code ist ein einfaches Beispiel für ein Programm, das eine interne LED blinken lässt. 

> [!NOTE]
> Das Programm demonstriert ein grundlegendes Prinzip der Mikrocontroller-Programmierung: 
> Das zyklische Ausführen von Code, um Geräte wie LEDs zu steuern.

Das Programm besteht aus zwei Hauptteilen: der `setup`-Funktion und der `loop`-Funktion.

### `setup` Funktion
```cpp
void setup() {
  pinMode(LED_BUILTIN, OUTPUT); 
}
```
Diese Funktion wird einmal beim Start des Programms aufgerufen. 

Sie dient dazu, den Mikrocontroller zu konfigurieren. 

Hier wird der eingebaute LED-Pin (`LED_BUILTIN`) als Ausgang (`OUTPUT`) festgelegt. 

Das bedeutet, dass dieser Pin Strom liefern kann, um die LED zu steuern.

### `loop` Funktion
```cpp
void loop() {
  digitalWrite(LED_BUILTIN, LOW);  
  delay(1000);                      
  digitalWrite(LED_BUILTIN, HIGH); 
  delay(2000);                      
}
```
Die `loop`-Funktion wird nach `setup` unendlich oft wiederholt. 

Der Code innerhalb dieser Funktion lässt die LED blinken. 

Zuerst wird die LED eingeschaltet, indem `digitalWrite` mit dem Parameter `LOW` aufgerufen wird. 

> [!IMPORTANT]
> Es ist wichtig zu verstehen, dass `LOW` hier bedeutet, dass der Pin geerdet ist, was bei einer aktiven Niedrig-Konfiguration die LED einschaltet. 

Nach einer Verzögerung von einer Sekunde (`delay(1000)`) wird die LED ausgeschaltet, indem der Pin auf `HIGH` gesetzt wird, was bedeutet, dass der Pin auf eine hohe Spannungsebene gesetzt wird. 

Danach wartet das Programm zwei Sekunden, bevor der Vorgang wiederholt wird.

> [!IMPORTANT]
> Die Verwendung von `delay` für die Timing-Kontrolle ist einfach, hat aber den Nachteil, dass der Mikrocontroller während der Verzögerung keine anderen Aufgaben ausführen kann.
