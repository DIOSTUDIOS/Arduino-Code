#include <TM1650.h>
#include <Wire.h>
#include <EduIntro.h>

DHT11 dht11(D8);
TM1650 tm1650(2);

int c = 0;
int h = 0;

char C = "12";
char H = "34";

void setup()
{
  Wire.begin();

  tm1650.init();
  tm1650.displayOn();
  tm1650.clear();

  Serial.begin(9600);
}

void loop()
{
  dht11.update();

  c = dht11.readCelsius();
  h = dht11.readHumidity();

  Serial.print((c/10)%10 + (c%10));
  Serial.print("\t\t");
  Serial.println(h);

  tm1650.displayString(C);
  
  delay(1000);
}
