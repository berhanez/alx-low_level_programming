#include "main.h"

/**
 * read_textfile - function reads a text file and prints it to stdout
 * @filename: name of text file
 * @letters: number of chars
 * Return: 0 if unable to open file, filename = NULL or write failes
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buff;
	ssize_t readd, writer;

	fd = open(filename, O_RDONLY);

	if (fd == -1 || filename == NULL)
		return (0);

	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
	{
		close(fd);
		return (0);
	}
	readd = read(fd, buff, letters);
	close(fd);

	if (readd == -1)
	{
		free(buff);
		return (0);
	}
	/* Write to stdout */
	writer = write(STDOUT_FILENO, buff, readd);
	free(buff);

	if (readd != writer)
		exit(1);
	return (writer);
}
