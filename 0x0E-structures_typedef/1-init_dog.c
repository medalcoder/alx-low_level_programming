#include "dog.h"
#include <stdio.h>
/**
 * init_dog - initializes a variable of type struct dog
 * @d: pointer to struct dog
 * @name: name of the struct dog
 * @age: dog's age
 * @owner: dog's owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
