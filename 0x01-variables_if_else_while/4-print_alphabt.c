#include <stdio.h>

/**
 * main - print to standard output
 * print lowercase a-z excluding 'e' and 'q'
 * Return: 0 if exited, compiled without error
 */

int main(void)
{
	char alphabt = 'a';

	while (alphabt <= 'z')
	{
		if ((alphabt != 'e') && (alphabt != 'q'))
		{
			putchar(alphabt);
		}
		alphabt++;
	}
	putchar('\n');

	return (0);
}
