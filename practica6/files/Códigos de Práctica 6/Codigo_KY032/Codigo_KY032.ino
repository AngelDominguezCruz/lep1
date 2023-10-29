#define led 0
#define sensor 1
int valor;
 
void setup(){  
  pinMode(led, OUTPUT);
  pinMode(sensor, INPUT);
}
 
void loop(){
  valor = digitalRead(sensor);
  if(valor == LOW){
  digitalWrite (led, HIGH);
 }

 else {
  digitalWrite (led, LOW);
 }
}