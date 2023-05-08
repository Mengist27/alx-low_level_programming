#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read text file and  print it to the POSIX STDOUT.
 * @filename: text file being read the file
 * @letters: number of letters to be read the file
 * Return: m- actual number letter it could read and printed
 * 0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t m;
	ssize_t l;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	l = read(fd, buf, letters);
	m = write(STDOUT_FILENO, buf, l);

	free(buf);
	close(fd);
	return (m);
}

