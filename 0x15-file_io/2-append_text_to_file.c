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

	if (filename == NULL)
		return (-1);

	while (text_content[i])
		i++;
	
	fd = open(filename, O_WRONLY | O_APPEND, 0200);
	write(fd, text_content, i);

	if (fd == -1)
		return (-1);

	close(fd);
	return (1);
}
