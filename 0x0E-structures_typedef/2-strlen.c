#include "main.h"

/**
  * _strlen - determine length of string
  * @s: pointer to an char
  * Return: index i
  */
int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		s++;
		i++;
	}
	return (i);
}
