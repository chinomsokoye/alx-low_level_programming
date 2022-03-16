#ifndef _MAIN_H
#define _MAIN_H

#include <stdio.h>

/**
 * positive_or_negative - test function to print if integer is positive
 * or negative numbers
 * @i: integer
 */

void positive_or_negative(int i);

/**
* largest_number - returns the largest of 3 number
* @a: first integer
* @b: second integer
* @c: third integer
* Return: largest number
*/

int largest_number(int a, int b, int c);

/**
 * print_remaining_days - takes a date and prints how many days are
 * left in the year, taking leap year into account
 * @month: month in number format
 * @day: day of month
 * @year: year
 * Return: void
 */

void print_remaining_days(int month, int day, int year);

/**
 * convert_day - convert day of month to day of year, without accounting
 * for leap year
 * @month: month in number format
 * @day: day of month
 * Return: day of year
 */

int convert_day(int month, int day);

#endif /* _MAIN_H */
