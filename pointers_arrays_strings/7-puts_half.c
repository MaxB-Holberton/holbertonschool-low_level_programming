#include "main.h"
/**
 * puts_half - reverse the string
 * @str: the string to write
 *
 * Return: void
 */
void puts_half(char *str)
{
	char *copy = str;
	int i = 0;
	int n;

	while (*copy != '\0')
	{
		copy++;
		i++;
	}
	if ((i % 2) == 0)
	{
		n = i / 2;
		i = 0;
	}
	else
	{
		n = (i + 1) / 2;
		i = 0;
	}
	while (*str != '\0')
	{
		if (i >= n)
			_putchar(*str);
		str++;
		i++;

	}
	_putchar('\n');
}
