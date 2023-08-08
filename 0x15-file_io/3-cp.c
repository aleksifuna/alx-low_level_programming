#include "stdlib.h"
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
void handle_err(char *filename, char *msg, int e_code);
void handle_err2(char *filename, char *msg, int e_code, char *buff);
/**
 * main - copies content of a file to another
 * @ac: number of arguments
 * @av: argument vector
 *
 * Return: 0 on success
 */
int main(int ac, char **av)
{
	int fd1, fd2, strlen;
	char *buffer;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd1 = open(av[1], O_RDONLY);
	if (fd1 == -1)
		handle_err(av[1], "Error: Can't read from file", 98);
	fd2 = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd2 == -1)
		handle_err(av[2], "Error: Can't write to", 99);
	strlen = lseek(fd1, 0, SEEK_END);
	lseek(fd1, 0, SEEK_SET);
	while (strlen > 1024)
	{
		buffer = malloc(sizeof(char) * 1024);
		if (read(fd1, buffer, 1024) == -1)
			handle_err2(av[1], "Error: Can't read from file", 98, buffer);
		if (write(fd2, buffer, 1024) == -1)
			handle_err2(av[2], "Error: Can't write to", 99, buffer);
		strlen -= 1024;
	}
	buffer = malloc(sizeof(char) * strlen);
	if (read(fd1, buffer, strlen) == -1)
		handle_err2(av[1], "Error: Can't read from file", 98, buffer);
	if (write(fd2, buffer, strlen) == -1)
		handle_err2(av[2], "Error: Can't write to", 99, buffer);
	if (close(fd1) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd1);
		exit(100);
	}
	if (close(fd2) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd2);
		exit(100);
	}
	return (0);
}
/**
 * handle_err - handles errors
 * @filename: filename
 * @msg: error Message
 * @e_code: exit code
 */
void handle_err(char *filename, char *msg, int e_code)
{
	dprintf(STDERR_FILENO, "%s %s\n", msg, filename);
	exit(e_code);
}
/**
 * handle_err2 - handles errors
 * @filename: filename
 * @msg: error Message
 * @e_code: exit code
 * @buff: buffer to free
 */
void handle_err2(char *filename, char *msg, int e_code, char *buff)
{
	dprintf(STDERR_FILENO, "%s %s\n", msg, filename);
	free(buff);
	exit(e_code);
}
