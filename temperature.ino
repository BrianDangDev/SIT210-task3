#include <Grove_Temperature_And_Humidity_Sensor.h>
#define DHTTYPE  DHT11
#define DHTPIN 	D6  // set pin

DHT dht(DHTPIN);

void setup() {
 
	dht.begin();
	
}
void loop() {
 
  float t = dht.getTempCelcius(); 
 
   String temp = (String)t;
	Particle.publish("temp", String(temp), PRIVATE);
	delay(30000);fftt
}
