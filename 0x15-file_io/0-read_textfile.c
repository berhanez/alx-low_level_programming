#include "main.h"

/**
 * read_textfile - function reads a text file and prints it to stdout
 * @filename: name of text file
 * @letters: number of chars
 * Return: 0 if unable to open file, filename = NULL or write failes
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buff;
	ssize_t fd, readd, writer;

	if (filename == NULL)
		return (0);

	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
		return (0);
	
	fd = open(filename, O_RDONLY);
	readd = read(fd, buff, letters);
	writer = write(STDOUT_FILENO, buff, readd);
	if (fd == -1)
		return (0);
	if (writer == -1)
		return (0);
	if (readd == -1)
		return (0);
	if (readd != writer)
		return (0);
	
	free(buff);
	close(fd);
	return (writer);
}
