#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet x10 in lowercase
 * Return: 0
 */

void print_alphabet_x10(void)
{
	char alphabet;
	int counter;

	counter = 0;

	while (counter < 10)
	{
		alphabet = 'a';

		while (alphabet <= 'z')
		{
			_putchar(alphabet);
			alphabet++;
		}
		_putchar('\n');
		counter++;
	}
}
