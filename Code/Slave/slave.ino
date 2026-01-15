#include <Servo.h>

unsigned int pos0 = 172; // ancho de pulso en cuentas para posicion 0°
unsigned int pos180 = 565; // ancho de pulso en cuentas para la posicion 180°

Servo myservo1;
Servo myservo2 ;
Servo myservo3 ;

int BUZZER = 5;
//Declaracion de variables
int pos = 90;    // Variable para el control de la posicion del servo
int pos2 = 90;


void setup() {
  //Inciacion de salidas digitales
  Serial.begin(9600);
  myservo1.attach(A0);
  myservo2.attach(A1);
  myservo3.attach(A2);
  //Se ponen en alto todas las salidas


  //Iniciacion del puerto serial para el Bluetooth

  delay(400);

}

void loop() {
  //Espera de dato entrante del Bluetooth

  while (Serial.available() > 0) {
    pos = Serial.parseInt();
    Serial.println(pos);
    if(pos>1000 and pos<2000){
      pos=pos-1000;
      myservo1.write(pos);
      delay(30);
    }
    else if(pos>2000 and pos<3000){
      pos=pos-2000;
      myservo2.write(pos);
      delay(30);
    }

    else if(pos>3000 and pos<4000){
      pos=pos-3000;
      myservo3.write(pos);
      delay(30);
    }
    
  }
}
