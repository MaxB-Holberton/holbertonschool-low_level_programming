#include "main.h"
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
	int r;
	
	print_last_digit(98);
	print_last_digit(0);
	r = print_last_digit(-1024);
	_putchar('0' + r);
	_putchar('\n');	
	
	return (0);
}
