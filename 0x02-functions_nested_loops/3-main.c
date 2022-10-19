#include "main.h"

/**
 * main - Indicates that alphabets is or isn't lower case
 *
 * Description: prints 1 if lower and 0 if not
 * Return: Always equals 0
 */
int main(void)

{
	int r;

	r = _islower('H');
	_putchar(r + '0');
	r = _islower('o');
	_putchar(r + '0');
	r = _islower(108);
	_putchar(r + '0');
	_putchar('\n');

	return (0);

}
