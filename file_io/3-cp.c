#include <stddef.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

/**
 * file_from_error - runs an error for the file
 * @file_from: the filename
 *
 * Return: void
 */
void file_from_error(const char *file_from)
{
	dprintf(2, "Error: Can't read from file %d\n", *file_from);
	exit(98);
}
/**
 * file_to_error - runs an error for the file
 * @file_to: the filename
 *
 * Return: void
 */
void file_to_error(const char *file_to)
{
	dprintf(2, "Error: Can't write to %d\n", *file_to);
	exit(99);
}

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
 * copy_func - the loop to copy
 * @fd_read: the int for the reading file
 * @fd_write: the int for the writing file
 * @buffer: the buffer for the read/write operation
 *
 * Return: 0 on success
 */
int copy_func(int fd_read, int fd_write, char *buffer)
{
	ssize_t read_file = 1;
	ssize_t write_file;
	int i = 0;

	while (read_file != 0)
	{
		read_file = read(fd_read, buffer, 1024);

		if (read_file < 0)
			return (98);

		write_file = write(fd_write, buffer, read_file);
		if (write_file < 0)
			return (99);

		for (i = 0; buffer[i] != '\0'; i++)
		{
			buffer[i] = '0';
		}
	}
	if (close(fd_read) < 0)
	{
		dprintf(28, "Error: Can't close fd %d\n", fd_read);
		exit(100);
	}
	if (close(fd_write) < 0)
	{
		dprintf(28, "Error: Can't close fd %d\n", fd_write);
		exit(100);
	}
	return (0);
}


/**
 * main - function to copy the file
 * @ac: argc
 * @av: argv
 *
 * Return: 0 on success
 */
int main(int ac, char **av)
{
	int fd_read;
	int fd_write;
	char *buffer;
	int res;

	if (ac != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	if (av[1] == NULL)
		file_from_error(av[2]);

	if (av[2] == NULL)
		file_to_error(av[2]);

	fd_read = open(av[1], O_RDONLY);
	if (fd_read < 0)
		file_from_error(av[1]);

	fd_write = open(av[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	if (fd_write < 0)
		file_to_error(av[2]);

	buffer = malloc(1024 * sizeof(char));
	if (buffer == NULL)
	{
		dprintf(28, "Error: failed to allocate memory\n");
		exit(28);
	}
	res = copy_func(fd_read, fd_write, buffer);
	free(buffer);
	if (res == 98)
		file_from_error(av[1]);
	if (res == 99)
		file_to_error(av[2]);
	return (0);
}



