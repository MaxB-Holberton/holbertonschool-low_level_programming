#include "main.h"
/*
 * NOTE: Since ecursion blocks the execution of a function
 * it will recursively open functions until it hits *s == '\0'
 * which will let the rest of the function run
 */

/**
 * root_check - checks for the sqaure root
 * @n: the number to check
 * @i: iterates
 *
 * Return: -1 if no sqaure root
 */
int root_check(int n, int i)
{
	if (n < 0)
		return (-1);
	if ((i * i) > n)
		return (-1);
	if ((i * i) == n)
		return (i);
	return (root_check(n, i + 1));
}

/**
 * _sqrt_recursion - prints a character array in reverse
 * @n: the number to check
 *
 * Return: int
 */
int _sqrt_recursion(int n)
{
	return (root_check(n, 0));
}
