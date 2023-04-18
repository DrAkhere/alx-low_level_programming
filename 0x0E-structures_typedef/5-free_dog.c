#include "dog.h"
#include <stdlib.h>
/**
  * free_dog - Entry point to free any memory allocated by dog.
  * @d: The pointer to struct
  * Return: Freed space
  */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
