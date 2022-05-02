#include "main.h"

/**
 * create_file - creates a file
 * @filename: filename
 * @text_content: text content
 * Return: 1 or -1
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	int r, t_s = 0;

	if (!filename)
		return (-1);
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd < 0)
		return (-1);
	if (text_content)
	{
		while (text_content[t_s])
			t_s++;
		r = write(fd, text_content, t_s);
		if (r != t_s)
			return (-1);
	}
	close(fd);
	return (1);
}
