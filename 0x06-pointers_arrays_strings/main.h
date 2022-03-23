#ifndef _MAIN_H_
#define _MAIN_H_

/**
 * _putchar - write character to standard output
 * @c: character argument
 * Return: 0 or 1
 */

int _putchar(char c);

/**
 * _strcat - concatenates two strings
 * @dest: string destination
 * @src: string concat source
 * Return: pointer to string dest
 */

char *_strcat(char *dest, char *src);

/**
 * _strncat - concatenates two strings
 * @dest: string destination
 * @src: string concat source
 * @n: number, amount
 * Return: pointer to string dest
 */

char *_strncat(char *dest, char *src, int n);

/**
 * _strncpy - copies a string
 * @dest: destination
 * @src: source
 * @n: amount, number
 * Return: value
 */

char *_strncpy(char *dest, char *src, int n);

/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 * Return: integer value
 */

int _strcmp(char *s1, char *s2);

/**
 * reverse_array - reverse the content of an array of integers
 * @a: array element
 * @n: number, amount
 */

void reverse_array(int *a, int n);

/**
 * string_toupper - changes lowercase letters to uppercase in strings
 * @s: string argument
 * Return: value string
 */

char *string_toupper(char *s);

/**
 * cap_string - capitalizes all words of a string
 * @s: string argument
 * Return: value string
 */

char *cap_string(char *s);

/**
 * leet - encodes a string
 * @s: string argument
 * Return: string value
 */

char *leet(char *s);

/**
 * rot13 - encodes a string
 * @s: string to encode
 * Return: character value
 */

char *rot13(char *s);

/**
 * print_number - prints an integer
 * @n: integer to print
 */

void print_number(int n);

/**
 * infinite_add - add two numbers
 * @n1: first integer
 * @n2: second integer
 * @r: buffer
 * @size_r: buffer size
 * Return: pointer to result
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r);

/**
 * print_buffer - prints a buffer
 * @b: buffer
 * @size: size
 * Return: value
 */

void print_buffer(char *b, int size);

#endif
