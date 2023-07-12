#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdbool.h>
/**
 *
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, closing_stat;
	char buff[1024];
	ssize_t chars_read_src, charsWritten, count;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	file_to = open(argv[2], O_RDWR | O_CREAT | O_TRUNC, 0664);
	if (file_to == -1)
	{
		closing_stat = close(file_from);
		if (closing_stat == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", closing_stat);
			exit(100);
		}
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	while (true)
	{
		chars_read_src = read(file_from, buff, sizeof(buff));
		if (chars_read_src == -1)
		{
			close(file_from);
			close(file_to);
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		if (chars_read_src == 0)
			break;
		charsWritten = 0;
		while (charsWritten < chars_read_src)
		{
			count = write(file_to, buff + charsWritten, chars_read_src - charsWritten);
			if (count == -1)
			{
				close(file_from);
				close(file_to);
				dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
				exit(98);
			}
			charsWritten += count;
		}
	}
	closing_stat = close(file_from);
	closing_stat = close(file_to);
	if (closing_stat == -1) 
	{
		dprintf(STDOUT_FILENO, "failed\n");
		exit(100);
	}
	return (0);
}

