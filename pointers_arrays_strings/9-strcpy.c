#include "main.h"
/**
 * _strcpy - array printing
 * @dest: the array
 * @src: number of elements
 *
 * Return: the destination string
 */
char *_strcpy(char *dest, char *src)
{
	char *copy = src;

	while (*copy != '\0')
	{
		*dest = *copy;
		dest++;
		copy++;
	}
	*dest = '\0';
	return (src);
}
