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
		if (counter % 2 == 0)
		{
			if (i > (counter / 2))
				break;
		}
		if (counter % 2 == 1)
		{
			if (i > ((counter / 2) + 1))
				break;
		}
		temp = *(endptr - i);
		*(endptr - i) = *(s + i - 1);
		*(s + i - 1) = temp;
	}
}
