#include "main.h"

/**
 * read_textfile - reads a text file and prints it to std out
 * @filename: pointer to the text file to be read
 * @letters: The number of letters it should read and print
 *
 * Return: The actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t rd, wr;
	char *buf;

	if (filename == NULL)
	{
		return (0);
	}
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}
	buf = malloc(sizeof(char) * (letters));
	if (buf == NULL)
	{
		return (0);
	}
	rd = read(fd, buf, letters);
	wr = write(STDOUT_FILENO, buf, rd);
	close(fd);

	free(buf);
	return (wr);
}
