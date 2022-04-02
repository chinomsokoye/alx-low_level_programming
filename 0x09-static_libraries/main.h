#ifndef _MAIN_H_
#define _MAIN_H_

/**
 * _putchar - write cha to output
 * @c: character
 * Return:  value
 */

int _putchar(char c);

/**
 * _islower - lower
 * @c: character
 * Return: value
 */

int _islower(int c);

/**
 * _isalpha - alpha
 * @c: character
 * Return: value
 */

int _isalpha(int c);

/**
 * _abs - absolute
 * @n: integer
 * Return: value
 */

int _abs(int n);

/**
 * _isupper - upper
 * @c: character
 * Return: value
 */

int _isupper(int c);

/**
 * _isdigit - digit
 * @c: character
 * Return: value
 */

int _isdigit(int c);

/**
 * _strlen - string length
 * @s: string
 * Return: value
 */

int _strlen(char *s);

/**
 * _puts - puts
 * @s: stringg
 */

void _puts(char *s);

/**
 * _strcpy - string copy
 * @dest: destination
 * @src: source
 * Return: value
 */

char *_strcpy(char *dest, char *src);

/**
 * _atoi - atoi
 * @s: string
 * Return: value
 */

int _atoi(char *s);

/**
 * _strcat - string concatenation
 * @dest: destination
 * @src: source
 * Return: value
 */

char *_strcat(char *dest, char *src);

/**
 * _strncat - strncat
 * @dest: destination
 * @src: source
 * @n: integer
 * Return: value
 */

char *_strncat(char *dest, char *src, int n);

/**
 * _strncpy - strncpy
 * @dest: destination
 * @src: source
 * @n: integer
 * Return: value
 */

char *_strncpy(char *dest, char *src, int n);

/**
 * _strcmp - compare string
 * @s1: string one
 * @s2: string two
 * Return: value
 */

int _strcmp(char *s1, char *s2);

/**
 * _memset - set memory
 * @s: string
 * @b: byte
 * @n: integer
 * Return: value
 */

char *_memset(char *s, char b, unsigned int n);

/**
 * _memcpy - copy memory
 * @dest: destination
 * @src: source
 * @n: integer
 * Return: value
 */

char *_memcpy(char *dest, char *src, unsigned int n);

/**
 * _strchr - string character
 * @s: string
 * @c: character
 * Return: value
 */

char *_strchr(char *s, char c);

/**
 * _strspn - string spn
 * @s: string
 * @accept: argument
 * Return: value
 */

unsigned int _strspn(char *s, char *accept);

/**
 * _strpbrk - strpbrk
 * @s: string
 * @accept: argument
 * Return: value
 */

char *_strpbrk(char *s, char *accept);

/**
 * _strstr - string
 * @haystack: parameter
 * @needle: argument
 * Return: value
 */

char *_strstr(char *haystack, char *needle);

#endif
