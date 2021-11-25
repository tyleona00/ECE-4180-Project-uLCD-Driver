#include "uLCD_4DGL.h"
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>
#include <termios.h>


int main() {

	uLCD_4DGL uLCD(18);
	uLCD.cls();
	uLCD.color(GREEN);
	uLCD.text_height(2);
	uLCD.text_width(2);
	char *q = "test Yue Teng & Huang Yao";
	uLCD.puts(q);
	return 0;
}
