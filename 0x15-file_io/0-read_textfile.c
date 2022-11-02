#include "main.h"
/**
 *read_textfile - reads a text file and prints it to the POSIX std out
 *@filename: text file
 *@letters: number of letters should print
 *Return: number of letters printed
 *
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int zd, ch;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
		return (0);

	zd = open(filename, O_RDONLY);
	if (zd == -1)
		return (0);

	ch = read(zd, buffer, letters);

	write(STDOUT_FILENO, buffer, ch);

	buffer[ch + 1] = '\0';
	close(zd);
	return (ch);
}
