#include "main.h"

/**
  * rot13 - encodes a string
  * @s: pointer to a string
  *
  * Return: pointer to s
  */
char *rot13(char *s)
{
	int i;
	int j;
	char Alph[56] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'
			, 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T'
			, 'U', 'V', 'W', 'X', 'Y', 'Z', 'a', 'b', 'c', 'd'
			, 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o'
			, 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
	char Ciph[56] = {'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W'
			, 'X', 'Y', 'Z'
			, 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I'
			, 'J', 'K', 'L', 'M'
			, 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v'
			, 'w', 'x', 'y', 'z'
			, 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i'
			, 'j', 'k', 'l', 'm'};


	for (i = 0 ; s[i] != '\0' ; i++)
	{
		for (j = 0 ; j < 56 ; j++)
		{
			if (s[i] == Alph[j])
			{
				s[i] = Ciph[j];
			}

		}
	}

	return (s);
}
