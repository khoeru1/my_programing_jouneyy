// KHOERUL RIZQY
// XI TAV 1

#include "DHT.h"
#define DHTPIN 32     
#define DHTTYPE DHT11   // DHT 21 (AM2301)
DHT dht(DHTPIN, DHTTYPE);
void setup() {
  Serial.begin(9600);
  dht.begin();}
void loop() {
  float humidity = dht.readHumidity();
  float temperature = dht.readTemperature();
  if (isnan(humidity) || isnan(temperature)) {
    Serial.println("pembacaan gagal!!!");
  }else{
  Serial.print("kelembaban: ");
  Serial.print(humidity);
  Serial.println("%");
  Serial.print("suhu: ");
  Serial.print(temperature);
  Serial.println("°C ");}
  delay(2000);}