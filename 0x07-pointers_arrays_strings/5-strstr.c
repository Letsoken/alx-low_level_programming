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
	int i;
	char *hptr;
	char *nptr;
	int counter;
	int hl = 0;
	int nl = 0;

	while (haystack[hl] != '\0')
		hl++;
	while (needle[nl] != '\0')
		nl++;

	for (i = 0 ; i <= (hl - nl) ; i++)
	{
		if (haystack[i] == needle[0])
		{
			hptr = &haystack[i];
			nptr = needle;
			counter = 0;
			while (*hptr == *nptr && *nptr != '\0')
			{
				hptr++;
				nptr++;
				counter++;
			}
			if (counter == nl)
				return (&haystack[i]);
		}
	}
	return (NULL);
}
