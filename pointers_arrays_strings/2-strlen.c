/**
 * _strlen - gets the length of a string
 * @s: the string to measure
 *
 * Return: void
 */
int _strlen(char *s)
{
	int n = 0;

	while (*s != '\0')
	{
		n++;
		s++;
	}
	return (n);
}
