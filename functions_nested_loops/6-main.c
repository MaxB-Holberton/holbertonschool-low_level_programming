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

	r = _abs(-1);
	printf("%d\n", r);
	r = _abs(0);
	printf("%d\n", r);
	r = _abs(1);
	printf("%d\n", r);
	r = _abs(-98);
	printf("%d\n", r);

	return (0);
}
