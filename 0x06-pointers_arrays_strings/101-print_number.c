#include "main.h"

/**
 * print_number - prints an integer
 * @n: integer
 */

void print_number(int n)
{

	unsigned int i1;

	if (n < 0)
	{
		i1 = -n;
		_putchar('-');
	}
	else
	{
		i1 = n;
	}
	if (i1 / 10)
	{
		print_number(i1 / 10);
	}
	_putchar((i1 % 10) + '0');
}
