#include <stdio.h>

/**
 * main - print to standard output
 * Return: 0 if exited, compiled without error
 */

int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');

	return (0);
}
