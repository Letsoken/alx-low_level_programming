#include "main.h"

/**
 * _islower - Identifies lower case
 * @c: First operand
 *
 * Description: Determines if alphabet is lower case
 * Return: Always equals 1 or 0
 */
int _islower(int c)

{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);

}
