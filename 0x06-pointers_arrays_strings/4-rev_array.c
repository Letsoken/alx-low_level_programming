#include "main.h"

/**
  * reverse_array - reverse an array
  * @a: pointer to an array
  * @n: number of elements in array
  * Return: nothing
  */
void reverse_array(int *a, int n)
{
	int *ptr1 = a;
	int *ptr2 = a + n - 1;
	int temp;

	while (ptr1 < ptr2)
	{
		temp = *ptr1;
		*ptr1 = *ptr2;
		*ptr2 = temp;
		ptr1++;
		ptr2--;
	}
}
