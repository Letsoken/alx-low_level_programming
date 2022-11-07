#include "main.h"

/**
  * _strncat - appends n number of elements from source to destination
  * @dest: pointer to destination
  * @src: pointer to source
  * @n: number of elements from source to be appended to destination
  *
  * Return: Pointer to destination
  */
char *_strncat(char *dest, char *src, int n)
{
	char *ptr = dest;
	int i;

	while (*ptr != '\0')
		ptr++;

	for (i = 0 ; i < n && *src != 0 ; i++)

		*ptr++ = *src++;

	*ptr = '\0';

	return (dest);
}

