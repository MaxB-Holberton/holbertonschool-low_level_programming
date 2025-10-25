#include "main.h"
/**
 * leet - Compare a string
 * @s: the string
 *
 * Return: char 
 */
char *leet(char *s) 
{
	char *cpy = s;
	int i;
	int j = 5;
	char letter[5] = {'a', 'e', 'o', 't', 'l'};
	char replace[5] = {'4', '3', '0', '7', '1'};

	while (*s != '\0')
	{
		for (i = 0; i < j; i++)
		{
			if (*s == letter[i] || *s == letter[i] - 32)
				*s = replace[i];
		}
		s++;
	}
	return (cpy);
}
