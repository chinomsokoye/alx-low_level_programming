#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * is_digit - check for digit in string character
 * @s: string
 * Return: 0 or 1
 */

int is_digit(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] < '\0' || s[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

/**
 * _strlen - checks string length
 * @s: string
 * Return: string length
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * errors - main error
 */

void errors(void)
{
	printf("Errors\n");
	exit(98);
}

/**
 * main - multiplies two positive numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 or 1
 */

int main(int argc, char *argv[])
{
	char *s1, *s2;
	int len1, len2, len, i, mult, digit1, digit2, *result, a = 0;

	s1 = argv[1], s2 = argv[2];
	if (argc != 3 || !is_digit(s1) || !is_digit(s2))
		errors();
	len1 = _strlen(s1);
	len2 = _strlen(s2);
	len = len1 + len2 + 1;
	result = malloc(sizeof(int) * len);
	if (!result)
		return (1);
	i = 0;
	while (i <= len1 + len2)
	{
		result[i] = 0;
		i++;
	}
	len1 = len1 - 1;
	while (len1 >= 0)
	{
		digit1 = s1[len1] - '0';
		mult = 0;
		len2 = _strlen(s2) - 1;
		while (len2 >= 0)
		{
			digit2 = s2[len2] - '0';
			mult += result[len1 + len2 + 1] + (digit1 * digit2);
			result[len1 + len2 + 1] = mult % 10;
			mult /= 10;
			len2--;
		}
		if (mult > 0)
			result[len1 + len2 + 1] += mult;
		len1--;
	}
	i = 0;
	while (i < len - 1)
	{
		if (result[i])
			a = 1;
		if (a)
			_putchar(result[i] + '0');
		i++;
	}
	if (!a)
		_putchar('0');
	_putchar('\n');
	free(result);
	return (0);
}
