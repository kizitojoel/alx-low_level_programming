#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"

/**
 * create_file - creates a file in the mode 0600
 * @filename: the name of the file to create
 * @text_content: the content to put in thefile
 *
 * Return: 1 if successful and -1 if erroneous
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int count = 0;
	char *duplicate = text_content;
	int wr_status = 0;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_RDWR | O_TRUNC | O_CREAT, 0600);
	if (fd == -1)
		return (-1);
	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}
	while (*(duplicate++) != '\0')
	{
		count++;
	}
	wr_status = write(fd, text_content, count);
	if (wr_status == -1)
		return (-1);
	close(fd);
	return (1);
}
