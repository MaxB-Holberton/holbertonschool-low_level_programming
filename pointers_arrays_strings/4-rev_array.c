#include "main.h"
/**
 * reverse_array - Compare a string
 * @a: The array 
 * @n: The number of elements in the array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i = n - 1;
	int j = 0;
	int b1;
	int b2;

	while(j != i / 2)
	{
		b1 = a[j];
		b2 = a[i];
		a[i] = b1;
		a[j] = b2;
		j++;
		i--;
	}
}
