#ifndef _MAIN_H_
#define _MAIN_H_

/**
 * _putchar - writes character c to standard output
 *@c: character output, input
 * Return: 1 or -1
 */

int _putchar(char c);

/**
 * _puts_recursion - prints a string, followed by newline
 * @s: string
 */

void _puts_recursion(char *s);

/**
 * _print_rev_recursion - prints a string in reverse
 * @s: string
 */

void _print_rev_recursion(char *s);

/**
 * _strlen_recursion - returns the length of a string
 * @s: string character
 * Return: on success
 */

int _strlrn_recursion(char *s);

/**
 * factorial - returns factorial of a given number
 * @n: integer number
 * Return: -1 or factorial
 */

int factorial(int n);

/**
 * _pow_recursion - returns value of x raised to power y
 * @x: integer argument, parameter
 * @y: power factor
 * Return: inter value
 */

int _pow_recursion(int x, int y);

/**
 * _sqrt_recursion - returns natural square root of a number
 * @n: integer number to root
 * Return: integer value
 */

int _sqrt_recursion(int n);

/**
 * is_prime_number - returns 1 if input int is prime num, otherwise return 0
 * @n: integer argument, parameter
 * Return: 1 or 0
 */

int is_prime_number(int n);

/**
 * is_palindrome - returns 1 if string is palindrom, 0 otherwise
 * @s: character string
 * Return: 0 or 1
 */

int is_palindrome(char *s);

/**
 * wildcmp - compares two strings, returns 1 if identical, 0 otherwsie
 * @s1: first string
 * @s2: second string
 * Return: 0 or 1
 */

int wildcmp(char *s1, char *s2);

#endif
