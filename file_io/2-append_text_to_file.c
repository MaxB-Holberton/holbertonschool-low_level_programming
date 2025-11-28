#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * _len_of_string - get length of a string
 * @s: the string to check
 *
 * Return: string length
 */
unsigned int _len_of_string(char *s)
{
	unsigned int i = 0;

	for (i = 0; s[i] != '\0'; i++)
	{}
	return (i);
}

/**
 * append_text_to_file - add text to an existing file
 * @filename: the filename
 * @text_content: the content to write
 *
 * Return: 1 on success or -1 on fail
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_int;
	ssize_t bytes_to_file;

	if (filename == NULL)
		return (-1);

	file_int = open(filename, O_RDWR | O_APPEND);

	if (file_int < 0)
		return (-1);

	if (text_content == NULL)
		return (1);

	bytes_to_file = write(file_int, text_content, _len_of_string(text_content));
	if (bytes_to_file < 0)
		return (-1);
	close(file_int);
	return (1);
}
