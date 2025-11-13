#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdarg.h>
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
 * struct struct_printer - a struct for the function printer
 * @op: the symbol for the operation to print
 * @f_print: the input to print
 */
typedef struct struct_printer
{
	char *op;
	void (*f_print)(va_list argument);
} s_printer;
#endif
