#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - creates the array
 * @size: the size of the array
 * @c: the character to write to the array
 *
 * Return: the buffer
 */
char *create_array(unsigned int size, char c)
{
	char *buffer = malloc(size);
	unsigned int i;

	if (size == 0)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		buffer[i] = c;
	}
	return (buffer);
}
