#include "main.h"
/**
 * print_sign - prints to CLI the sign of the integer
 * @n: the input 
 *
 * Return: 1 if letter, else 0
 *
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return(0);
	}
}
