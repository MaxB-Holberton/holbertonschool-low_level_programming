#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _calloc - do malloc
 * @nmemb: number of elements
 * @size: size of elements
 *
 * Return: returns pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i;
	unsigned int memory = 0;

	if (nmemb == 0)
		return (NULL);
	if (size == 0)
		return (NULL);

	memory = size * nmemb;
	ptr = malloc(memory);
	if (ptr == NULL)
		return (NULL);
	
	for (i = 0; i < memory; i++)
	{
		ptr[i] = 0;
	}

	return (ptr);
}
