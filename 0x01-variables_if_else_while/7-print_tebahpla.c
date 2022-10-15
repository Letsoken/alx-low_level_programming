#include <stdio.h>

/* stebahpla */

/**
  * main - Display lower case alphabets in reverse
  *
  * Description: displays lower case letters in reverse with a new line
  * Return: Always equals 0
  */
int main(void)
{
	int c;

	for (c = 'z' ; c >= 'a' ; c--)
		putchar(c);

	putchar('\n');

	return (0);
}
