#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - dog structure
 * @name: dog name, first member
 * @age: dog age, second member
 * @owner: dog owner, third member
 * Description: more description
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - typedef of dog structure
 */

typedef struct dog dog_t;

/**
 * init_dog - initializes a variable of type struct dog
 * @d: struct dog
 * @name: name
 * @age: age
 * @owner: owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner);

/**
 * print_dog - prints struct dog
 * @d: struct dog
 */

void print_dog(struct dog *d);

/**
 * new_dog - creates a new dog
 * @name: name
 * @age: age
 * @owner: owner
 * Return: NULL if fails
 */

dog_t *new_dog(char *name, float age, char *owner);

/**
 * free_dog - frees dog
 * @d: struct dog
 */

void free_dog(dog_t *d);

#endif
