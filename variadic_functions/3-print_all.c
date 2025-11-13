#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_char - print char
 * @argument: the argument to print
 *
 * Return: null
 */
void print_char(va_list argument)
{
	printf("%c", va_arg(argument, int));
}
/**
 * print_int - print int
 * @argument: the argument to print
 *
 * Return: null
 */
void print_int(va_list argument)
{
	printf("%i", va_arg(argument, int));
}
/**
 * print_float - print float
 * @argument: the argument to print
 *
 * Return: null
 */
void print_float(va_list argument)
{
	printf("%f", va_arg(argument, double));
}
/**
 * print_string - print string
 * @argument: the argument to print
 *
 * Return: null
 */
void print_string(va_list argument)
{
	char *str;

	str = va_arg(argument, char *);
	if (str == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", str);
}
/**
 * print_all - sum numbers
 * @format: format to print
 * @...: list of args
 *
 * Return: int
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0;
	const char *format_ptr = format;
	char *separator = "";

	s_printer print_functions[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string}
	};

	va_start(args, format);
	while (*format_ptr != '\0')
	{
		i = 0;
		while (i < 4 && (*format_ptr != *(print_functions[i].op)))
		{
			i++;
		}
		if (i < 4)
		{
			printf("%s", separator);
			print_functions[i].f_print(args);
			separator = ", ";
		}
		format_ptr++;
	}
	printf("\n");
	va_end(args);
}
