#include "lists.h"

/**
  * list_len - Prints all the elements of a list_t list.
  * @h: The list_t list.
  *
  * Return: The number of nodes in h.
  */

size_t list_len(const list_t *h)
{
	size_t i;

	for (i = 0 ; h ; i++)
	{
		h = h->next;
	}

	return (i);
}




