#include "main.h"

/**
 * print_alphabet - print lower case alphabet to standard output
 * Return: 0
 */

void print_alphabet(void)
{
	char alphabet;

	alphabet = 'a';

	while (alphabet <= 'z')
	{
		_putchar(alphabet);
		alphabet++;
	}
	_putchar('\n');
}
