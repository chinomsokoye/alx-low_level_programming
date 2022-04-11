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
	i = 0;
	while (name[i] != '\0')
	{
		len++;
		i++;
	}
	leng = 0;
	i = 0;
	while (owner[i] != '\0')
	{
		leng++;
		i++;
	}
	ndog = malloc(sizeof(dog_t));
	if (ndog == NULL)
		return (NULL);
	a = malloc((len + 1) * sizeof(char));
	if (a == NULL)
	{
		free(ndog);
		return (NULL);
	}
	i = 0;
	while (i < len)
	{
		a[i] = name[i];
		i++;
	}
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
	i = 0;
	while (i < leng)
	{
		b[i] = owner[i];
		i++;
	}
	b[i] = '\0';
	ndog->owner = b;
	return (ndog);
}
