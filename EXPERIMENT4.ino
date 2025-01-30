#include <LiquidCrystal.h>

#include "DHT.h"
LiquidCrystal lcd(8, 9, 10, 11, 12, 13);
#define DHT1PIN 2 
#define DHT1TYPE DHT11   // DHT 11
DHT dht1(DHT1PIN, DHT1TYPE);
void setup() {
  // put your setup code here, to run once:
lcd.begin(16, 2);
dht1.begin();
}

void loop() {
  // put your main code here, to run repeatedly:
 float  sensorOneTemperature = dht1.readTemperature();
 lcd.setCursor(0,0);
 lcd.print(sensorOneTemperature);
 lcd.print((char)223);
 lcd.print("C");
 lcd.print(" ");

 float humidity = dht1.readHumidity();
 lcd.setCursor(10,0);
 lcd.print(humidity);
 lcd.print((char)223);
 lcd.print("% ");
 
}
