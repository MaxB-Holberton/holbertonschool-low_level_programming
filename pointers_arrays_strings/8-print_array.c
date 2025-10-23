#include "main.h"
#include <stdio.h>
/**
 * print_array - array printing
 * @a: the array
 * @n: number of elements
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if ((i + 1) < n)
			printf(", ");
	}
	printf("\n");
}
