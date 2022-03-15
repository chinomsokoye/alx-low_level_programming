#include <stdio.h>

/**
 * main - print first 50 fibonacci series, starting 1, 2
 * Return: 0 if exited, compiled without error
 */

int main(void)
{
	long int a, b, c, series;

	b = 1;
	c = 2;

	for (a = 1; a <= 50; ++a)
	{
		if (b != 20365011074)
		{
			printf("%ld, ", b);
		} else
		{
			printf("%ld\n", b);
		}
		series = b + c;
		b = c;
		c = series;
	}
	return (0);
}
