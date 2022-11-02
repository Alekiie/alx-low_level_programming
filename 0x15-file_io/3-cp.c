#include "main.h"
/**
 *closeF - close file
 *@f1:file to close
 */
void closeF(int f1)
{
	int dx;

	dx = close(f1);
	if (dx == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", dx);
		exit(100);
	}
}

/**
 *main - copies the content of a file to another file
 *@ac: argument count
 *@av: argument vector
 *Return: 1 on success, -1 on failure
 */
int main(int ac, char **av)
{
	char buffer[1024];
	int num1, num2;
	int isread = 1;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	num1 = open(av[1], O_RDONLY);
	if (num1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	num2 = open(av[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);
	while ((isread = read(num1, buffer, 1024)) > 0)
	{
		if (num2 < 0 || write(num2, buffer, isread) != isread)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
			close(num1);
			exit(99);
		}
	}
	if (isread < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	closeF(num1);
	close(num2);
	return (0);
}
