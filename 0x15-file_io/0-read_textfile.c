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
	char buff[letters];
	
	fd = open("Requiescat", O_RDONLY);

	if (fd == -1 || filename == NULL)
		exit (1);

	read(fd, buff, letters);

	close(fd);

	return (buff);
}	
