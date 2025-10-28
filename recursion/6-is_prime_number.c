#include "main.h"
/*
 * NOTE: Since ecursion blocks the execution of a function
 * it will recursively open functions until it hits *s == '\0'
 * which will let the rest of the function run
 */

/**
 * prime_check - The actual check recursive function
 * @n: the number to check
 * @i: The Iteration
 *
 * Return: 1 if Prime, 0 if Not Prime
 */
int prime_check(int n, int i)
{
	if ((n % i == 0) && (i > 1))
		return (0);
	if (n <= 1)
		return (0);
	if (((i * i) > n) && (n % i != 0))
		return (1);
	return (prime_check(n, i + 1));
}



/**
 * is_prime_number - Check if number is a prime number
 * @n: the number to check
 *
 * Return: int
 */
int is_prime_number(int n)
{
	int i = 0;

	return (prime_check(n, i + 1));
}
