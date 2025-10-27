#include "main.h"
#include <stdio.h>
/**
 * _strpbrk - Searches a string for a set of chracters
 * @s: the characters to check
 * @accept: the accepted characters
 *
 * Return: pointer
 */
char *_strpbrk(char *s, char *accept)
{
	char *checkbuffer;

	while (*s != '\0')
	{
		checkbuffer = accept;
		while (*checkbuffer != '\0')
		{
			if (*s == *checkbuffer)
				return (s);
			checkbuffer++;
		}
		s++;
	}
	return (NULL);
}
