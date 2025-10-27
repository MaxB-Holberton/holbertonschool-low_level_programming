#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - returns point to a character
 * @a: the characters to check
 * @size: the size of the arry
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i;
	int j;
	int tagl = 0;
	int tagr = size - 1;
	int suml = 0;
	int sumr = 0;
	int *cpy = a;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (tagl == j)
				suml += *cpy;
			if (tagr == j)
				sumr += *cpy;
			cpy++;
		}
		tagl++;
		tagr--;
	}
	printf("%d, %d\n", suml, sumr);
}

