#ifndef _MAIN_H_
#define _MAIN_H_

/**
 * _putchar - writes to output
 * @c: character
 * Return: 0 or 1
 */

int _putchar(char c);

/**
 * create_array - creates an array of chars, initialize with a specific char
 * @size: array size
 * @c: character
 * Return: value
 */

char *create_array(unsigned int size, char c);

/**
 * _strdup - returns copy of a string given as parameter
 * @str: string
 * Return: pointer to newly alloc memory
 */

char *_strdup(char *str);

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: concatenated value
 */

char *str_concat(char *s1, char *s2);

/**
 * alloc_grid - returns a pointer to 2 dimensional array
 * @width: array width
 * @height: array height
 * Return: pointer
 */

int **alloc_grid(int width, int height);

/**
 * free_grid - frees 2 dimensional grid created by alloc_grid function
 * @grid: array grid
 * @height: array height
 */

void free_grid(int **grid, int height);

/**
 * argstostr - concatenates all argument of a program
 * @ac: argument count
 * @av: argument vector array
 * Return: argument concatenation
 */

char *argstostr(int ac, char **av);

/**
 * strtow - splits a string into words
 * @str: string
 * Return: split value
 */

char **strtow(char *str);

#endif
