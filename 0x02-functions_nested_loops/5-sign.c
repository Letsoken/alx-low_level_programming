#include "main.h"

/**
 * print_sign - Prints sign
 * @n: First operand
 *
 * Description: Determines if number is +ve or -ve or 0
 * Return: Always equals 1 or 0 or -1
 */
int print_sign(int n)
{
	int r;

	if (n < 0)
	{
		r = -1;
		_putchar('-');
	}
	else if (n > 0)
	{
		r = 1;
		_putchar('+');
	}
	else
	{
		r = 0;
		_putchar('0');
	}
	return (r);
}
