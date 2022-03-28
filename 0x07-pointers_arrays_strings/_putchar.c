#include <unistd.h>

/**
 * _putchar - writes to standard output character c
 * @c: character output
 * Return: 1 on success
 * On error, -1 returned, errno is set appropriately
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
