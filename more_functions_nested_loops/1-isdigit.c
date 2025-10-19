#include "main.h"
/**
 * _isdigit - The Main Function
 * @c: the char to check
 *
 * Return: 0
 */
int _isdigit(int c)
{
	if (c > 47 && c < 58)
		return (1);
	else
		return (0);
}
