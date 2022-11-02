#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of the file
 * @text_content: string to write to the file
 * Return: 1 on success or -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd, i;

	if (!filename)
		return (-1);

	if (access(filename, F_OK) == 0)
	{
		fd = open(filename, O_TRUNC);
	}
	else
	{
		fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	}

	if (fd == -1)
		return (-1);

	if (text_content)
		i = write(fd, text_content, (strlen(text_content) + 1));

	if (i == -1)
		return (-1);

	close(fd);

	return (1);
}
