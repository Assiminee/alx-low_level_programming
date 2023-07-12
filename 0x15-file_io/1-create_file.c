#include "main.h"
/**
 * create_file - create a file
 * @filename: name of the file to create
 * @text_content: text to write inside the file
 *
 * Return: 1 if the file was created, -1 otherwise
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t writtenChars;
	size_t count = 0;
	char *ptr;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (text_content == NULL)
		return (1);
	ptr = text_content;
	while (*ptr != '\0')
	{
		count++;
		ptr++;
	}
	writtenChars = write(fd, text_content, count);
	if (writtenChars == -1)
	{
		close(fd);
		return (-1);
	}
	return (1);
}
