#include "main.h"

/**
 * create_file - function creates a file
 * @filename: name of new file to be created
 * @text_content: content of new file ending with NULL
 * Return: 1 on success, -1 on fail
 */
int create_file(const char *filename, char *text_content)
{
	int fd, rw, i = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

	if (fd < 0)
		exit(1);

	
	if (text_content == NULL)
		text_content = "";
	while (text_content[i])
		i++;

	rw = write(fd, text_content, i);
	if (rw == -1)
		return (-1);
 	close(fd);

	return (1);
}
