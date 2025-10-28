#include "main.h"
/*
 * NOTE: Since ecursion blocks the execution of a function
 * it will recursively open functions until it hits *s == '\0'
 * which will let the rest of the function run
 */

/**
 * factorial - prints a character array in reverse
 * @n: the number
 *
 * Return: int
 */
int factorial(int n)
{

	if (n > 1)
		return (n * factorial(n - 1));
	else if (n < 0)
		return (-1);
	else
		return (1);
}
