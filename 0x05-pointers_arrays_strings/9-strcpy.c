#include "main.h"

/**
  * *_strcpy - displays n elements of an array
  * @dest : pointer to destination
  * @src : pointer to source
  * Return: nothing
  */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}

	*(dest + i + 1) = *(src + i + 1);

	return (dest);
}
