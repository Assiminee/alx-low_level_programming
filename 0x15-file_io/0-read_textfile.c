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
	char buff[1024];
	int fd = open(filename, O_RDONLY);
	ssize_t charsWritten = 0;
	ssize_t charsRead;
	ssize_t count;

	if (filename == NULL)
		return (0);
	if (fd == -1)
		return (0);

	charsRead = read(fd, buff, letters);
	if (charsRead == -1)
		return (0);
	while (charsWritten < charsRead)
	{
		count = write(STDOUT_FILENO, buff + charsWritten, charsRead - charsWritten);
		if (count == -1)
			return (0);
		charsWritten += count;
	}
	if (charsWritten != charsRead)
		return (0);
	return (charsWritten);
}
