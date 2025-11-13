#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_numbers - sum numbers
 * @separator: the separator
 * @n: number of args
 * @...: list of args
 *
 * Return: int
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		printf("%i", va_arg(args, int));
		if (separator != NULL && ((i + 1) < n))
		{
			printf("%s", separator);
		}
	}
	printf("\n");
}
