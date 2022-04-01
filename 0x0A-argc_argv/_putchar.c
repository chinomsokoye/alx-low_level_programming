#include <unistd.h>

/**
 * _putchar - writes to standard output, character c
 * @c: character
 * Return: 1 success
 * On error, -1, errno set appropriately
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
