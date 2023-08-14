#include "dog.h"

/**
 * init_dog - check the code
 * @d: the pointer
 * @name: name of dog
 * @owner: name of owner is dog
 * @age: age of dog
 *
 * Return: Always 0.
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

