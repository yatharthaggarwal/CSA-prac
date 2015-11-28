
#include <avr/io.h>
#include <avr/interrupt.h>
#include <util/delay.h>
#include "lcd.h"
#define F_CPU 12000000UL
int main()
{

 DDRC = DDRC | 0xF7; 
 PORTC = PORTC & 0x80;

 lcd_init();
 lcd_cursor(1,1);
 while(1)
 {
 	lcd_string("hello");
	_delay_ms(2000);

 	lcd_string("hell");
	_delay_ms(2000);
 }
}  
