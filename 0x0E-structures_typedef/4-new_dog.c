#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - Entry point to creates a new struct of type dog
 * @name: The struct new name
 * @age: struct new age
 * @owner: struct new owner
 * Return: returns pointer to buffer of datatype dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int namelen, ownerlen, x;
	dog_t *doggy;

	namelen = ownerlen = 0;
	while (name[namelen++])
		;
	while (owner[ownerlen++])
		;
	doggy = malloc(sizeof(dog_t));
	if (doggy == NULL)
		return (NULL);

	doggy->name = malloc(namelen * sizeof(doggy->name));
	if (doggy == NULL)
		return (NULL);
	for (x = 0; x < namelen; x++)
		doggy->name[x] = name[x];

	doggy->age = age;

	doggy->owner = malloc(ownerlen * sizeof(doggy->owner));
	if (doggy == NULL)
		return (NULL);
	for (x = 0; x < ownerlen; x++)
		doggy->owner[x] = owner[x];
	return (doggy);
}
