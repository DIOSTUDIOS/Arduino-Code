#include <TM1650.h>
#include <Wire.h>
#include <EduIntro.h>

DHT11 dht11(D8);
TM1650 tm1650(2);

char C[2] = "";
int c = 0;

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
//  h = dht11.readHumidity();

//  C[0] = (c - c%10)/10;
//  C[1] = c%10;
  
  Serial.println(c);
  delay(1000);
}
