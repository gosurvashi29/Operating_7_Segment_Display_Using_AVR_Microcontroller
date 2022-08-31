# define F_CPU 1000000
#include <avr/io.h>
#include <util/delay.h>
int main()
{
	DDRC=255;
	DDRD=255;
	while (1)
	{
		PORTC=0b0111111;
		PORTD=~0b0111111;
		_delay_ms(1000);
		PORTC=0b0000110;
		PORTD=~0b0000110;
		_delay_ms(1000);
		PORTC=0b1011011;
		PORTD=~0b1011011;
		_delay_ms(1000);
		PORTC=0b1001111;
		PORTD=~0b1001111;
		_delay_ms(1000);
		PORTC=0b1100110;
		PORTD=~0b1100110;
		_delay_ms(1000);
		PORTC=0b1101101;
		PORTD=~0b1101101;
		_delay_ms(1000);
		PORTC=0b1111101;
		PORTD=~0b1111101;
		_delay_ms(1000);
		PORTC=0b0000111;
		PORTD=~0b0000111;
		_delay_ms(1000);
		PORTC=0b1111111;
		PORTD=~0b1111111;
		_delay_ms(1000);
	}
}	