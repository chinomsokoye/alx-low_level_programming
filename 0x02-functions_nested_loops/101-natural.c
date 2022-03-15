#include <stdio.h>

/**
 * main - compute, print sum of natural numbers multiples
 * 3 or 5 below 1024 excluded
 * Return: 0 if exited and compiled without errors
 */

int main(void)
{
	unsigned long int mul3, mul5, mul;
	int i;

	mul3 = 0;
	mul5 = 0;
	mul = 0;

	for (i = 0; i < 1024; ++i)
	{
		if ((i % 3) == 0)
		{
			mul3 = mul3 + i;
		} else if ((i % 5) == 0)
		{
			mul5 = mul5 + i;
		}
	}
	mul = mul3 + mul5;
	printf("%lu\n", mul);

	return (0);
}
