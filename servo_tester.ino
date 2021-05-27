#include <Servo.h>

int pinoPwm = 3;

Servo servo;

int anguloMaximo = 180;
int anguloMinimo = 0;
int anguloParado = 90;

void setup() {  
  servo.attach(pinoPwm);
}

void loop() {  
  servo.write(anguloMaximo);
  delay(2000);
  servo.write(anguloParado);
  delay(2000);
  servo.write(anguloMinimo);
  delay(2000);
  servo.write(anguloParado);
  delay(2000); 
}
