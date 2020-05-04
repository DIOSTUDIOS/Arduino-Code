#include <LedControl.h>
 
int DIN = 12;
int CSS = 10;
int CLK = 11;

LedControl DMS = LedControl(DIN, CLK, CSS, 4);
 
void setup()
{
  for(int DM=0; DM<4; DM++)
  {
    DMS.shutdown(DM, false);       //启动时，MAX72XX处于省电模式
    DMS.setIntensity(DM, 8);       //将亮度设置为最大值
    DMS.clearDisplay(DM);          //清除显示
  }
}

byte park_1[8][4] = {
  {0x7C,0x18,0x7C,0x44},
  {0x42,0x24,0x42,0x48},
  {0x42,0x42,0x42,0x50},
  {0x7C,0x42,0x7C,0x60},
  {0x40,0x7E,0x50,0x50},
  {0x40,0x42,0x48,0x48},
  {0x40,0x42,0x44,0x44},
  {0x40,0x42,0x42,0x42},
};

byte park_2[8][4] = {
  {0x00,0x00,0x00,0x00},
  {0x00,0x00,0x00,0x00},
  {0x00,0x00,0x00,0x00},
  {0x00,0x00,0x00,0x00},
  {0x00,0x00,0x00,0x00},
  {0x00,0x00,0x00,0x00},
  {0x00,0x00,0x00,0x00},
  {0x00,0x00,0x00,0x00},
};

void draw(byte design[8][4])
{
  for(int DM=3; DM>=0; DM--)
  {
    DMS.setRow(DM, 0, design[0][abs(DM-3)]);
    DMS.setRow(DM, 1, design[1][abs(DM-3)]);
    DMS.setRow(DM, 2, design[2][abs(DM-3)]);
    DMS.setRow(DM, 3, design[3][abs(DM-3)]);
    DMS.setRow(DM, 4, design[4][abs(DM-3)]);
    DMS.setRow(DM, 5, design[5][abs(DM-3)]);
    DMS.setRow(DM, 6, design[6][abs(DM-3)]);
    DMS.setRow(DM, 7, design[7][abs(DM-3)]);
  }
}

void loop()
{
  draw(park_1);
  delay(1000);
  
  draw(park_2);
  delay(1000);
}
