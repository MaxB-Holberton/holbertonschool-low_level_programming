#include "main.h"
/**
 * _memset - joins two strings together
 * @s: the char to write to
 * @b: the char to set
 * @n: the number of times to write into s
 *
 * Return: the string
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *rtnchar = s;
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*s = b;
		s++;
	}

	return (rtnchar);
}
