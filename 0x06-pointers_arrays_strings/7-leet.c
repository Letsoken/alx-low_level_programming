#include "main.h"

/**
  * leet - encodes a string
  * @s: pointer to a string
  *
  * Return: pointer to s
  */
char *leet(char *s)
{
	int i;
	int j;
	char alph[5] = {'a', 'e', 'o', 't', 'l'};
	char ALPH[5] = {'A', 'E', 'O', 'T', 'L'};
	char num[5] = {'4', '3', '0', '7', '1'};

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		for (j = 0 ; j < 5 ; j++)
		{
			if (s[i] == alph[j] || s[i] == ALPH[j])
				s[i] = num[j];
		}
	}

	return (s);
}
