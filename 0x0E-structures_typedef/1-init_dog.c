#include "dog.h"

/**
 * init_dog - initializes a variable of type struct dog
 * @d: pointer to struct
 * @name: pointer to string
 * @age: age
 * @owner: pointer to string
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}