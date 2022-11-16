#include "function_pointers.h"
#include <stdlib.h>
#include <stddef.h>
/**
  * array_iterator - Function that executes a function.
  * @array: Array to be iterated.
  * @size: Size of an array.
  * Return: Nothing.
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL || size <= 0)
		return;

	for (i = 0 ; i < size ; i++)
	{
		action(array[i]);
	}
}
