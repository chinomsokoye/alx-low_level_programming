#include <stdio.h>

/**
 * main - print to standard output
 * print lower case base 16 numbers '0-9' and alphabet 'a-f'
 * Return: 0 if exited, compiled without errors
 */

int main(void)
{
	int num = '0';
	int alphabet = 'a';

	while (num <= '9')
	{
		putchar(num);
		num++;
	}

	while (alphabet <= 'f')
	{
		putchar(alphabet);
		alphabet++;
	}

	putchar('\n');

	return (0);
}
