#ifndef _MAIN_H_
#define _MAIN_H_

/**
 * _putchar - writes char to stdout
 * @c: character
 * Return: 0 or 1
 */

int _putchar(char c);

/**
 * malloc_checked - allocates memory using malloc
 * @b: integer
 * Return: pointer
 */

void *malloc_checked(unsigned int b);

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: integer
 * Return: pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n);

/**
 * _calloc - allocates memory for an array using malloc
 * @nmemb: member number
 * @size: array size
 * Return: pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size);

/**
 * array_range - creates an array of integers
 * @min: minimum
 * @max: maximum
 * Return: pointer to new array
 */

int *array_range(int min, int max);

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer
 * @old_size: size of alloc space
 * @new_size: new size of memory block
 * Return: value
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);

#endif
