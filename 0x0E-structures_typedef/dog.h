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

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

dog_t *new_dog(char *name, float age, char *owner);

void free_dog(dog_t *d);

#endif
