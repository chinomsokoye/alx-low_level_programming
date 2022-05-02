#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: filename
 * @text_content: text content
 * Return: 1 or -1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, r, w = 0;

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd < 0)
		return (-1);
	if (text_content)
	{
		while (text_content[w])
			w++;
		r = write(fd, text_content, w);
		if (r != w)
			return (-1);
	}
	close(fd);
	return (1);
}
