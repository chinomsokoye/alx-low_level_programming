#include <stdio.h>

/**
 * main - print to standard output
 * print lowercase alphabet in reverse 'z' - 'a'
 * Return: 0 if exited, compiled without error
 */

int main(void)
{
	char tebahpla = 'z';

	while (tebahpla >= 'a')
	{
		putchar(tebahpla);
		tebahpla--;
	}
	putchar('\n');

	return (0);
}
