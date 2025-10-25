#include "main.h"
/**
 * _strcmp - Compare a string
 * @s1: string 1
 * @s2: string 2
 *
 * Return: int
 */
int _strcmp(char *s1, char *s2)
{
	int cmp;

	while (*s1 != '\0')
	{
		cmp = *s1 - *s2;
		if (cmp != 0)
			return (cmp);
		s1++;
		s2++;
	}
	return (0);
}
