#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - do malloc
 * @b: interger b
 *
 * Return: void
 */
void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);

	return (ptr);
}
