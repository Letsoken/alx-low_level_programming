#include "main.h"

/**
  * reset_to_98 - set integer to 98
  * @n: a pointer to the integer
  *
  * Return: pointer n
  */
int *reset_to_98(int *n)
{
	
	*(n + 2) = 98;

	return (n);
}
