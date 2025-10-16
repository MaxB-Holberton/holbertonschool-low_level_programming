/**
 * _isalpha - checks if the input is a lowercase letter
 * @c: the input 
 *
 * Return: 1 if letter, else 0
 *
 */
int _isalpha(int c)
{
	if ((c > 96 && c < 123) || (c > 64 && c < 91))
		return (1);
	else
		return (0);
}
