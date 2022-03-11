#include <stdio.h>

/**
 * main - print to standard output
 * print using putchar 0-9
 * Return: 0 if exited, compiled without errors
 */

int main(void)
{
	int num = '0';

	while (num <= '9')
	{
		putchar(num);
		num++;
	}
	putchar('\n');

	return (0);
}
