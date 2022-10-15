#include <stdio.h>

/* Alphabets */

/**
  * main - Display alphabets in lower letter
  *
  * Description: displays only lower case letters with a new line
  * Return: Always equals 0
  */
int main(void)
{
	int c;

	for (c = 'a' ; c <= 'z' ; c++)
		putchar(c);

	putchar('\n');

	return (0);
}
