#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocate a memory block using malloc and free
 * @ptr: pointer
 * @old_size: size of alloc
 * @new_size: size or realloc
 * Return: pointer to new memory block
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ptrn;
	char *ptro;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}
	if (!ptr)
		return (malloc(new_size));
	ptrn = malloc(new_size);
	if (!ptrn)
		return (NULL);
	ptro = ptr;
	if (new_size < old_size)
	{
		i = 0;
		while (i < new_size)
		{
			ptrn[i] = ptro[i];
			i++;
		}
	}
	free(ptr);
	return (ptrn);
}
