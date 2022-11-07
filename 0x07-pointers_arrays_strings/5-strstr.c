#include "main.h"
#include <stddef.h>
#include <stdio.h>

int strcomp(char *s1, char *s2);
int strlength(char *s);
char *_strstr(char *haystack, char *needle);

/**
 * strncomp - compare elements of string s1 and s2
 * @s: pointer to string 1
 * @t: pointer to string 2
 * @n: size of characters to check
 * Return: difference between strings
 */
int strncomp(const char *s, const char *t, int n)

{
	while (*s && n && (*s == *t))
	{
		s++;
		t++;
		n--;
	}
	return (*(unsigned char *)s - *(unsigned char *)t);
}

/**
  * strlength - determine length of string
  * @s: pointer to an char
  * Return: index i
 */
int strlength(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		s++;
		i++;
	}
	return (i);
}

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
	char *ptr;

	ptr = haystack;

	while (*ptr)
	{
		if (strncomp(ptr, needle, strlength(needle)) == 0)
			return (ptr);
		ptr++;
	}

	return (NULL);
}
