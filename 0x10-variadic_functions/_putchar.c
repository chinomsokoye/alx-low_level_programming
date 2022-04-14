#include <unistd.h>

/**
 * _putchar - writes the character to output
 * @c: character
 * Return: 1
 * On error -1, errno is set appropriately
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
