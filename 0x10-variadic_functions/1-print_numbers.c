#include "variadic_functions.h"

/**
 * print_numbers - prints numbers followed by newline
 * @separator: string separator
 * @n: argument number
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list list;

	va_start(list, n);

	i = 0;
	while (i < n)
	{
		if (!separator)
			printf("%d", va_arg(list, int));
		else if (separator && i == 0)
			printf("%d", va_arg(list, int));
		else
			printf("%s%d", separator, va_arg(list, int));
		i++;
	}
	va_end(list);
	printf("\n");
}
