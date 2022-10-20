#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Print all natural numbers to 98
 * @n: First operand
 *
 * Description: print natural numbers from n to 98
 * Return: c
 */
void print_to_98(int n)
{
	if  (n > 98)
	{
		while (n >= 98)
		{
			printf("%d, ", n);
			n--;
		}
	}
	else if (n < 98)
	{
		while (n <= 98)
		{
			printf("%d, ", n);
			n++;
		}
	}
	else
	{
		printf("%d", n);
	}
	_putchar('\n');
}
