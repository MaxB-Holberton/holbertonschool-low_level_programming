#include <stdio.h>
#include <stdlib.h>
/**
 * main - The main function
 * @argc: the number of aruments
 * @argv: the arguments
 *
 * Return: void
 */
int main(int argc, char *argv[])
{

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
