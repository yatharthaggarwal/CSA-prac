#include<avr/io.h>
#include<util/delay.h>
int main()
{
	DDRA=0xff;
	DDRC=0xff;
	DDRD=0xff;
	int red[8],yellow[8],green[8];
	red = {1,0,0,0,0,0,0,0};
	yellow = {0,1,0,0,0,0,0,0};
	green = {0,0,1,0,0,0,0,0};


	while(1)
	{
		PORTC=0bred;
		_delay_ms(1000);
						
		PORTC=0b00111110;
		_delay_ms(1000);
	
		PORTC=0b00111100;
		_delay_ms(1000);
		
		PORTC=0b00111000;
		_delay_ms(1000);

	}
} 
