#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - the function that reads the filename
 * @filename: the name of the file to open
 * @letters: he number of letters to read from teh file
 *
 * Return: the number of characters actuallyr ead from the file
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t count = 0;
	char *buffer;
	int fd;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = malloc(letters);
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}
	count = read(fd, buffer, letters);
	write(STDOUT_FILENO, buffer, count);
	free(buffer);
	close(fd);
	return (count);
}
