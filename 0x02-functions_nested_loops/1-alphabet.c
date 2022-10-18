#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - Prints the alphabet
 *
 * Description: Print the alphabets using _putchar
 * Return: No return
 */
void print_alphabet(void)
{
	int i = 'a';

	while (i <= 'z')
	{
		_putchar(i);
		i++;
	}
	putchar('\n');
}
