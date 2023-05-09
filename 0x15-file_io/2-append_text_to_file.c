#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include "main.h"

/**
 * append_text_to_file - appends text to an existing file
 * @filename: the file to append to
 * @text_content: the text
 *
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	char *dup = text_content;
	int count = 0;
	int wr_status = 0;
	int fd;

	if (filename == NULL)
		return (-1);
	while (*(dup++) != '\0')
		count++;
	fd = open(filename, O_APPEND | O_RDWR);
	if (fd == -1)
		return (-1);
	wr_status = write(fd, text_content, count);
	if (wr_status == -1)
		return (-1);
	close(fd);
	return (1);
}
