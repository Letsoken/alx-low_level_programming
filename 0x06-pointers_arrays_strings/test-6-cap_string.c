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

	for (i = 0; s[i] != '\0' ; i++)
	{
		if (i == 0)
		{
			if (s[i] >= 'a' && s[i] <= 'z')
				s[i] = s[i] - 32;
			
		}
		if (s[i] == (' ' || '\t' || '\n' || ',' || ';' || '.' || '!' || '?' || '"'
					|| '(' || ')' || '{' || '}'))
		{
			i++;

			if (s[i] >= 'a' && s[i] <= 'z')
				s[i] = s[i] - 32;
			
		}
	}
	return (s);
}
