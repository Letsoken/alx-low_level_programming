#include "main.h"
#include <stddef.h>

/**
  * _strchr - locates the first occurrence of character in a string
  *
  * @s: Pointer to string
  * @c: character
  * Return: pointer to destination
  */
char *_strchr(char *s, char c)
{
	while (*s != c && *s != '\0')
		s++;

	if (*s == c)
		return (s);
	else
		return (NULL);
}
