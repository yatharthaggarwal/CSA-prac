#include<avr/io.h>
#include<util/delay.h>
int main()
{
	char data;
	DDRA = 0xff;
	USARTInit();
	while(1)
	{
	//USARTWriteChar('A');
	//_delay_ms(1000);
	//USARTWriteInt(123,3);
	//_delay_ms(1000);
	data=USARTReadChar();
	if(data=='A')
	{
		PORTA=0x01;
	}
	else
	{
		PORTA=0x00;
	}
	}
}

