#ifndef _MAIN_H_
#define _MAIN_H_

/**
 * _putchar - write character to standard output
 * @c: argument, parameter
 * Return: 0 or 1
 */

int _putchar(char c);

/**
 * reset_to_98 - takes a pointer to an int as parameter and updates value to 98
 * @n: variablr pointer or pointer variable
 */

void reset_to_98(int *n);

/**
 * swap_int - swaps values of two integers
 * @a: first integer
 * @b: second integer
 */

void swap_int(int *a, int *b);

/**
 * _strlen - returns length of a string
 * @s: string
 * Return: length of string
 */

int _strlen(char *s);

/**
 * _puts - prints a string, followed by newline to standard output
 * @str: string
 */

void _puts(char *str);

/**
 * print_rev - prints a string in reverse, folllowed by new line
 * @s: string argument, parameter
 */

void print_rev(char *s);

/**
 * rev_string - reverses a string
 * @s: string argument, parameter to reverse
 */

void rev_string(char *s);

/**
 * puts2 - prints every character of a string, start with first character
 * @str: string argument, parameter
 */

void puts2(char *str);

/**
 * puts_half - prints half a string, newline
 * @str: string argument, parameter
 */

void puts_half(char *str);

/**
 * print_array - prints n elements of an array of an integer
 * @a: array argument
 * @n: elements number n
 */

void print_array(int *a, int n);

/**
 * _strcpy - main function, copies string pointed to
 * @dest: destination
 * @src: source
 * Return: return value, pointer to dest
 */

char *_strcpy(char *dest, char *src);

/**
 * _atoi - convert a string to an integer
 * @s: string
 * Return: returns a value
 */

int _atoi(char *s);

#endif
