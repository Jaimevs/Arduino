#include <Servo.h>
#include <LiquidCrystal.h>

Servo s1;
LiquidCrystal lcd(2, 3, 4, 5, 6, 7);

int grados = 0; // Posición inicial
int btn = 12;
int btn2 = 11;

void setup() {
  lcd.begin(16, 2);
  s1.attach(13); // Cambia el pin del servo si es necesario
  Serial.begin(9600);
  pinMode(btn, INPUT);
  pinMode(btn2, INPUT);
}

void loop() {
  int estado = digitalRead(btn);
  int estado2 = digitalRead(btn2);
  delay(1);

  if (estado == HIGH) {
    grados += 30;
    if (grados > 180) {
      grados = grados % 180;
    }
    s1.write(grados);
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("Giro: ");
    lcd.setCursor(0, 1);
    lcd.print(grados);
    lcd.print(" grados");
    delay(500);
  }

  if (estado2 == HIGH) {
    grados -= 30;
    if (grados < 0) {
      grados = 180 - (-grados % 180);
    }
    s1.write(grados);
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("Giro: ");
    lcd.setCursor(0, 1);
    lcd.print(grados);
    lcd.print(" grados");
    delay(500);
  }
}
