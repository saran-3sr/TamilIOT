#include<TM1637Display.h>

#define CLK 3
#define DIO 4 

TM1637Display display = TM1637Display(CLK,DIO);

const uint8_t done[]={
    SEG_B | SEG_C | SEG_D | SEG_E,
    SEG_B | SEG_C | SEG_D | SEG_E,
    SEG_B | SEG_C | SEG_D | SEG_E,
    SEG_B | SEG_C | SEG_D | SEG_E,
};

void setup()
{
    
}

void loop()
{
    // setSegments();
    // showNumberDec();
    // setBrightness();
    // clear();
    
    display.setBrightness(5);
    display.setSegments(done);
    delay(3000);
    display.clear();
    display.showNumberDec(10);
    delay(1000);
    display.clear();
}
