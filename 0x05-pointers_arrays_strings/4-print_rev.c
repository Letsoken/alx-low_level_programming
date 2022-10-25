#include "main.h"

/**
  * print_rev - displays string in reverse
  * @s: pointer to an char
  * Return: nothing
  */
void print_rev(char *s)
{
	int i;
	int c  = 0;
	char *e = s;

	while (*e != '\0')
	{
		e++;
		c++;
	}

	for (i = 1 ; i <= c ; i++)
	{
		_putchar(*(e - i));
	}
	_putchar('\n');
}
