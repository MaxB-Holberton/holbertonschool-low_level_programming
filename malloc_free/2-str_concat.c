#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - get the string length
 * @str: the string to check
 *
 * Return: int
 */
int _strlen(char *str)
{
	int i;

	if (str == NULL)
		return (0);
	while (*str != '\0')
	{
		i++;
		str++;
	}
	return (i);
}

/**
 * str_concat - creates the array
 * @s1: the size of the array
 * @s2: the character to write to the array
 *
 * Return: the duplicated string
 */
char *str_concat(char *s1, char *s2)
{
	char *buffer;
	char *cpya = s1;
	char *cpyb = s2;
	int i = 0;
	int j = 0;
	int k;

	i = _strlen(cpya);
	j = _strlen(cpyb);

	buffer = malloc((sizeof(char) * (i + j)) + 1);
	if (buffer == NULL)
	{
		return (NULL);
	}
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

