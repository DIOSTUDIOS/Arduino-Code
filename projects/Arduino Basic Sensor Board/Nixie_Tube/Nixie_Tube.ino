#include <Wire.h>
#include <TM1650.h>

TM1650 tm1650;

void setup() 
{
  Wire.begin(); //Join the bus as master
  
  tm1650.init();
  tm1650.setBrightness(TM1650_MIN_BRIGHT);

  tm1650.displayOn();
  tm1650.clear();
}

int i = 0;
String string = "0";

void loop() 
{
  string += i;
  
  tm1650.displayString(string);
  delay(1000);

  if(i < 10)
    i++;
  else
    i = 0;
}
