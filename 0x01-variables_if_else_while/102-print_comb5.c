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
	int th;
	int onth;

	for (ten = '0'; ten <= '9'; ten++)
	{
		for (one = '0'; one <= '9'; one++)
		{
			for (th = ten; th <= '9'; th++)
			{
				for (onth = one + 1; onth <= '9'; onth++)
				{
					putchar(ten);
					putchar(one);
					putchar(' ');
					putchar(th);
					putchar(onth);

					if (!((ten == '9' && one == '8') &&
					      (th == '9' && onth == '9')))
					{
						putchar(',');
						putchar(' ');
					}
				}
				onth = '0';
			}
		}
	}
	putchar('\n');

	return (0);
}
