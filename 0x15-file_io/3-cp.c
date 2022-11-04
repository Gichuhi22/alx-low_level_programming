#include"main.h"


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

	if (access(file_from, F_OK) == 0)
	{
		fd1 = open(file_from, O_RDONLY);
		r = read(fd1, buff, 1024);
		if (fd1 == -1 || r == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file NAME_OF_THE_FILE\n");
			exit(98);
		}

	}
	else
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file NAME_OF_THE_FILE\n");
		exit(98);
	}
	
	if (access(file_to, F_OK)== 0)
	{
		fd2 = open(file_to, O_TRUNC);
	}
	else
	{
		fd2 = open(file_to, O_CREAT | O_RDWR, 0664);
	}
	w = write(fd2, buff, r);
	if (w == -1 || fd2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to NAME_OF_THE_FILE\n");
		exit(99);
	}
	
	x = close(fd1);
	y = close(fd2);
	if (x == -1 || y == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd FD_VALUE\n");
		exit(100);
	}

	return (0); 

}
