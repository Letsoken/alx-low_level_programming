#include "main.h"

/**
  * _memset - sets memory to constant byte
  *
  * @s: Pointer
  * @b: value to be copied
  * @n: number of elements to be copied
  * Return: pointer to memory area
  */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; i < n ; i++)
		s[i] = b;
	return (s);
}
