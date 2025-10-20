#include "main.h"
/**
 * print_square - The Main Function
 * @n: size of square
 *
 * Return: the number
 */

void print_square(int n)
{
	int i;
	int j;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
				_putchar('#');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
