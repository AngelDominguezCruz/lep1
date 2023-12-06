#define sensor A1			// A1
#define led 0			// led en pin 0
int valor;			//

void setup(){
  pinMode(led, OUTPUT);
}


void loop(){
  valor = analogRead(sensor);
  if (valor < 500){		//valor bajo=oscuridad
    digitalWrite(led, HIGH);
    delay(500);
  }
    digitalWrite(led, LOW);
}