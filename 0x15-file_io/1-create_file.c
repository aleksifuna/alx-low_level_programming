#include "main.h"
/**
 * create_file - creates a file
 * @filename: name of file to be created
 * @text_content: null terminated string
 *
 * Return: 1 on success -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	size_t len;

	if (filename == NULL)
		return (-1);
	len = 0;
	while (text_content[len] != '\0')
	{
		len++;
	}
	if (text_content == NULL)
		text_content = "";
	fd = open(filename, O_RDWR | O_TRUNC | O_CREAT, 0600);
	if (fd == -1)
		return (-1);
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
