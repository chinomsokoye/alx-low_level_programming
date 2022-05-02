#include "main.h"

/**
 * read_textfile - reads a textfile and prints it to POSIX stdout
 * @filename: file name
 * @letters: letters
 * Return: value
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, r, w;
	char *buf;

	if (!filename)
		return (0);
	fd = open(filename, O_RDWR);
	if (fd < 0)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (!buf)
		return (0);
	r = read(fd, buf, letters);
	if (r < 0)
	{
		free(buf);
		return (0);
	}
	buf[r] = '\0';
	close(fd);
	w = write(STDOUT_FILENO, buf, r);
	if (w < 0)
	{
		free(buf);
		return (0);
	}
	free(buf);
	return (w);
}
