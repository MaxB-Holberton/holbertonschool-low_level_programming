#include "function_pointers.h"
#include <stddef.h>
/**
 * array_iterator - iterates through the array
 * @array: pointer to the array
 * @size: size of the array
 * @action: the pointer for the print function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
