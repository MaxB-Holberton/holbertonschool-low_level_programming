#include <stdio.h>
/*
 * The Program Description
 */

/**
 * main - The main function
 * @void - returns nothing
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
	for (Char = 'A'; Char <= 'Z'; Char++)
	{
		putchar(Char);
	}
	putchar('\n');
	return (0);
}
