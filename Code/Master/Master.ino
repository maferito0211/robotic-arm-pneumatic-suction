#include <SoftwareSerial.h>
//Codigo para el maestro
int potenciometro; //Variable para guardar el valor analogico
int pos = 0; //variable de posicion en grados
int val1a = 0;
int val1 = 1;

int val3a = 0;
int val3 = 1;

//pot2
int potenciometro2; //Variable para guardar el valor analogico
int pos2 = 0;
int val2a = 0;
int val2 = 1;
int potenciometro3;


void setup() {
  //Rutina de arranque

  //Iniciacion del puerto serial para el Bluetooth

  Serial.begin(9600);



}

void loop() {

  //Serial1.print('a');
  //Lectura del pin analogico y envio de datos

  Serial.print("*"); //Se envia un primer dato para activar el receptor


  potenciometro = analogRead(A0); // Se lee el valor del potenciometro con el ADC del arduino
  val1 = map(potenciometro, 0, 1023, 2, 178);
  if (val1 < val1a - 3 or val1 > val1a + 3) {
    if (potenciometro < 445) {

      int val1e = val1 + 1000;
      Serial.print(String(val1e));
      val1a = val1;
      delay(100);
    }
  }


  //pot2
  potenciometro2 = analogRead(A1); // Se lee el valor del potenciometro con el ADC del arduino
  val2 = map(potenciometro2, 0, 1023, 2, 178);
  if (val2 < val2a - 3 or val2 > val2a + 3) {
    if (potenciometro2 < 445) {

      int val2e = val2 + 2000;
      Serial.print(String(val2e));
      val2a = val2;
      delay(30);
    }
  }

  potenciometro3 = analogRead(A2); // Se lee el valor del potenciometro con el ADC del arduino
  val3 = map(potenciometro3, 0, 1023, 2, 178);
  if (val3 < val3a - 3 or val3 > val3a + 3) {
    
      int val3e = val3 + 3000;
      Serial.print(String(val3e));
      val3a = val3;
      delay(30);
  }

}
