#include <stdio.h>

/**
 * main - print to standard output
 * print possible different combinations of two digits
 * Increment ten and one
 * print comma
 * Return: 0 if exited, compiled without errors
 */

int main(void)
{
	int one;
	int ten;

	for (ten = '0'; ten <= '9'; ten++)
	{
		for (one = (ten + 1); one <= '9'; one++)
		{
			putchar(ten);
			putchar(one);

			if (ten != '8' || one != '9')
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
