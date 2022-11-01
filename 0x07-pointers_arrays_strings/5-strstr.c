#include "main.h"
#include <stddef.h>

/**
  * _strstr - finds the first occurrence of the substring in string
  *
  * @haystack: Pointer to string
  * @needle: pointer substring
  * Return: pointer at first occurence of substring
  *
  */
char *_strstr(char *haystack, char *needle)
{
	char *hptr;
	char *nptr;

	while (*haystack != '\0')
	{
		if (*haystack == *needle)
		{
			hptr = haystack;
			nptr = needle;
			while (*hptr == *nptr && *nptr != '\0' && *hptr != '\0')
			{
				hptr++;
				nptr++;
			}
			if (*nptr == '\0')
				return (haystack);
		}
		haystack++;
	}

	return (NULL);
}
