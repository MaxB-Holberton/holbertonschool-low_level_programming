#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * is_digits - checks an array of characters
 * @arguments: check the arguments for characters
 *
 * Return: 0 if there is a digit
 */
int is_digits(char *arguments)
{
	while (*arguments != '\0')
	{
		if (isdigit(*arguments) == 0)
		{
			return (0);
		}
		arguments++;
	}
	return (1);
}

/**
 * main - The main function
 * @argc: the number of aruments
 * @argv: the arguments
 *
 * Return: void
 */
int main(int argc, char *argv[])
{

	int i;
	int result;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	result = 0;

	for (i = 1; i < argc; i++)
	{
		if (is_digits(argv[i]) == 0)
		{
			printf("Error\n");
			return (1);
		}
		result += atoi(argv[i]);
	}
	printf("%d\n", result);
	return (0);
}
