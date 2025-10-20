#include "main.h"
/**
 * print_triangle - The Main Function
 * @n: size of triangle
 *
 * Return: the number
 */

void print_triangle(int n)
{
	int i;
	int spaces;
	int hashes;

	if (n < 1)
	{
		_putchar('\n');
		return;
	}

	for (i = 0; i < n; i++)
	{
		for(spaces = n - 1; i < spaces; spaces--)
		{
			_putchar(' ');
		}
		for(hashes = 0; hashes <= i; hashes++)
		{
			_putchar('#');
		}
		_putchar('\n');

	}
}
