#include <stdio.h>
/**
 * main - The main function
 * @argc: the number of aruments
 * @argv: the arguments
 *
 * Return: void
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
