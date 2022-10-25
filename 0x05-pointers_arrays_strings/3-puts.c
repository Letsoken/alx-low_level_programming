#include "main.h"

/**
  * _puts - displays string
  * @s: pointer to an char
  * Return: nothing
  */
void _puts(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s);
		s++;
	}
	_putchar('\n');
}
