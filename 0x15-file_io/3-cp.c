#include"main.h"

/**
 * handle_file_from - handles opening and reading from the first argument
 * @file: pointer to passed file from main
 * @buff: buffer to store the read content
 * @p: pointer to return value of read function
 * Return: file descriptor
 */

int handle_file_from(char *file, char *buff, int *p)
{
	int fd1;

	if (access(file, F_OK) == 0)
	{
		fd1 = open(file, O_RDONLY);
		*p = read(fd1, buff, 1024);
		if (fd1 == -1 || *p == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file);
			exit(98);
		}
	}
	else
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file);
		exit(98);
	}
	return (fd1);
}
/**
 * handle_file_to - handles opening and writing to argv[2]
 * @file: pointer to passed file from main
 * @buff: stores content read from first argument
 * @p: pointer to return value of write function
 * @p1: pointer to return value of read function
 * Return: file descriptor
 */

int handle_file_to(char *file, char *buff, int *p, int *p1)
{
	int fd2;

	if (access(file, F_OK) == 0)
	{
		fd2 = open(file, O_TRUNC);
	}
	else
	{
		fd2 = open(file, O_CREAT | O_RDWR | O_TRUNC, 0664);
	}
	*p = write(fd2, buff, *p1);
	if (*p == -1 || fd2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		exit(99);
	}
	return (fd2);
}
/**
 * main - copies content of a file to another file
 * @argc: number of arguments passed from terminal to main
 * @argv: an array of passed arguments
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int fd1, fd2, w, r, x, y;
	char *file_from, *file_to;
	char buff[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	file_from = argv[1];
	file_to = argv[2];

	fd1 = handle_file_from(file_from, buff, &r);
	fd2 =  handle_file_to(file_to, buff, &w, &r);

	x = close(fd1);
	y = close(fd2);
	if (x == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd1);
		exit(100);
	}
	else if (y == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd2);
		exit(100);
	}

	return (0);

}
