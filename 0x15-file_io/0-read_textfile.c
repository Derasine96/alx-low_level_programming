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
	ssize_t fd;
	ssize_t bytesRead, bytesWrite, count;

	if (filename == NULL)
		return (0);
	fd = open("filename", O_RDONLY);
	if (fd == -1)
		return (0);
	bytesRead = read(fd, (void *)letters, sizeof(letters));
	count = 0;
	while (bytesRead > 0)
	{
		bytesWrite = write(STDOUT_FILENO, (void *)letters, sizeof(letters));
		if (bytesWrite != bytesRead)
		{
			close(fd);
			return (0);
		}
		count += bytesRead;
	}
	if (bytesRead == -1)
		return (0);
	close(fd);
	return (count);
}
