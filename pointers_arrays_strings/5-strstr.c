#include "main.h"
#include <stdio.h>
/**
 * _strstr - returns point to a character
 * @s: the characters to check
 * @accept: the accepted characters
 *
 * Return: pointer
 */
char *_strstr(char *s, char *accept)
{
	char *checkbuffer;
	char *cpy;

	if (*accept == '\0')
		return (s);

	while (*s != '\0')
	{
		checkbuffer = accept;
		cpy = s;
		while (*checkbuffer != '\0')
		{
			if (*cpy == *checkbuffer)
			{
				checkbuffer++;
				cpy++;
				if (*checkbuffer == '\0')
					return (s);
			}
			else
			{
				break;
			}
		}
		s++;
	}
	return (NULL);
}
