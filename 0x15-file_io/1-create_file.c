#include "main.h"
/**
 * create_file - creates file
 * @filename: filepath and extension
 * @text_content: string to be written in the file
 * Return: 1 if succeeded -1 if failed
*/
int create_file(const char *filename, char *text_content)
{
	int fd, w, len;

	if (filename == NULL || text_context == NULL)
		return (-1);
	for (len = 0; text_content[len];)
		len++;

	fd = open(filename,  O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(fd, text_content, len);

	if (fd == -1 || w == -1)
		return (-1);
	close(fd);

	return (1);
}
