#include <stdio.h>

/**
 * main - print to standard output
 * print all possible combination of two digit 0-99, seperated by space
 * print no repeat of value starting 00 01, ..
 * Return: 0 if exited, compiled without errors
 */

int main(void)
{
	int ten;
	int one;

	for (ten = 0; ten <= 99; ten++)
	{
		for (one = ten + 1; one <= 99; one++)
		{
			putchar(ten / 10 + '0');
			putchar(ten % 10 + '0');
			putchar(' ');
			putchar(one / 10 + '0');
			putchar(one % 10 + '0');

			if (!(ten == 98 && one == 99))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
