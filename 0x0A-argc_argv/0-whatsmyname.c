#include <stdio.h>
#include "main.h"

/**
 * main - prints name of program
 * @argc: argument count
 * @argv: argument arrays
 * Return: 0 or 1
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
