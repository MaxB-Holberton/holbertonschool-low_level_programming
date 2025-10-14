#include <stdio.h>
/*
 * The Function Description
 */

/**
 * main - The main function
 * @void - Does nothing
 *
 * Return: 0
 */
int main(void)
{
	char Char;

	for (Char = '0'; Char <= '9'; Char++)
		putchar(Char);
	for (Char = 'a'; Char <= 'f'; Char++)
		putchar(Char);
	putchar('\n');
	return (0);
}
