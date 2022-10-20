#include "main.h"

/**
 * print_last_digit - Prints last digit of a number
 * @n: First operand
 *
 * Description:Prints absolute values
 * Return: Always equals absolute value
 */
int print_last_digit(int n)
{
	int d = n % 10;

	if (n < 0)
		d *= -1;

	_putchar(d + '0');

	return (d);

}
