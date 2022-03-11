#include <stdio.h>

/**
 * main - print to standard output
 * print all possible combination of two digit 0-99, seperated by space
 * print no repeat of value starting 00 01, ..
 * Return: 0 if exited, compiled without errors
 */

int main(void)
{
	int a;
	int b;

	for (a = 0; a <= 100; a++)
	{
		for (b = 0; b <= 100; b++)
		{
			if (a < b)
			{
				putchar((a / 10) + 48);
				putchar((a % 10) + 48);
				putchar(' ');
				putchar((b / 10) + 48);
				putchar((b % 10) + 48);
				if (a != 98 || b != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
