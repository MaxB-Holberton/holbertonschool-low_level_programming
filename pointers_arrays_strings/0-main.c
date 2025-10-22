#include <stdio.h>
#include "main.h"

/*
 * The Main Function
 */

/**
 * main - The Main Function
 * @void: no input
 *
 * Return: 0
 */
int main(void)
{
	int n;

	n = 402;
	printf("n=%d\n", n);
	reset_to_98(&n);
	printf("n=%d\n", n);
	return (0);
}

