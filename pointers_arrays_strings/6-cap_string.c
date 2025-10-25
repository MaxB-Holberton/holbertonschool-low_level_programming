#include "main.h"
/**
 * check_letter - check if it is a letter
 * @s: the character
 *
 */
void check_letter(char *s)
{
	if (*s > 96 && *s < 123)
		*s = *s - 32;
	s++;
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

	check_letter(s);
	while (*s != '\0')
	{
		if  (*s == ' ' || *s == ',' || *s == ';' || *s == '.')
		{
			s++;
			check_letter(s);
		}
		else if (*s == '!' || *s == '?' || *s == '"' || *s == '(' || *s == ')')
		{
			s++;
			check_letter(s);
		}
		else if (*s == '\n' || *s == '\t')
		{
			s++;
			check_letter(s);
		}
		else if (*s == '{' || *s == '}')
		{
			s++;
			check_letter(s);
		}
		else
			s++;
	}
	return (cpy);
}
