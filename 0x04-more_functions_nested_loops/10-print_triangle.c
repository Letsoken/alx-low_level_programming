#include "main.h"

/**
 * print_diagonal - print lines
 * @n : First operand
 *
 * Description: prints line
 *
 */

void print_diagonal(int n)
{
	int i;
	int j;

	if (n > 0)
	{
		for (i = 0 ; i < n ; i++)
		{
			for (j = 0 ; j < n ; j++)
			{
				if (i == j)
					_putchar('#');
				if (j > i)
					_putchar('#');

			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}

