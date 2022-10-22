#include "main.h"

/**
 * print_most_numbers - prints 0-9 except 2 and 4
 *
 * Description: prints 0-9
 *
 */

void print_most_numbers(void)
{
	int n;

	for (n = '0' ; n <= '9' ; n++)
	{
		if (n != '2' && n != '4')
		{
			_putchar(n);
		}
	}
	_putchar('\n');

}

