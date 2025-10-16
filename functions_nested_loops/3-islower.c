/**
 * _islower - checks if the input is a lowercase letter
 * @c: the input 
 *
 * Return: 1 if lowercase, else 0
 *
 */
int _islower(int c)
{
	if (c > 96 && c < 123)
		return (1);
	else
		return (0);
}
