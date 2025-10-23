#include "main.h"
/**
 * rev_string - reverse the string
 * @s: the string to write
 *
 * Return: void
 */
void rev_string(char *s)
{
	char *startofstr = s;
	char *endofstr = s;
	char buffer;

	while (*endofstr != '\0')
	{
		endofstr++;
	}
	while (startofstr < endofstr)
	{
		endofstr--;
		buffer = *endofstr;
		*endofstr = *startofstr;
		*startofstr = buffer;
		startofstr++;
	} 
}
