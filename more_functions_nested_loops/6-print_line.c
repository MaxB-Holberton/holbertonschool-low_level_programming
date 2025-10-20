#include "main.h"
/**
 * print_line - The Main Function
 * @n: input length
 *
 * Return: the number
 */

void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
			_putchar('_');
	}
	_putchar('\n');
}
