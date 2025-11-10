#include "function_pointers.h"
#include <stddef.h>
/**
 * int_index - looks for an integer
 * @array: pointer to the array
 * @size: size of the array
 * @cmp: the pointer for the functions
 *
 * Return: match or -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	int fnc_return;

	if (size < 1)
		return (-1);

	for (i = 0; i < size; i++)
	{
		fnc_return = cmp(array[i]);
		if (fnc_return != 0)
			return (i);
	}
	return (-1);
}
