#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX std output
 * @filename: name of the file
 * @letters: number of letters to read and print
 * Return: actual number of letters read and printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, count1, count2;
	char *buff;


	buff = malloc(sizeof(char) * letters + 1);
	if (!buff)
	{
		free(buff);
		return (0);
	}
	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	return (0);
	
	count1 = read(fd, buff, letters);
	if (count1 == -1)
		return (0);

	buff[letters] = '\0';
	
	close(fd);
	count2 = write (STDOUT_FILENO, buff, count1);
	if (count1 != count2)
		return (0);


	free(buff);
	return (count2);
}
