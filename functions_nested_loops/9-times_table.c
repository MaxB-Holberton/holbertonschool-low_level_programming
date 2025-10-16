#include "main.h"
/**
 * times_table - prints the times table upto 9
 * @void: no input 
 *
 * Return: no return
 */
void times_table(void) 
{
	int i;
	int j;
	int n;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			n = j*i;
			if (n > 9)
			{	
				_putchar(',');
				_putchar(' ');
				_putchar('0'+ (n / 10));
				_putchar('0' + (n % 10));
			}
			else if(n > 0 && n < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + n);
			}
			else
			{
				_putchar('0');
			}
		}
		_putchar('\n');
	}
}
