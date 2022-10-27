#include "main.h"

/**
  * cap_string - capitalize every word
  * @s: pointer to a string
  *
  * Return: pointer to s
  */
char *cap_string(char *s)
{
	int i = 0;

	while (s[i])
	{
		while (!(s[i] >= 'a' && s[i] <= 'z'))
			i++;

		if (s[i - 1] == (' ' || '\t' || '\n' || ',' || ';' || '.' || '!'
					|| '?' || '"' || '(' || ')' || '{' || '}') || i == 0)
			s[i] -= 32;
		i++;
	}

	return (s);


}
