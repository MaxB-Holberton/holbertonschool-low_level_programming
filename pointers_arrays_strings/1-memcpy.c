#include "main.h"
/**
 * _memcpy - copy strings from memory
 * @dest: the string to copy to
 * @src: the string to copy from
 * @n: the number of times to write into s
 *
 * Return: the string
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *rtnchar = dest;
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*dest = *src;
		dest++;
		src++;
	}

	return (rtnchar);
}
