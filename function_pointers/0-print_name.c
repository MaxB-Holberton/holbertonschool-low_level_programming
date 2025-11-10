#include "function_pointers.h"

/**
 * print_name - print the name
 * @name: name to print
 * @f: pointer to function
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
