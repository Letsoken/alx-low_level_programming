#include "dog.h"
#include <stdlib.h>

/**
  * free_dog - Function that frees dogs
  * @d: pointer to a dog
  * Return: Non
  */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->name);
	free(d->owner);
	free(d);
}
