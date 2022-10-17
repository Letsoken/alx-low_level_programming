#include <stdio.h>

/* Alphabets */

/**
  * main - Display alphabets in lower letter except a and q
  *
  * Description: displays only lower case letters except q and e
  * Return: Always equals 0
  */
int main(void)
{
	int c;

	for (c = 'a' ; c <= 'z' ; c++)
		if (c != 'e' && c != 'q')
			putchar(c);

	putchar('\n');

	return (0);
}
