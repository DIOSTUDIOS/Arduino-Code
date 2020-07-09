#include <Wire.h>
#include <TM1650.h>

TM1650 tm1650;

String numbers = "0123456789";

void setup() 
{
  Wire.begin(); //Join the bus as master
  
  tm1650.init();
  tm1650.setBrightness(TM1650_MIN_BRIGHT);
//  tm1650.setBrightness(TM1650_MAX_BRIGHT);

  tm1650.displayOn();
}

int i = 0;

void loop() 
{
  for(; i<=numbers.length(); i++)
  {
    tm1650.displayString(numbers[i]);
  }
  
  if(i == numbers.length())
    i=0;
}
