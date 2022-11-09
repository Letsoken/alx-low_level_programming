#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
  * create_array- create array of specific size
  * @size: size of array
  * @c: Character
  * Return: Pointer to array
  */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
		return (NULL);

	array = malloc(size * sizeof(char));

	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = c;

	return (array);

}
