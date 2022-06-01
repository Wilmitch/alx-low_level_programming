#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initializes a variable of type struct dog.
 * @d: pointer to the variable struct dog to be initialized.
 * @name: the dog's name.
 * @age: the dog's age.
 * @owner: the dog's owner name.
 *
 * Return: void.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
