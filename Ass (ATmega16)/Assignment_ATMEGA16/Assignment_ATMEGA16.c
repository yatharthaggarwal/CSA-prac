
#include <avr/io.h>
#include <avr/interrupt.h>
#include <util/delay.h>
#include "lcd.h"

int main()
{
	
 DDRA = 0x00;
 DDRD = 0b11111111;
 DDRC = DDRC | 0xF7; 
 PORTC = PORTC & 0x80;

 lcd_init();
 lcd_cursor(1,1);
 
 while(1)
 {
	if(PINA==0b00000000)
	{
 		PORTD=0b10100000;
	
 		lcd_init();
		lcd_string("Clockwise");
	}
	if(PINA==0b00000001)
	{
		PORTD=0b11000000;
		
 		lcd_init();
		lcd_string("Anti-clockwise");
	}

 }
 
}  
