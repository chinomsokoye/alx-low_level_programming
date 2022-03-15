#include "main.h"

/**
 * _islower - to check character case in standard output
 * @c: character to check _islower
 * Return: 1 if c is lower, 0 if otherwise stated
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
