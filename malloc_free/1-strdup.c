#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - dup the string
 * @str: the size of the array
 *
 * Return: the duplicated string
 */
char *_strdup(char *str)
{
	char *buffer;
	char *cpy = str;
	int i;
	int strsize = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	while (*cpy != '\0')
	{
		strsize++;
		cpy++;
	}
	buffer = malloc((sizeof(char) * strsize) + 1);
	if (buffer == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < strsize; i++)
	{
		buffer[i] = str[i];
	}
	buffer[i] = '\0';
	return (buffer);
}
