#include "main.h"

/**
 * _isupper - Identifies upper case
 * @c: First operand
 *
 * Description: Determines if alphabet is upper case
 * Return: Always equals 1 or 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);

}
