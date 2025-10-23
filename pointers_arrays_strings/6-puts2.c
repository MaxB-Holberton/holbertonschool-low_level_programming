#include "main.h"
/**
 * puts2 - reverse the string
 * @str: the string to write
 *
 * Return: void
 */
void puts2(char *str)
{
	int sign = 1;

	while (*str != '\0')
	{
		if (sign == 1)
		{
			_putchar(*str);
			sign = 0;
		}
		else
		{
			sign = 1;
		}
		str ++;
	}
	_putchar('\n');
}
