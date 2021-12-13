#include "uLCD_4DGL.h"
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>
#include <termios.h>
#include <cstdlib>


int main() {

    uLCD_4DGL uLCD(18);

    // demo hello world
    uLCD.cls();
    uLCD.text_height(2);
    uLCD.text_width(2);
    uLCD.color(GREEN);
    uLCD.lcd_printf("Helloworld");
    sleep(2);

    // demo graphics commands
    uLCD.background_color(BLACK);
    uLCD.cls();
    uLCD.background_color(DGREY);
    uLCD.filled_circle(60, 50, 30, 0xFF00FF);
    uLCD.triangle(120, 100, 40, 40, 10, 100, 0x0000FF);
    uLCD.line(0, 0, 80, 60, 0xFF0000);
    uLCD.filled_rectangle(50, 50, 100, 90, 0x00FF00);
    uLCD.pixel(60, 60, BLACK);
    uLCD.read_pixel(120, 70);
    uLCD.circle(120, 60, 10, BLACK);
    uLCD.set_font(FONT_7X8);
    uLCD.text_mode(TRANSPARENT);
    uLCD.text_bold(ON);
    uLCD.text_char('B', 9, 8, BLACK);
    uLCD.text_char('I',10, 8, BLACK);
    uLCD.text_char('G',11, 8, BLACK);
    uLCD.text_italic(ON);
    uLCD.text_string("This is a test of string", 1, 4, FONT_7X8, WHITE);
    sleep(2);
    
    // loading images from the uSD card
    uLCD.cls();
    uLCD.media_init();
    uLCD.set_sector_address(0x0000, 0x0000);
    uLCD.display_image(0, 0);


}
