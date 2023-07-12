#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdbool.h>
void close_file(int fd);
void err_handling_file_from(char *filename);
void err_handling_file_to(char *filename);
/**
 * main - main function
 * @argc: number of arguments passed
 * @argv: pointer to array of arguments
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int file_from, file_to;
	char buff[1024];
	ssize_t chars_read_src, charsWritten, count;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
		err_handling_file_from(argv[1]);
	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (file_to == -1)
	{
		close_file(file_from);
		err_handling_file_to(argv[2]);
	}
	while (true)
	{
		chars_read_src = read(file_from, buff, sizeof(buff));
		if (chars_read_src == -1)
		{
			close(file_from);
			close(file_to);
			err_handling_file_from(argv[1]);
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
				err_handling_file_to(argv[2]);
			}
			charsWritten += count;
		}
	}
	close_file(file_from);
	close_file(file_to);
	return (0);
}
/**
 * close_file - closes a file
 * @fd: file descriptor
 *
 * Return: void
 */
void close_file(int fd)
{
	int closing_stat;

	closing_stat = close(fd);
	if (closing_stat == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", closing_stat);
		exit(100);
	}
}
/**
 * err_handling_file_from - handles the case where file can't be read
 * @filename: name of the file
 *
 * Return: void
 */
void err_handling_file_from(char *filename)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
	exit(98);
}
/**
 * err_handling_file_to - handles case where writing to a file fails
 * @filename: name of the file
 *
 * Return: void
 */
void err_handling_file_to(char *filename)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
	exit(99);
}
