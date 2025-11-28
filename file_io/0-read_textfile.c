#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

/**
 * read_textfile - create a file
 * @filename: the filename
 * @letters: number of letters to write
 *
 * Return: 1 on success or -1 on fail
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_int;
	ssize_t file_write;
	ssize_t *buffer;
	ssize_t read_file;

	if (filename == NULL)
		return (0);
	file_int = open(filename, O_RDONLY);
	if (file_int < 0)
		return (0);

	buffer = malloc((letters + 1) * sizeof(char));
	if (buffer == NULL)
	{
		return (0);
	}
	read_file = read(file_int, buffer, letters);
	if (read_file < 0)
	{
		free(buffer);
		return (0);
	}

	file_write = write(1, buffer, read_file);
	free(buffer);
	close(file_int);
	return (file_write);
}
