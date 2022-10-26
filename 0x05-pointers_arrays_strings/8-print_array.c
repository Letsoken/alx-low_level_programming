#include "main.h"
#include <stdio.h>

/**
  * print_array - displays n elements of an array
  * @a : pointer to an array
  * @n : number of elements of array
  * Return: nothing
  */
void print_array(int *a, int n)
{
	int i = 0;

	for (i = 0 ; i < n ; i++)
	{
		printf("%d", a[i]);
		if ((i + 1) == n)
		{
			printf("\n");
			break;
		}
		else
		{
			printf(" ,");
		}
	}
}
