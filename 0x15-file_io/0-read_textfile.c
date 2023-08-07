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
	int fd;
	char *buffer;
	ssize_t rd, wt;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	rd = read(fd, buffer, letters);
	wt = write(STDOUT_FILENO, buffer, rd);
	close(fd);
	free(buffer);
	return (wt);
}
