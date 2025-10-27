#include "main.h"
#include <stdio.h>
/**
 * _strchr - returns point to a character
 * @s: the char set to search
 * @c: the char to look for
 *
 * Return: pointer
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	return (NULL);
}
