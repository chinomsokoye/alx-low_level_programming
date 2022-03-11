#include <stdio.h>

/**
 * main - print to standard output
 * print all combination of three digits differently, hundred, ten, one
 * Return: 0 if exited, compiled without errors
 */

int main(void)
{
	int one;
	int ten;
	int hun;

	for (hun = '0'; hun <= '9'; hun++)
	{
		for (ten = (hun + 1); ten <= '9'; ten++)
		{
			for (one = (ten + 1); one <= '9'; one++)
			{
				putchar(hun);
				putchar(ten);
				putchar(one);
				if (hun != '7' || ten != '8' || one != '9')
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
