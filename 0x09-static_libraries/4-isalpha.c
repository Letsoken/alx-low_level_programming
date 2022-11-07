#include "main.h"

/**
 * _isalpha - Identifies alphabets
 * @c: First operand
 *
 * Description: Determines if character is an  alphabet
 * Return: Always equals 1 or 0
 */
int _isalpha(int c)

{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);

}
