#include "main.h"
/**
 * append_text_to_file - appends text to file
 * @filename - file to be processed
 * @text_content - text to be appended
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t charsWritten;
	size_t count = 0;
	char *ptr;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_RDWR | O_APPEND);
	if (fd == -1)
		return (fd);
	if (text_content == NULL)
		return (1);
	ptr = text_content;
	while (*ptr != '\0')
	{
		count++;
		ptr++;
	}
	charsWritten = write(fd, text_content, count);
	if (charsWritten == -1)
		return (charsWritten);
	return (1);
}
