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
	char s1[98];
	char *ptr;
	
	ptr = _strcpy(s1, "First, solve the problem. Then, write the code\n");
	printf("s1: %s", s1);
	printf("ptr: %s", ptr);
	return (0);
}
