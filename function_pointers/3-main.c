#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - the main function
 * @argc: number of arguments supplied
 * @argv: the arguments
 *
 * Return: 0 or error status
 */
int main(int argc, char *argv[])
{
	int arga;
	int argb;
	int (*func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}
	arga = atoi(argv[1]);
	argb = atoi(argv[3]);

	if ((*argv[2] == '%' || *argv[2]  == '/') && argb == 0)
	{
		printf("Error\n");
		return (100);
	}

	func = get_op_func(argv[2]);
	if (func == NULL)
	{
		printf("Error\n");
		return (99);
	}
	printf("%d\n", func(arga, argb));
	return (0);
}
