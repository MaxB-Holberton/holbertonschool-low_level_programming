#include "main.h"
/**
 * print_rev - reverse the string
 * @str: the string to write
 *
 * Return: void
 */
void print_rev(char *str)
{
	int i = 1;

	while (*str != '\0')
	{
		str++;
		i++;
	}
	while (i != 0)
	{
		_putchar(*str);
		str--;
		i--;
	}
	_putchar('\n');
}
