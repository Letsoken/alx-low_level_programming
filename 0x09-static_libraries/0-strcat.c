#include "main.h"

/**
  * _strcat - appends src string to destination string
  * @dest: pointer to destination
  * @src: pointer to source
  *
  * Return: Pointer to destination
  */
char *_strcat(char *dest, char *src)
{
	char *ptr = dest;


	while (*ptr != '\0')
		ptr++;

	while (*src != '\0')
		*ptr++ = *src++;

	*ptr = '\0';

	return (dest);
}

