#include "main.h"
/**
 * string_toupper - Compare a string
 * @s: the string to cap
 *
 * Return: void
 */
char *string_toupper(char *s)
{
	char *cpy = s;

	while (*s != '\0')
	{
		if (*s > 96 && *s < 123)
		{
			*s = *s - 32;
		}
		s++;
	}
	return (cpy);
}
