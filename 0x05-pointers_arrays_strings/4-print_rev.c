#include "main.h"

/**
  * print_rev - displays string in reverse
  * @s: pointer to an char
  * Return: nothing
  */
void print_rev(char *s)
{
	int i;
	int counter  = 0;

	char *endptr = s;

	while (*endptr != '\0')
	{
		endptr++;
		counter++;
	}

	for (i = 1 ; i <= counter ; i++)
	{
		_putchar(*(endptr - i));
	}
	_putchar('\n');
}
