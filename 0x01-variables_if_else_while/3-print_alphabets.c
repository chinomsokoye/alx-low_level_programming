#include <stdio.h>

/**
 * main - print to standard output
 * prints lowercase letters a-z
 * prints uppercase letters A-Z
 * Return: 0 if exited, compiled without errors
 */

int main(void)
{
	char lower_case = 'a';
	char upper_case = 'A';

	while (lower_case <= 'z')
	{
		putchar(lower_case);
		lower_case++;
	}

	while (upper_case <= 'Z')
	{
		putchar(upper_case);
		upper_case++;
	}

	putchar('\n');

	return (0);
}
