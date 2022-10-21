#include "main.h"

/**
 * _isdigit - Identifies digits
 * @c: First operand
 *
 * Description: Determines if character is digit
 * Return: Always equals 1 or 0
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);

}

