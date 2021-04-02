#include "holberton.h"

/**
 * read_textfile - read a text file and print it to stdout
 * @filename: name of text file to read
 * @letters: number of letters it should read and print
 * Return: Actual number of letters read and printed, otherwise 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t vread, vwrite;
	char *buf;

	if (filename == NULL)
		return (0);
	fd = open(filename, 0);

	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);
	vread = read(fd, buf, letters);
	if (vread == -1)
	{
		free(buf);
		close(fd);
		return (0);
	}
	vwrite = write(1, buf, vread);
	if (vwrite == -1)
	{
		free(buf);
		return (0);
	}
	close(fd);
	return (vread);
}
