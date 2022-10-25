#include "main.h"

/**
  * rev_string - reverses a string
  * @s: pointer to an char
  * Return: nothing
  */
void rev_string(char *s)
{
	int i;
	int counter  = 0;
	char *endptr = s;
	int temp;

	while (*endptr != '\0')
	{
		endptr++;
		counter++;
	}

	for (i = 1 ; i <= counter ; i++)
	{
		if ((s + i + 1) > (e -1)
			break;

		temp = *(endptr - i);
		*(endptr - i) = *(s + i - 1);
		*(s + i -1) = temp
	}
	_putchar('\n');
}
