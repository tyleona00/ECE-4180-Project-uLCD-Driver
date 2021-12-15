#include "uLCD_4DGL.h"
#include <unistd.h>

uLCD_4DGL uLCD(18);

int main() {

    // demo hello world
    uLCD.cls();
    uLCD.text_height(2);
    uLCD.text_width(2);
    uLCD.color(GREEN);
    uLCD.lcd_printf("Helloworld");

}