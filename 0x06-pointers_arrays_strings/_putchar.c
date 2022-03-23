#include <unistd.h>

/**
 * _putchar - write character to standard output
 * @c: character argument, parameter
 * Return: 0 or 1
 * On error, -1 returned, errno is set appropriately
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
