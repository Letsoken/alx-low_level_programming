#include "main.h"
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

/**
  * str_concat- create array of specific size
  * @s1: Pointer to first string
  * @s2: Pointer to second string
  * Return: Pointer to concatenated string
  */
char *str_concat(char *s1, char *s2)
{
	char *conptr;
	char *ptr;
	int l1, l2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	l1 = strlen(s1);

	l2 = strlen(s2);

	conptr = malloc((l1 + l2 + 1) * sizeof(char));

	if (conptr == NULL)
		return (NULL);
	ptr = conptr;
	while (*s1 != '\0')
		*ptr++ = *s1++;
	while (*s2 != '\0')
		*ptr++ = *s2++;
	*ptr = '\0';

	return (conptr);

}
