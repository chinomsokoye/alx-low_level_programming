#include "main.h"

/**
 * puts_half - prints half of a string followed by newline
 * @str: string argument, parameter, character
 */

void puts_half(char *str)
{
	int len, num, a;

	len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	if (len % 2 == 0)
	{
		for (a = len / 2; str[a] != '\0'; a++)
		{
			_putchar(str[a]);
		}
	}
	else if (len % 2)
	{
		for (num = (len - 1) / 2; num < len - 1; num++)
		{
			_putchar(str[num + 1]);
		}
	}

	_putchar('\n');
}
