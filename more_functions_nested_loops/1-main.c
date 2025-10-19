#include "main.h"
#include <stdio.h>
/*
 * The Main Function
 */

/**
 * main - The Main Function
 * @void: nothing
 *
 * Return: 0
 */
int main(void)
{
	char c;

	c = '0';
	printf("%c: %d\n", c, _isdigit(c));
	c = 'a';
	printf("%c: %d\n", c, _isdigit(c));
	return (0);
}
