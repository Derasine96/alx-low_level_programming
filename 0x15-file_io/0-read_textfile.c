#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
/**
 * read_textfile - that reads a text file and prints it to the POSIX SO.
 * @filename: the name of the file to create
 * @letters: the number of letters it should read and print
 * Return: 0 or actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t bytesRead, bytesWrite, fd;
	char *buffer = malloc(sizeof(char) * letters);

	if (filename == NULL || buffer == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buffer);
		return (0);
	}
	bytesRead = read(fd, buffer, letters);
	bytesWrite = write(STDOUT_FILENO, buffer, bytesRead);
	if (bytesRead == -1 || bytesWrite != bytesRead)
	{
		free(buffer);
		return (0);
	}
	close(fd);
	free(buffer);
	return (bytesWrite);
}

