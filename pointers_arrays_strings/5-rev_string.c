#include "main.h"
/**
 * rev_string - reverse the string 
 * @s: the string to write
 *
 * Return: void
 */
void rev_string(char *s)
{
	char *start = s;
	char *end = s;
	char buffer;

	while (*end != '\0')
		end++;

	while (start < end)
	{
		buffer = *start;
		*start = *end;
		*s = *start;
		*end = buffer;
		
		s++;
		start++;
		end--;
	}
}
