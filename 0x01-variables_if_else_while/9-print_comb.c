#include <stdio.h>

/**
 * main - print to standard output
 * print all possible combination of single-digit numbers
 * Return: 0 if exited, compiled without error
 */

int main(void)
{
	int num = '0';

	while (num <= '9')
	{
		putchar(num);
		if (num != '9')
		{
			putchar(',');
			putchar(' ');
		}
		num++;
	}
	putchar('\n');

	return (0);
}
