#include "main.h"
/**
 * _puts_recursion - returns point to a character
 * @s: the characters to print
 *
 * Return: void
 */
void _puts_recursion(char *s)
{
	_putchar(*s);
	if (*s != '\0')
	{
		s++;
		_puts_recursion(s);
	}
	else
		_putchar('\n');
}
