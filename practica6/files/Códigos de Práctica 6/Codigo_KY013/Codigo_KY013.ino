int Sensor = A0;
int Vo;
float R1 = 10000;
float logR2, R2, K, C;
float c1 = 0.001129148, c2 = 0.000234125, c3 = 0.0000000876741;
void setup() {
  Serial.begin(9600);
}
void loop() {
  Vo = analogRead(Sensor);
  R2 = R1 * (1023.0 / (float)Vo - 1.0);
  logR2 = log(R2);
  K = (1.0 / (c1 + c2*logR2 + c3*logR2*logR2*logR2));
  C = K - 273.15;
  Serial.print("Temperatura: "); 
  Serial.print(C);
  Serial.println(" °C"); 
  delay(500);
}