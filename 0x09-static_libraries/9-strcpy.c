#include "main.h"

/**
  * *_strcpy - displays n elements of an array
  * @dest : pointer to destination
  * @src : pointer to source
  * Return: pointer to destination
  */
char *_strcpy(char *dest, char *src)
{
	char *ptr = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (ptr);
}
