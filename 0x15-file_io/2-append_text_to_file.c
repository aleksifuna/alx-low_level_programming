#include "main.h"
/**
 * append_text_to_file - appendst text at the end of a file
 * @filename: name of the file
 * @text_content: NULL terminated string to add in file
 *
 * Return: 1 0n success -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, len;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content == NULL)
		return (1);
	len = 0;
	while (text_content[len] != '\0')
		len++;
	if (write(fd, text_content, len) != -1)
	{
		close(fd);
		return (1);
	}
	else
	{
		close(fd);
		return (-1);
	}
}
