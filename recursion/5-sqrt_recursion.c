#include "main.h"
/*
 * NOTE: Since ecursion blocks the execution of a function
 * it will recursively open functions until it hits *s == '\0'
 * which will let the rest of the function run
 */

/**
 * _pow_recursion - prints a character array in reverse
 * @x: the 1st number
 * @y: the 2nd number
 *
 * Return: int
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
