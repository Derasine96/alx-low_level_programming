#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
/**
 * read_textfile - that reads a text file and prints it to the POSIX SO.
 * @filename: the name of the file to create
 * @letters: the number of letters it should read and print
 * Return: 0 or actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t bytesRead, bytesWrite, count = 0;
	char *buffer = malloc(letters);

	if (filename == NULL || buffer == NULL)
	{
		if (buffer != NULL)
		{
			free(buffer);
		}
		return (0);
	}
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buffer);
		return (0);
	}
	bytesRead = read(fd, buffer, letters);
	while (bytesRead > 0)
	{
		bytesWrite = write(STDOUT_FILENO, buffer, bytesRead);
		if (bytesWrite != bytesRead)
		{
			close(fd);
			free(buffer);
			return (0);
		}
		count += bytesRead;
	}
	if (bytesRead == -1)
	{
		close(fd);
		free(buffer);
		return (0);
	}
	close(fd);
	free(buffer);
	return (count);
}
