#include "main.h"
#include <stdio.h>

/**
  * print_diagsums - displays sumof diagonals of a square matrix
  *
  * @a: Pointer to 2d array
  * @size: size of square 2d array
  * Return: nothing
  */
void print_diagsums(int *a, int size)
{
	int i, n, sum_diag1, sum_diag2;

	n = size * size;
	sum_diag1 = 0;
	sum_diag2 = 0;
	for (i = 0 ; i < n ; i++)
	{
		if (i % (size + 1) == 0)
			sum_diag1 =  a[i];
		if (i % (size - 1) == 0)
			sum_diag2 += a[i];
	}
	printf("%d, %d\n", sum_diag1, sum_diag2);
}
