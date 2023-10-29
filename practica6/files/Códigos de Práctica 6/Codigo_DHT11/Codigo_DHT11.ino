#include "DHT.h"

#define DHTPIN 8
#define DHTTYPE DHT11

  float humedad;
  float temperatura;
  float indice;

DHT dht(DHTPIN, DHTTYPE);

void setup(){
  Serial.begin(9600);
  dht.begin();
}

void loop(){
  delay(1000);
  humedad=dht.readHumidity();
  temperatura=dht.readTemperature();

  if(isnan(humedad) || isnan(temperatura)){
    Serial.println("Error de lectura del sensor");
    return;
  }

  indice=dht.computeHeatIndex(temperatura,humedad,false);

  Serial.print("% Humedad: ");
  Serial.print(humedad);
  Serial.print("Temperatura: ");
  Serial.print(temperatura);
  Serial.println("°C");

}