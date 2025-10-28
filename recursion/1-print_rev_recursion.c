#include "main.h"
/*
 * NOTE: Since print_rev_recursion blocks the execution of _putchar
 * it will recursively open functions until it hits return ('\0')
 * which will let the rest of the function run
 */

/**
 * _print_rev_recursion - prints a character array in reverse
 * @s: the characters to print
 *
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return;
	s++;
	_print_rev_recursion(s);
	s--;
	_putchar(*s);
}
