#include "main.h"

/**
 * print_numbers - prints 0-9
 * @a: First operand
 * @b: Second operand
 *
 * Description: prints 0-9
 *
 */

void print_numbers(void)
{
	int n;

	for (n = '0' ; n <= '9' ; n++)
		_putchar(n);
	_putchar('\n');

}

