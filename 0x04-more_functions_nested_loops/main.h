#ifndef _MAIN_H_
#define _MAIN_H_

/**
 * _putchar - write character c to standard output
 * @c: argument, parameter, character to check
 * Return: 0 or 1
 */

int _putchar(char c);

/**
 * _isupper - check for uppercase character
 * @c: argument, parameter
 * Return: 0 or 1
 */

int _isupper(int c);

/**
 * _isdigit - check for a digit through 0-9
 * @c: argument. parameter, character to check
 * Return: 0 or 1
 */

int _isdigit(int c);

/**
 * mul - multiplies two integers
 * @a: first integer
 * @b: second integer
 * Return: result
 */

int mul(int a, int b);

/**
 * print_numbers - prints the number 0-9
 */

void print_numbers(void);

/**
 * print_most_numbers - print number 0-9
 */

void print_most_numbers(void);

/**
 * more_numbers - print x10 numbers 0-14
 */

void more_numbers(void);

/**
 * print_line - draw a straight line in terminal
 * @n: integer character
 */

void print_line(int n);

/**
 * print_diagonal - draw a diagonal line
 * @n: integer, character
 */

void print_diagonal(int n);

/**
 * print_square - prints a square
 * @size: size of square
 */

void print_square(int size);

/**
 * print_triangle - print a triangle
 * @size: size of triangle
 */

void print_triangle(int size);

/**
 * print_number - print an integer
 * @n: integer character
 */

void print_number(int n);

#endif
