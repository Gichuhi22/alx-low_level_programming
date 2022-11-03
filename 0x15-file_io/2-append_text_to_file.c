#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 *@filename: name of file
 *@text_content: string to add to the file
 *Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, length = 0;
	ssize_t i;

	if (!filename || !text_content)
		return (-1);

	if (access(filename, F_OK) == 0)
	{
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	}
	else
		return (-1);

	/*length = strlen(text_content);*/
	for (; text_content[length];)
		length++;

	if (access(filename, R_OK) == 0)
	{
		i = write(fd, text_content, length);
		if (i == -1)
			return (-1);
	}
	else
		return (-1);

	close(fd);

	return (1);
}

