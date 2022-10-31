#include "main.h"
/**
 * append_text_to_file - appends text to end of file
 * @filename: name of the file to be appended
 * @text_content: text to be added
 * Return: 1 on success, -1 on fail
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, i = 0;

	fd = open(filename, O_WRONLY | O_APPEND, 0200);

	if (fd == -1)
		return (0);

	while (text_content)
		i++;

	write(fd, text_content, i);
	close(fd);
	return (1);
}
