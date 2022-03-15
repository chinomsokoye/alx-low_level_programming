#include "main.h"

/**
 * _isalpha - check for alphabet character to standard output
 * @c: character to check
 * Return: 1 if lower or upper case, 0 if not alphabet
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
