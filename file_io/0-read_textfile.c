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
	int fd;
	ssize_t file_write;
	ssize_t *buffer;
	ssize_t read_file;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);

	buffer = malloc((letters + 1) * sizeof(char));
	if (buffer == NULL)
	{
		return (0);
	}
	read_file = read(fd, buffer, letters);
	if (read_file < 0)
	{
		free(buffer);
		return (0);
	}

	file_write = write(STDOUT_FILENO, buffer, read_file);
	if (file_write < 0)
		return (0);
	free(buffer);
	close(fd);
	return (file_write);
}
