#include "main.h"
/**
 * read_textfile - read a textfile
 * @filename: name of the file to open
 * @letters: number of letters to print in the standard ouput
 *
 * Return: number of letter printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t charsRead, count, charsWritten = 0;
	char *buff;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buff = malloc(letters + 1);
	if (buff == NULL)
	{
		close(fd);
		return (0);
	}
	charsRead = read(fd, buff, letters);
	if (charsRead == -1)
	{
		close(fd);
		free(buff);
		return (0);
	}
	while (charsWritten < charsRead)
	{
		count = write(STDOUT_FILENO, buff + charsWritten, charsRead - charsWritten);
		if (count == -1)
		{
			close(fd);
			free(buff);
			return (0);
		}
		charsWritten += count;
	}
	close(fd);
	free(buff);
	if (charsWritten != charsRead)
		return (0);
	return (charsWritten);
}
