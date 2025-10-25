#include "main.h"
/**
 * _strncpy  - Copy a string
 * @dest: the string destination
 * @src: the string source 
 * @n: point to 
 *
 * Return: the string
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *cpy = dest;
	int i = 0;

	while (i < n)
	{
		if (*src == '\0')
		{
			*dest = '\0';
		}
		else 
		{
			*dest = *src;
			src++;
		}
		dest++;
		i++;
	}
	return (cpy);
}
