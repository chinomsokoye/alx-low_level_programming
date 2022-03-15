#include "main.h"

/**
 * print_last_digit - print last digit of an integer
 * @n: integer argument, parameter
 * Return: last digit of number passed
 */

int print_last_digit(int n)
{
	_putchar('0' + _abs(n % 10));
	return (_abs(n % 10));
}
