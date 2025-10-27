#include "main.h"
#include <stdio.h>
/**
 * _strspn - returns length of a prefixed string
 * @s: the characters to check
 * @accept: the accepted characters
 *
 * Return: pointer
 */
unsigned int _strspn(char *s, char *accept)
{
	char *checkbuffer;
	unsigned int i = 0;

	while (*s != '\0')
	{
		checkbuffer = accept;
		while (*checkbuffer != '\0')
		{
			if (*checkbuffer == *s)
				i++;
			checkbuffer++;
		}
		if (*s == ' ')
			return (i);
		s++;
	}
	return (i);
}
