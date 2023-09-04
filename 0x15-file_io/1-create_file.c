#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
/**
 * create_file - a function that creates a file.
 * @filename: name of the file to create
 * @text_content: NULL terminated string to write to the file
 * Return: 0 or -1
 */
int create_file(const char *filename, char *text_content)
{
	int fd, bytesWrite, len = 0;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 600);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
		len++;
	}
	if (text_content == NULL)
	{
		bytesWrite = write(fd, text_content, len);
		if (bytesWrite == -1)
		{
			return (-1);
		}
	}
	close(fd);
	return (1);
}
