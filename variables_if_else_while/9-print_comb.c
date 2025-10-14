#include <stdio.h>
/*
 * The Main Description
 */

/**
 * main - The Main Function
 * @void - Does Nothing
 *
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
		if (!(i == 57))
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
