#include <LiquidCrystal.h>
/*
 Circuito:
  pin Rs collegato al pin digitale 12
  pin Ec (enable) collegato al pin digitale 11
  pin D4 collegato al pin digitale 5
  pin D5 collegato al pin digitale 4
  pin D6 collegato al pin digitale 3
  pin D7 collegato al pin digitale 2
  pin R/W collegato al GND
  pin 1 e pin 5 collegati a GND
  pin 2 collegato a +Vcc
  centrale del potenziometro/trimmer da 10KOhm colegato al pin 3 dell'LCD
  pin SX potenziometro/trimmer collegato a +Vcc
  pin DX potenziometro/trimmer collegato a GND
  i pin SX e DX del potenziometro/trimmer possono essere interscambiati
 */


LiquidCrystal lcd(12, 11, 5, 4, 3, 2);


void setup() {
 lcd.begin(16, 2);

 lcd.print("Buona Giornata");

}

void loop() {
  lcd.setCursor(0,1);
  lcd.print(millis()/1000);

}
