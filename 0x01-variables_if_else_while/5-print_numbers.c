#include <stdio.h>

/**
 * main - print to standard output
 * prints number 0-9
 * Return: 0 if exited, compiled without error
 */

int main(void)
{
	int n = 0;

	while (n < 10)
	{
		printf("%i", n);
		n++;
	}
	putchar('\n');

	return (0);
}
