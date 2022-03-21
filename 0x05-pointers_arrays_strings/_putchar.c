#include <unistd.h>


/**
 * _putchar - print character to standard output
 * @c: character, integer
 *
 * Return: on success 1
 * On error, -1 is returned and errno set as appropriate
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
