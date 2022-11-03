#include "main.h"
#include<stdbool.h>

/**
 * file_exists - checks if a file exists
 * @filename: file name to check
 * Return: boolean true if it exists or false if not
 */

bool file_exists(const char *filename)
{
	FILE *fp = fopen(filename, "r");
	bool is_exist = false;

	if (fp)
	{
		is_exist = true;
		fclose(fp);
	}
	return (is_exist);
}

/**
 * create_file - creates a file
 * @filename: name of the file
 * @text_content: string to write to the file
 * Return: 1 on success or -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd, i, close_err;

	if (!filename)
		return (-1);

	if (file_exists(filename))
	{
		fd = open(filename, O_TRUNC);
	}
	else
	{
		fd = open(filename, O_CREAT | O_RDWR, 0600);
	}

	if (fd == -1)
		return (-1);

	if (text_content)
		i = write(fd, text_content, (strlen(text_content) + 1));

	if (i == -1)
		return (-1);

	close_err = close(fd);
	if (close_err == -1)
		return (-1);

	return (1);
}
