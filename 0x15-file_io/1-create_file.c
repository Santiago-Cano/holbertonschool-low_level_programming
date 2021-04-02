#include "holberton.h"

/**
 * create_file - create a text file
 * @filename: name of file to create
 * @text_content: null terminated string to write to the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, vwrite, textbyte;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC);
	if (fd == -1)
		return (-1);
	for (textbyte = 0; text_content[textbyte]; textbyte++)
		;
	vwrite = write(fd, text_content, textbyte);
	if (vwrite == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
