#include "main.h"
/**
 * more_numbers - The Main Function
 * @void: no input
 *
 * Return: the number
 */

void more_numbers(void)
{
	int i;
	int j;
	int ones;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 15; j++)
		{
			if (j > 9)
			{
				_putchar('0' + (j / 10));
				ones = j % 10;
			}
			else
				ones = j;
			_putchar('0' + ones);
		}
		_putchar('\n');
	}
}
