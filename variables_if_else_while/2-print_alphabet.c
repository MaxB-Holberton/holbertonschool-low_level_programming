#include <stdio.h>
/*
 * The Main Description
 */

/**
 * main - the main function
 * @void - does nothing
 *
 * Return: 0
 */
int main(void)
{
	char Char;

	for (Char = 'a'; Char <= 'z'; Char++)
	{
		putchar(Char);
	}
	putchar('\n');
	return (0);
}
