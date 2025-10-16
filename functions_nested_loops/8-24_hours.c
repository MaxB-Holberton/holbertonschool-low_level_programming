#include "main.h"
/**
 * jack_bauer - prints 24 hours by minutes
 * @void: no input
 *
 * Return: no return
 */
void jack_bauer(void)
{
	int h;
	int m_t;
	int m;

	for (h = 0; h < 24; h++)
	{
		for (m_t = 0; m_t < 6; m_t++)
		{
			for (m = 0; m < 10; m++)
			{
				_putchar('0' + (h / 10));
				_putchar('0' + (h % 10));
				_putchar(':');
				_putchar('0' + m_t);
				_putchar('0' + m);
				_putchar('\n');
			}
		}
	}
}
