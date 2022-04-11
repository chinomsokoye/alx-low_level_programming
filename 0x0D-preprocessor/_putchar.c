#include <unistd.h>

/**
 * _putchar - writes character to std output
 * @c: character
 * Return: 1
 * On error, -1, errno set appropriately
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
