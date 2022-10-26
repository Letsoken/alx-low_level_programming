#include "main.h"

/**
  * puts2 - displays every other string
  * @s: pointer to an char
  * Return: nothing
  */
void puts2(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(*(s + i));
		}
		i++;
	}
	_putchar('\n');
}
