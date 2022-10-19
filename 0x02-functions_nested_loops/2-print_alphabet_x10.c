#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - Prints the alphabet
 *
 * Description: Print the alphabets using _putchar
 * Return: No return
 */
void print_alphabet_x10(void)
{
	int i = 0;
	int j;

	while (i < 10)
	{
		j = 'a';

		while (j <= 'z')
		{
			_putchar(j);
			j++;
		}
		_putchar('\n');
		i++;
	}
}
