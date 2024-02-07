#include <LiquidCrystal.h> // Incluye la librería LiquidCrystal para poder utilizar la pantalla LCD.

int VO = 3; // Define el pin para controlar la intensidad de la retroiluminación de la pantalla.

int RS = 4; // Define el pin RS del LCD para la comunicación.
int E = 5; // Define el pin de habilitación E del LCD para la comunicación.
int D4 = 6; // Define el pin D4 del LCD para la comunicación.
int D5 = 7; // Define el pin D5 del LCD para la comunicación.
int D6 = 8; // Define el pin D6 del LCD para la comunicación.
int D7 = 9; // Define el pin D7 del LCD para la comunicación.

LiquidCrystal lcd(RS, E, D4, D5, D6, D7); // Crea una instancia de la pantalla LCD.

void setup() {
  analogWrite(VO, 50); // Ajusta la intensidad de la retroiluminación de la pantalla al 50%.

  lcd.begin(16, 2); // Inicializa la pantalla LCD con 16 columnas y 2 filas.
  lcd.setCursor(0, 0); // Establece el cursor en la primera fila y la primera columna.
  lcd.print("Hola Mundo!"); // Imprime el texto "Hola Mundo! Jaime" en la primera fila.

  lcd.setCursor(0, 1); // Establece el cursor en la segunda fila y la primera columna.
  lcd.print("Jaime Vazquez S"); // Imprime el texto "el Mas Guapo" en la segunda fila.
}

void loop() {
  // Aquí puedes escribir el código para el bucle principal del programa si es necesario.
}
