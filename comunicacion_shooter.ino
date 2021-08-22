#include <Servo.h>
Servo servo1;

int pin = 9;    // pin de conexión PWM al servo
String strCord;
int Cordenada1;

void setup()
{

  Serial.begin(9600);
  //servo1.attach(pin);
}

void loop() {

  if (Serial.available()) {
    strCord = Serial.readString();


    Cordenada1 = strCord.toInt();

    Cordenada1 = map(Cordenada1, 0, 600, 0, 150);

  }
  //
  servo1.write(Cordenada1);
  Serial.println(Cordenada1);
  delay(222);

}
