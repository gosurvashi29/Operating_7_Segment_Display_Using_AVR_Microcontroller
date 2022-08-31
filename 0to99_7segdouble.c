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
	int i;
	DDRD=255;
	DDRC=255;
  while (1)
  {
  
        for (i=0;i<=50;i++)//0
        {
        
		PORTD=0b00000001;
		PORTC=0b1000000;
		_delay_ms(10);
		PORTD=0b00000010;
		PORTC=0b1000000;
		_delay_ms(10);
    }
	PORTD=0b0000000;
	 for (i=0;i<=50;i++)//1
	 {
		 
		 PORTD=0b00000001;
		 PORTC=0b1000000;
		 _delay_ms(10);
		 PORTD=0b00000010;
		 PORTC=~0b0000110;
		 _delay_ms(10);
	 }
PORTD=0b0000000;
 for (i=0;i<=50;i++)//2
 {
	 
	 PORTD=0b00000001;
	 PORTC=0b1000000;
	 _delay_ms(10);
	 PORTD=0b00000010;
	 PORTC=~0b1011011;
	 _delay_ms(10);
 }
 PORTD=0b0000000;
  for (i=0;i<=50;i++)//3
  {
	  
	  PORTD=0b00000001;
	  PORTC=0b1000000;
	  _delay_ms(10);
	  PORTD=0b00000010;
	  PORTC=~0b1001111;
	  _delay_ms(10);
  }
  PORTD=0b0000000;
  for (i=0;i<=50;i++)//4
  {
	  
	  PORTD=0b00000001;
	  PORTC=0b1000000;
	  _delay_ms(10);
	  PORTD=0b00000010;
	  PORTC=~0b1100110;
	  _delay_ms(10);
  }
  PORTD=0b0000000;

 for (i=0;i<=50;i++)//5
 {
	 
	 PORTD=0b00000001;
	 PORTC=0b1000000;
	 _delay_ms(10);
	 PORTD=0b00000010;
	 PORTC=~0b1101101;
	 _delay_ms(10);
 }
 PORTD=0b0000000;
for (i=0;i<=50;i++)//6
{
	
	PORTD=0b00000001;
	PORTC=0b1000000;
	_delay_ms(10);
	PORTD=0b00000010;
	PORTC=~0b1111101;
	_delay_ms(10);
}
PORTD=0b0000000;
for (i=0;i<=50;i++)//7
{
	
	PORTD=0b00000001;
	PORTC=0b1000000;
	_delay_ms(10);
	PORTD=0b00000010;
	PORTC=~0b0000111;
	_delay_ms(10);
}
PORTD=0b0000000;
for (i=0;i<=50;i++)//8
{
	
	PORTD=0b00000001;
	PORTC=0b1000000;
	_delay_ms(10);
	PORTD=0b00000010;
	PORTC=~0b1111111;
	_delay_ms(10);
}
PORTD=0b0000000;

for (i=0;i<=50;i++)//9
{
	
	PORTD=0b00000001;
	PORTC=0b1000000;
	_delay_ms(10);
	PORTD=0b00000010;
	PORTC=~0b1100111;
	_delay_ms(10);
}
PORTD=0b0000000;

}
}