#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file
 * @filename: The pointer to the name of the file.
 * @text_content: The string to add to the end of the file
 * Return: 1 on success , -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int s, m, l = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (l = 0; text_content[l];)
			l++;
	}

	s = open(filename, O_WRONLY | O_APPEND);
	m = write(s, text_content, l);

	if (s == -1 || m == -1)
		return (-1);

	close(s);

	return (1);
}

