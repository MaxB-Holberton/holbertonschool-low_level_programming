#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - sum numbers
 * @n: number of args
 * @...: list of args
 *
 * Return: int
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	int total = 0;
	unsigned int i;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		total += va_arg(args, int);
	}
	return (total);
}
