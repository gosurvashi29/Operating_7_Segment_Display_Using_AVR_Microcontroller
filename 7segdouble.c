/*
 * _7segdouble.c
 *
 * Created: 05-08-2014 18:47:04
 *  Author: Urvashi
 */ 
# define F_CPU 1000000
#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
	DDRD=255;
	DDRC=255;
    while(1)
    {
        PORTD=0b00000001;
		PORTC=0b0000000;
		_delay_ms(10);
		PORTD=0b00000010;
		PORTC=0b0100100;
		_delay_ms(10);
    }
}