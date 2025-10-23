#include "main.h"
#include <stdio.h>
/**
 * _atoi - convert char to int
 * @s: the char to be converted
 *
 * Return: int
 */
int _atoi(char *s)
{
	int i = 0;
	unsigned int sign = 1;

	while (*s != '\0')
	{
		if (*s == '-')
			sign *= -1;
		else if ((*s >= '0') && (*s <= '9'))
		{
			i = (i * 10) + (*s - '0');
		}
		else
		{
			if (i > 0)
				break;
		}
		s++;
	}

	return (i * sign);
}
