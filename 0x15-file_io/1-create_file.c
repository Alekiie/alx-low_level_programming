#include "main.h"
/**
 *create_file - create a file wit text_content
 *@filename: name of new file
 *@text_content: text inside new file
 *Return: 1 on success, -1 failure
 */
int create_file(const char *filename, char *text_content)
{
	int zd, i = 0;

	if (!filename)
		return (-1);

	zd = open(filename, O_CREAT | O_TRUNC | O_RDWR, 0600);
	if (zd == -1)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[i] != '\0')
			i++;
		write(zd, text_content, i);
	}
	close(zd);
	return (1);
}
