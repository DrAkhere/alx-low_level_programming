#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_dog - Entry point to prints the dog struct
 * @d: The pointer to the dog struct
 */

void print_dog(struct dog *d)
{
	if (d)
	{
		d->name ? (printf("Name: %s\n", d->name)) : (printf("Name: (nil)\n"));
		printf("Age: %f\n", d->age);
		d->owner ? (printf("Owner: %s\n", d->owner)) : (printf("Owner: (nil)\n"));
	}
}
