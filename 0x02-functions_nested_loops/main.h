#ifndef _MAIN_H_
#define _MAIN_H_

/**
 * _putchar - write to standard output
 * @c: character to print to standard output
 * Return: 0 if exited, compiled without error
 * On error, -1 returned, error set to appropriately
 */

int _putchar(char c);

/**
 * print_alphabet - function to print alphabet to standard output
 */

void print_alphabet(void);

/**
 * print_alphabet_x10 - function to print alphabet x10 to standard output
 */

void print_alphabet_x10(void);

/**
 * _islower - prints if c is lower case
 * @c: character to print
 * Return: 0 or 1 if exited, compiled
 */

int _islower(int c);

/**
 * _isalpha - prints if character is alphabet
 * @c: character to print
 * Return: 1 or 0
 */

int _isalpha(int c);

/**
 * print_sign - prints a sign based on n
 * @n: integer to input
 * Return: 1 or 0 or -1
 */

int print_sign(int n);

/**
 * _abs - gives absolute value
 * @int: integer
 * Return: integer or abs value of int
 */

int _abs(int);

/**
 * print_last_digit - prints last digit
 * @int: integer to input
 * Return: last digit of integer
 */

int print_last_digit(int);

/**
 * jack_bauer - jack bauer countdown
 *
 */

void jack_bauer(void);

/**
 * times_table - times table
 *
 */

void times_table(void);

/**
 * add - add integers, return result
 * @int: integers to add up
 * Return: return sum of integers
 */

int add(int, int);

/**
 * print_to_98 - prints to standard output 0-98
 * @n: integer to start with
 *
 */

void print_to_98(int n);

/**
 * print_times_table - print to standard output, times table
 * @n: integer to start table with
 *
 */

void print_times_table(int n);

#endif
