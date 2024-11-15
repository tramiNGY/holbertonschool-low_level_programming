#ifndef DOG_H
#define DOG_H

/**
 * struct dog - informations about dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner name of dog
*/

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - new name for the type struct dog
*/

typedef struct dog dog_t;

/**
 * prototypes
*/

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);


#endif

