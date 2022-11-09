#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
  * _strdup - copy string to a newly allocated space in memory
  * @str: string to copy
  *
  * Return: Pointer to copy of string
  */
char *_strdup(char *str)
{
	char *dup;
	int i, l;

	if (str == NULL)
		return (NULL);

	l = strlen(str);

	dup = malloc((l + 1) * sizeof(char));

	if (dup == NULL)
		return (NULL);
	for (i = 0 ;  i < l ; i++)
		dup[i] = str[i];
	dup[i] = '\0';
	return (dup);
}
