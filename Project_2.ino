#include <LiquidCrystal.h>
#include "DHT.h"
#define DHTPIN 4     // Digital pin connected to the DHT sensor
#define DHTTYPE DHT11   // DHT 11

DHT dht(DHTPIN, DHTTYPE);
LiquidCrystal lcd(19, 23, 18, 17, 16, 15);

void setup() {
  Serial.begin(9600);
  Serial.println(F("DHTxx test!"));
  // set up the LDC's number of columns and rows:
  lcd.begin(16, 2);
  // Print a message to the LDC
  dht.begin();
}

void loop() {

  // print the number of second since reset:
  delay(2000);

  // Reading temperature or humidity takes about 250 milliseconds!
  // Sensor readings may also be up to 2 seconds 'old' (its a very slow sensor)
  float h = dht.readHumidity();
  // Read temperature as Celsius (the default)
  float t = dht.readTemperature();
  // Read temperature as Fahrenheit (isFahrenheit = true)
  float f = dht.readTemperature(true);

  // Check if any reads failed and exit early (to try again).
  if (isnan(h) || isnan(t) || isnan(f)) {
    Serial.println(F("Failed to read from DHT sensor!"));
    return;
  }

  // Compute heat index in Fahrenheit (the default)
  float hif = dht.computeHeatIndex(f, h);
  // Compute heat index in Celsius (isFahreheit = false)
  float hic = dht.computeHeatIndex(t, h, false);
  // (note: line 1 is the second row, since counting begins with 0)
  lcd.setCursor(0, 0);
  lcd.print(F("Humidity: "));
  lcd.print(h);
  lcd.print(F("%"));
  lcd.setCursor(0,1);
  lcd.print(F("Temp: "));
  lcd.print(t);
  lcd.print(F(" C"));
}
