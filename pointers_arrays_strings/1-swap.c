/**
 * swap_int - swaps a and b
 * @a: address of a
 * @b: address of b
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int aswap = *a;
	int bswap = *b;

	*b = aswap;
	*a = bswap;
}
