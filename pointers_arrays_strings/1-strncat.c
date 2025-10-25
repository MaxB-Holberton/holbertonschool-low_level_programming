#include "main.h"
/**
 * _strncat - joins two strings together
 * @dest: the string destination
 * @src: the string source 
 * @n: the number to concat to
 *
 * Return: the string
 */
char *_strncat(char *dest, char *src, int n)
{
	char *cpy = dest;
	int i = 0;

	while (*dest != '\0')
	{
		dest++;
	}
	
	while (i < n)
	{
		if (*src == '\0')
			break;
		*dest = *src;
		dest++;
		src++;
		i++;
	}
	*dest = '\0';

	return (cpy);
}
