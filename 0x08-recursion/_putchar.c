#include <unistd.h>

/**
 * _putchar - write to standard output character c
 * @c: character output, input
 * Return: 1 success
 * On error, -1 returned, errno set appropriately
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
