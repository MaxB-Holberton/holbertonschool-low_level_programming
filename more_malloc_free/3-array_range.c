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
	int i = 0;

	if (min > max)
		return (NULL);


	ptr = malloc(sizeof(int) * (max - min) + sizeof(int));
	if (ptr == NULL)
		return (NULL);

	for (; min <= max; min++)
	{
		ptr[i] = min;
		i++;
	}
	return (ptr);
}
