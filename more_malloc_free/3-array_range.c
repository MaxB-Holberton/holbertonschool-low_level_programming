#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * array_range - creates an array of integers
 * @min: The minmum
 * @max: The maximum
 *
 * Return: returns pointer
 */
int *array_range(int min, int max)
{
	int *ptr;
	unsigned int i;
	int j;
	unsigned int mem = 0;

	if (min > max)
		return (NULL);

	for (j = min; j <= max; j++)
		mem++;

	ptr = malloc(sizeof(int) * (mem));
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i <= mem; i++)
	{
		ptr[i] = min + i;
	}
	return (ptr);
}
