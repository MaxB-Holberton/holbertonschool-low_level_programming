#include "main.h"
#include <stdlib.h>

/**
 * _strlen -  check string length
 * @str: the string to check
 *
 * Return: Length of string
 */
int _strlen(char *str)
{
	unsigned int i;

	if (str == NULL)
		return (0);
	for (i = 0; str[i] != '\0'; i++)
	{}
	return (i);
}
/**
 * string_nconcat- do malloc
 * @s1: string 1
 * @s2: string 2
 * @n: how much of string 2 do you want
 *
 * Return: void
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *buffer;
	unsigned int i = 0;
	unsigned int j = 0;
	unsigned int k = 0;

	i = _strlen(s1);
	j = _strlen(s2);

	if (j > n)
		j = n;

	buffer = malloc((sizeof(char) * (i + j)) + 1);
	if (buffer == NULL)
		return (NULL);

	for (k = 0; k < i; k++)
	{
		buffer[k] = s1[k];
	}
	for (k = 0; k < j; k++)
	{
		buffer[k + i] = s2[k];
	}

	buffer[i + j] = '\0';
	return (buffer);
}
