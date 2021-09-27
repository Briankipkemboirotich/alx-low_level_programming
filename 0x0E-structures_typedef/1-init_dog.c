#include "dog.h"
#include <stdlib.h>

/**
 *init_dog - initializes variable type
 *@d: pointer
 *@name: pointer to dog name
 *@age: dogs age
 *@owner: pointer to dogs owner
 *Return: nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if(d == NULL)
		;
	else
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
