#include "main.h"
#include <stddef.h>

/**
  * _strpbrk - gets pointer at first occurence of common byte
  *
  * @s: Pointer to string
  * @accept: pointer substring
  * Return: pointer at first occurence of common byte
  *
  */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		for (j = 0 ; accept[j] != '\0' ; j++)
		{
			if (s[i] == accept[j])

				return (&s[i]);
		}
	}
	return (NULL);
}
