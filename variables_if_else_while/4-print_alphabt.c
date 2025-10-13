#include <stdio.h>
/*
 *The Program Description
 */

/**
 * main - the main funtion
 * @void - does nothing
 *
 * Return: 0
 */
int main(void)
{
	char Char;

	for (Char = 'a'; Char <= 'z'; Char++)
	{
		if (Char == 'e' || Char == 'q')
			continue;
		else
			putchar(Char);
		return (0);
	}
}
