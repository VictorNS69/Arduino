void setup() {
  // put your setup code here, to run once:
  //Inicializo los pins digitales 11,10,9 como salidas
  pinMode(11,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(9,OUTPUT);
  }

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(11,HIGH); //Encendemos el pin 11 (verde)
  delay(2000); //delay de 2s
  digitalWrite(11,LOW); //Apagamos el pin 11 (verde)
  digitalWrite(10,HIGH); //Encendemos el pin 10 (amarillo)
  delay(1000); //delay de 1s
  digitalWrite(10,LOW); //Apagamos el pin 10 (amarillo)
  digitalWrite(9,HIGH); //Encendemos el pin 9 (rojo)
  delay(2000); //delay de 2s
  digitalWrite(9,LOW); //Apagamos el pin 9 (rojo)
}
