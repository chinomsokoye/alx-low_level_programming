#include <unistd.h>

/**
 * _putchar - writes character to standard output
 * @c: character
 * Return: 1 on success
 * On error, -1, errno is set appropriately
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
