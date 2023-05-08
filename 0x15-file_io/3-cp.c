#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int fd);
int main(int argc, char *argv[]);

/**
 * create_buffer - Allocates 1024 bytes for the buffes.
 * @file: The name of the file buffer is storing chararcters.
 *
 * Return: A pointer to the newly-allocated buffers
 */
char *create_buffer(char *file)
{
	char *buffers;

	buffers = malloc(sizeof(char) * 1024);

	if (buffers == NULL)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buffers);
}

/**
 * close_file - Closes file descriptors.
 * @fd: The file descriptor to be closed.
 */
void close_file(int fd)
{
	int m;

	m = close(fd);

	if (m == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - Copies the contents of a file to another file.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments
 * Return: 0 on success.
 * Description: If the number of argument incorrect exit code 97
 * If file_from does not exist or cannot be read -
 * exit code 98
 * If file_to cannot be created or written to fail -
 * exit code 99
 * If you can not close a file descripto - exit code 100.
 */
int main(int argc, char *argv[])
{
	int a, z, r, m;
	char *buffers;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffers = create_buffer(argv[2]);
	a = open(argv[1], O_RDONLY);
	r = read(a, buffers, 1024);
	z = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (a == -1 || r == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't read from file %s\n", argv[1]);
			free(buffers);
			exit(98);
		}

		m = write(z, buffers, r);
		if (z == -1 || m == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't write to %s\n", argv[2]);
			free(buffers);
			exit(99);
		}

		r = read(a, buffers, 1024);
		z = open(argv[2], O_WRONLY | O_APPEND);

	} while (r > 0);

	free(buffers);
	close_file(a);
	close_file(z);
	return (0);
}

