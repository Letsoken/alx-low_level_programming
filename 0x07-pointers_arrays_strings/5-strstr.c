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
	int hl;
	int nl;
	int count;

	count = 0;
	hl = 0;
	nl = 0;
	while (*(haystack + hl) != '\0')
		hl++;
	while (*(needle + nl) != '\0')
		nl++;

	while (nl <= hl - count)
	{
		if (*haystack == *needle)
		{
			hptr = haystack;
			nptr = needle;
			while (*hptr && *nptr && *hptr == *nptr)
			{
				hptr++;
				nptr++;
			}
			if (*nptr == '\0')
				return (haystack);
		}
		haystack++;
		count++;
	}

	return (NULL);
}
