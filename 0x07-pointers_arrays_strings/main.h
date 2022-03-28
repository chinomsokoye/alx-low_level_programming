#ifndef _MAIN_H_
#define _MAIN_H_

/**
 * _putchar - writes to standard output
 * @c: character output
 * Return: 0 or 1
 */

int _putchar(char c);

/**
 * _memset - fills memory with constant byte
 * @s: string character
 * @b: byte character
 * @n: integer amount, number
 * Return: pointer to memory area
 */

char *_memset(char *s, char b, unsigned int n);

/**
 * _memcpy - copies memory area
 * @dest: memory area destination
 * @src: memory area source
 * @n: integer amount, number
 * Return: pointer to destination
 */

char *_memcpy(char *dest, char *src, unsigned int n);

/**
 * _strchr - locates a character in a string
 * @s: string
 * @c: character
 * Return: pointer to character first occurrence
 */

char *_strchr(char *s, char c);

/**
 * _strspn - gets the length of a prefix substring
 * @s: string
 * @accept: byte to accept
 * Return: number of bytes
 */

unsigned int _strspn(char *s, char *accept);

/**
 * _strpbrk - searches a string for any set of bytes
 * @s: string
 * @accept: string to accept
 * Return: pointer to byte
 */

char *_strpbrk(char *s, char *accept);

/**
 * _strstr - locates a substring
 * @haystack: string
 * @needle: substring
 * Return: pointer tp substring beginning
 */

char *_strstr(char *haystack, char *needle);

/**
 * print_chessboard - prints the chessboard
 * @a: character output to standard output
 */

void print_chessboard(char (*a)[8]);

/**
 * print_diagsums - prints sum of two diagonals of a squared matrix of integers
 * @a: arrays
 * @size: array size
 */

void print_diagsums(int *a, int size);

/**
 * set_string - sets the value of a pointer to a character
 * @s: string character
 * @to: pointer, sets to
 */

void set_string(char **s, char *to);

#endif
