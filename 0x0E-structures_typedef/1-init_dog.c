#include "dog.h"
#include <stdlib.h>
 /**
  * init_dog - Entry point to define dog data
  * @d: dog identity
  * @name: name of dog
  * @age: age of dog
  * @owner: name of owner of dog
  */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
