#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>

/**
 * positive_or_negative - test func, print if integer is positive or negative
 * @i: integer to print to standard output
 * Return: 0 if exited, compiled without error
 */

void positive_or_negative(int i);

/**
* largest_number - function to print largest number
* @a: integer
* @b: integer
* @c: integer
* Return: 0
*/

int largest_number(int a, int b, int c);

/**
 * print_remaining_days - function to print remaining day
 * @month: integer
 * @day: integer
 * @year: integer
 * Return: 0
 */

void print_remaining_days(int month, int day, int year);

/**
 * convert_day - function to convert day
 * @month: integer
 * @day: integer
 * Return: 0
 */

int convert_day(int month, int day);

#endif /* MAIN_H */
