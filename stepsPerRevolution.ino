#include <Stepper.h>

const int stepsPerRevolution = 2048; // Definir cuántos pasos da nuestro stepper para dar una vuelta de 360 grados
const int motSpeed = 10; // Velocidad de 10
Stepper myStepper(stepsPerRevolution, 8, 10, 9, 11); // Pasar parámetros
int dt = 1500;

void setup() {
  // Configurar el motor
  myStepper.setSpeed(motSpeed);
}

void loop() {
  // Girar en una dirección
  myStepper.step(stepsPerRevolution);
  delay(dt);

  // Girar en la dirección opuesta
  myStepper.step(-stepsPerRevolution);
  delay(dt);
}

