#include "main.h"
/**
 *append_text_to_file - append text_content to filename
 *@filename: name of file
 *@text_content: text inside file
 *Return: 1 on success, -1 failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int zd, oc, i = 0;

	if (!filename)
		return (-1);

	zd = open(filename, O_APPEND | O_WRONLY);
	if (zd == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[i] != '\0')
			i++;
		oc = write(zd, text_content, i);
		if (oc == -1)
			return (-1);
	}
	close(zd);
	return (1);
}
