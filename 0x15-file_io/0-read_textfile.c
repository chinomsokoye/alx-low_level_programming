#include "main.h"

/**
 * read_textfile - reads a textfile and prints it to POSIX stdout
 * @filename: file name
 * @letters: letters
 * Return: value
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	int r, w;
	char *buf;

	buf = malloc(letters);
	if (buf == NULL)
		return (0);
	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDWR);
	if (fd == -1)
		return (0);
	r = read(fd, buf, letters);
	if (r == -1)
		return (0);
	w = write(STDOUT_FILENO, buf, r);
	if (w == -1)
		return (0);
	if (close(fd) == -1)
		return (0);
	free(buf);
	return (r);
}
