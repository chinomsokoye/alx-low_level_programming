#include <unistd.h>

/**
 * _putchar - writes character to standard output
 * @c: character
 * Return: 0
 * On error, -1 and errno set appropriately
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
