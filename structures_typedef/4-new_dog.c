#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner name
 * Return: newdog struct
 * Remark: Added copy of name and owner stored in a allocated memory
*/

dog_t *new_dog(char *name, float age, char *owner)
{
int i, length1, length2;
dog_t *newdog;

length1 = 0;
length2 = 0;

while (name[length1] != '\0')
	length1++;

while (owner[length2] != '\0')
	length2++;

newdog = malloc(sizeof(dog_t));

if (newdog == NULL)
	return (NULL);

newdog->name = malloc(sizeof(char) * (length1 + 1));
newdog->owner = malloc(sizeof(char) * (length2 + 1));

if (newdog->name == NULL || newdog->owner == NULL)
{
	free(newdog->name);
	free(newdog->owner);
	free(newdog);
	return (NULL);
}

for (i = 0; i < length1; i++)
	newdog->name[i] = name[i];
newdog->name[length1] = '\0';

for (i = 0; i < length2; i++)
	newdog->owner[i] = owner[i];
newdog->owner[length2] = '\0';

newdog->age = age;

return (newdog);
}
