#include <stdio.h>

/**
 * main - print to standard output
 * Return: 0 if exited, compiled without error
 */

int main(void)
{
	char c;
	int i;
	long l;
	double d;
	float f;

	printf("Size of a char: %lu byte(s)\n", sizeof(c));
	printf("Size of an int: %lu byte(s)\n", sizeof(i));
	printf("Size of a long int: %lu byte(s)\n", sizeof(l));
	printf("Size of a double: %lu byte(s)\n", sizeof(d));
	printf("Size of a float: %lu byte(s)\n", sizeof(f));

	return (0);
}
