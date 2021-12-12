#include "uLCD_4DGL.h"
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>
#include <termios.h>
#include <cstdlib>


int main() {

	uLCD_4DGL uLCD(18);
	uLCD.cls();
	uLCD.color(GREEN);
	uLCD.text_height(2);
	uLCD.text_width(2);
	uLCD.locate(3,3);
	float f = 5.1;
	// char *q = (char*)malloc(100);
	// sprintf(q, "test Yue Teng & Huang Yao %f", d);
	// uLCD.puts(q);
	// free(q);
	uLCD.lcd_printf("test Yue Teng & Huang Yao %f", f);
	return 0;
}
