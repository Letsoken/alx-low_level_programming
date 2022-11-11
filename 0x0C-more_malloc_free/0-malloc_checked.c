#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _realloc- Reallocates a memory block using malloc and free
 * @ptr: Pointer to the previously allocated memory
 * @old_size: Size, in bytes, of the allocated space for ptr.
 * @new_size: New size, in bytes of the new memory block
 *
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;
	unsigned int i, init_max;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (new_size == old_size)
		return (ptr);
	if (new_size > old_size)
		init_max = old_size;
	else
		init_max = new_size;

	new_ptr = malloc(new_size);

	if (new_ptr == 	NULL)
		return (NULL);
	if (ptr == NULL)
		return (new_ptr);

	for (i = 0 ; i < init_max ; i++)
		new_ptr[i] = ptr[i];

	free(ptr);
	return (new_ptr);
}



}
