#include "main.h"
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
	int r;

	r = _islower('H');
	_putchar(r + '0');
	r = _islower('o');
	_putchar(r + '0');
	r = _islower(108);
	_putchar(r + '0');
	_putchar('\n');

	return (0);
}
