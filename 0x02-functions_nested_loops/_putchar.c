#include <unistd.h>

/**
 * _putchar - write to standard output
 * @c: the character to print
 * Return: 0 if exited, compiled without errors
 * On error, -1 is returned, errno is set appropriately
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
