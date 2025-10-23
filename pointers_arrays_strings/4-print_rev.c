#include "main.h"
/**
 * print_rev - reverse the string
 * @str: the string to write
 *
 * Return: void
 */
void print_rev(char *str)
{
	int i = 0;

	while (*str != '\0')
	{
		str++;
		i++;
	}
	while (i != 0)
	{
		str--;
		_putchar(*str);
		i--;
	}
	_putchar('\n');
}
