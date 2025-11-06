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
	void *ptr;

	if (nmemb == 0)
		return (NULL);
	if (size == 0)
		return (NULL);

	size *= nmemb;
	ptr = malloc(size);
	if (ptr == NULL)
		return (NULL);

	return (ptr);
}
