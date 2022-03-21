#include "main.h"

/**
 * print_rev - print a string in reverse, newline
 * @s: string character argument, parameter
 */

void print_rev(char *s)
{
	int a, b, len;

	a = 0;

	while (s[a] != '\0')
	{
		a++;
	}

	len = a;

	for (b = len - 1; b >= 0; b--)
	{
		_putchar(s[b]);
	}

	_putchar('\n');
}
