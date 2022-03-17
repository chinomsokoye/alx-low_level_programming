#include <unistd.h>

/**
 * _putchar - writes character c to standard output
 * @c: character
 * Return: on success 1
 * On error, -1 is returned, errno is set appropriately
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
