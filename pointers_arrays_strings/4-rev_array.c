#include "main.h"
/**
 * reverse - reverse
 * @a: array
 * @cpy: copy array
 * @j: position from 0
 * @i: position from n
 *
 * Return: i
 */
int reverse(int *a, int *cpy, int j, int i)
{
	int buffer = a[j];

	i--;
	a[j] = cpy[i];
	cpy[i] = buffer;

	return (i);
}
/**
 * reverse_array - Compare a string
 * @a: The array
 * @n: The number of elements in the array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int j;
	int i = n;
	int *cpy = a;

	if (n % 2 == 0)
	{
		for (j = 0; j < n / 2; j++)
			i = reverse(a, cpy, j, i);
	}
	else
	{
		for (j = 0; j < (n - 1) / 2; j++)
			i = reverse(a, cpy, j, i);
	}
}
