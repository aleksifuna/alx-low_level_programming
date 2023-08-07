#include "main.h"
/**
 * read_textfile - reads a text file and prints to standard output
 * @filename: the text filename
 * @letters: number of letters to print
 *
 * Return: actual number of letters it could print/ read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, count;
	char *buffer;
	off_t strlen;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	strlen = lseek(fd, 0, SEEK_END);
	buffer = malloc(strlen + 1);
	lseek(fd, 0, SEEK_SET);
	if (letters > (size_t)strlen)
	{
		read(fd, buffer, strlen);
		count = write(1, buffer, strlen);

	}
	else
	{
		read(fd, buffer, letters);
		count = write(1, buffer, letters);
	}
	free(buffer);
	close(fd);
	return (count);
}
