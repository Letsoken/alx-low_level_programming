#include "main.h"

/**
  * rot13 - encodes a string
  * @s: pointer to a string
  *
  * Return: pointer to s
  */
char *rot13(char *s)
{
	int i;
	int j;
	char head[13] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h'
			, 'i', 'j', 'k', 'l', 'm'};
	char tail[13] = {'n', 'o', 'p', 'q', 'r', 's', 't', 'u'
			, 'v', 'w', 'x', 'y', 'z'};

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		for (j = 0 ; j < 13 ; j++)
		{
			if (s[i] == head[j])
			{
				s[i] = tail[j];
				continue;
			}
			if (s[i] == tail[j])
			{
				s[i] = head[j];
				continue;
			}
			if (s[i] == (head[j] - 32))
			{
				s[i] = (tail[j] - 32);
				continue;
			}
			if (s[i] == (tail[j] - 32))
			{
				s[i] = (head[j] - 32);
			}

		}
	}

	return (s);
}
