#include "main.h"

/**
 * _isdigit - checks for digit 0-9
 * @c: digit, character to check
 * Return: 0 or 1
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}
