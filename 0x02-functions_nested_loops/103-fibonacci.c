#include <stdio.h>

/**
 * main - find, print sum of even-valued term, fibonacci
 * Return: 0 if exited, compiled without errors
 */

int main(void)
{
	int i;
	unsigned long int a, b, series, sum;

	a = 1;
	b = 2;
	sum = 0;

	for (i = 1; i <= 33; ++i)
	{
		if (a < 4000000 && (a % 2) == 0)
		{
			sum = sum + a;
		}

		series = a + b;
		a = b;
		b = series;
	}

	printf("%lu\n", sum);

	return (0);
}
