/*variables y pines
 * D1 = trigger
 * D2 = echo
 * D3 = servo
 * D4 = BIB (motor B)
 * D5 = BIA (motor B)
 * D6 = AIB (motor A)
 * D7 = AIA (motor B)
*/

/*Funciones
  medir_distancia
  adelante
  atras
  izquierda
  derecha
  servo
  detener
 */
double distancia=0, duracion=0;
byte velocidad = 100;

double medir_distancia();
void adelante();
void atras();
void izquierda();
void derecha();
void servo();
void detener();

void setup() {
  // put your setup code here, to run once:
  pinMode(D4, OUTPUT);
  pinMode(D5, OUTPUT);
  pinMode(D6, OUTPUT);
  pinMode(D7, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

}

double medir_distancia(){
  digitalWrite(D1, HIGH);
  delayMicroseconds(10);
  digitalWrite(D1,LOW);
  duracion = pulseIn(D2,HIGH);
  distancia = duracion/59;
  return distancia;
}
void adelante(){
  analogWrite(D5, 0);
  analogWrite(D4,velocidad);
  analogWrite(D7,0);
  analogWrite(D6, velocidad);
}
void detener(){
  analogWrite(D5,0);
  analogWrite(D4,0);
  analogWrite(D7,0);
  analogWrite(D6,0);
}
