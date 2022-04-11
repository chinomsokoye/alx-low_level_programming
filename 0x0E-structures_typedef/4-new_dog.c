#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * new_dog - creates a new dog
 * @name: name
 * @age: age
 * @owner: owner
 * Return: value
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int i, len, leng;
	dog_t *ndog;
	char *a, *b;

	len = 0;
	for (i = 0; name[i] != '\0'; i++)
		len++;
	leng = 0;
	for (i = 0; owner[i] != '\0'; i++)
		leng++;
	ndog = malloc(sizeof(dog_t));
	if (ndog == NULL)
		return (NULL);
	a = malloc((len + 1) * sizeof(char));
	if (a == NULL)
	{
		free(ndog);
		return (NULL);
	}
	for (i = 0; i < len; i++)
		a[i] = name[i];
	a[i] = '\0';
	ndog->name = a;
	ndog->age = age;
	b = malloc((leng + 1) * sizeof(char));
	if (b == NULL)
	{
		free(a);
		free(ndog);
		return (NULL);
	}
	for (i = 0; i < leng; i++)
		b[i] = owner[i];
	b[i] = '\0';
	ndog->owner = b;
	return (ndog);
}
