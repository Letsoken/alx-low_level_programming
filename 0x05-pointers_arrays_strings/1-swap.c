#include "main.h"

/**
  * swap_int - set integer to 98
  * @a: pointer to an int
  * @b: pointer to an int
  * Return: nothing
  */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
