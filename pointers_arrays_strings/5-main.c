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
	char s[10] = "My School";
	
	printf("%s\n", s);
	rev_string(s);
	printf("%s\n", s);
	return (0);
}
