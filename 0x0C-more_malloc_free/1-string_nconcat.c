#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat- t concatenates two strings.
 * @s1: string 1
 * @s2: string 2
 * @n: n bytes
 * Return: Returns a pointer to the newly allocated memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *conptr, *ptr;
	unsigned int i, l1, l2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	l1 = strlen(s1);
	l2 = strlen(s2);

	if (n >= l2)
		n = l2;
	conptr = malloc((l1 + n + 1) * sizeof(char));
	if (conptr == NULL)
		return (NULL);
	ptr = conptr;
	while (*s1 != '\0')
		*ptr++ = *s1++;

	i = 0;
	while (i < n)
	{
		*ptr++ = *s2++;
		i++;
	}

	*ptr = '\0';

	return (conptr);
}
