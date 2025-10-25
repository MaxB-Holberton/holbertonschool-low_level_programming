#include "main.h"
/**
 * _strcat - joins two strings together
 * @dest: the string destination
 * @src: the string source
 *
 * Return: the string
 */
char *_strcat(char *dest, char *src)
{
	char *cpy = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';

	return (cpy);
}
