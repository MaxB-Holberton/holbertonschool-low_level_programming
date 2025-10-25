#include "main.h"
/**
 * check_letter - check if it is a letter
 * @s: the character
 *
 */
void check_letter(char *s)
{
	s++;
	if (*s > 96 && *s < 123)
		*s = *s - 32;
}
/**
 * cap_string - Capitalise the string
 * @s: the string
 *
 * Return: char
 */
char *cap_string(char *s)
{
	char *cpy = s;
	int i = 0;

	while (*s != '\0')
	{
		if  (*s == ' ' || *s == ',' || *s == ';' || *s == '.')
			check_letter(s);
		else if (*s == '!' || *s == '?' || *s == '"' || *s == '(' || *s == ')')
			check_letter(s);
		else if (*s == '\n' || *s == '\t')
			check_letter(s);
		else if (*s == '{' || *s == '}')
			check_letter(s);
		else if (i == 0)
		{
			check_letter(s);
			i++;
		}
		s++;
	}
	return (cpy);
}
