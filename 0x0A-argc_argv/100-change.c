#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins to make change for an amount
 * @argc: argument counter
 * @argv: argument array vector
 * Return: 0 or 1
 */

int main(int argc, char *argv[])
{
	int notes, coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (argv[1][0] == '-')
	{
		printf("0\n");
		return (0);
	}
	notes = atoi(argv[1]);

	coins += notes / 25;
	notes = notes % 25;
	coins += notes / 10;
	notes = notes % 10;
	coins += notes / 5;
	notes = notes % 5;
	coins += notes / 2;
	notes = notes % 2;
	coins += notes / 1;

	printf("%d\n", coins);
	return (0);
}
