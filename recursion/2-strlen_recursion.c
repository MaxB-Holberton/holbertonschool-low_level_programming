#include "main.h"
/*
 * NOTE: Since ecursion blocks the execution of a function
 * it will recursively open functions until it hits *s == '\0'
 * which will let the rest of the function run
 */

/**
 * _strlen_recursion - prints a character array in reverse
 * @s: the characters to print
 *
 * Return: int
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s != '\0')
	{
		s++;
		i++;
		return (i + _strlen_recursion(s));
	}
	return (i);
}
