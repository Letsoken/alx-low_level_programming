#include "main.h"

/**
 * main - Indicates if character is an alphabet
 *
 * Description: prints 1 if true and 0 if false
 * Return: Always equals 0
 */
int main(void)

{
	int r;

	r = _isalpha('H');
	_putchar(r + '0');
	r = _isalpha('o');
	_putchar(r + '0');
	r = _isalpha(108);
	_putchar(r + '0');
	r = _isalpha(';');
	_putchar(r + '0');
	_putchar('\n');

	return (0);

}
