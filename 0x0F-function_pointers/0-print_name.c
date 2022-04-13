#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_name - prints a name
 * @name: name
 * @f: function
 */

void print_name(char *name, void (*f) (char *))
{
	if (!name || !f)
		return;
	f(name);
}
