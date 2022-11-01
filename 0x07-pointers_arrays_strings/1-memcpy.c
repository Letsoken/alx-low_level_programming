#include "main.h"

/**
  * _memcpy - copies memory area
  *
  * @dest: Pointer to destination
  * @src: pointer to source to be copied
  * @n: number of elements to be copied
  * Return: pointer to destination
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; i < n ; i++)
		dest[i] = src[i];
	return (dest);
}
