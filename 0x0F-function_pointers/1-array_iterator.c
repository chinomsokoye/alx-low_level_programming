#include <stddef.h>
/* define standard size_t */

/**
 * array_iterator - execute a function given as parameter on each element of an
 * array
 * @array: array
 * @size: array size
 * @action: pointer function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && action != NULL)
	{
		i = 0;
		while (i < size)
		{
			action(*(array + 1));
			i++;
		}
	}
}
