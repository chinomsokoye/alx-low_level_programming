#include "main.h"

int prime(int n, int i);

/**
 * is_prime_number - returns 1 if input is prime integer, otherwise 0
 * @n: integer
 * Return: 1 or 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (prime(n, n - 1));
}

/**
 * prime - return prime number recursively
 * @n: integer number
 * @i: iterator argument
 * Return: 1 or 0
 */

int prime(int n, int i)
{
	if (i == 1)
	{
		return (1);
	}
	if (n % i == 0 && i > 0)
	{
		return (0);
	}
	return (prime(n, i - 1));
}
