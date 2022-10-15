#include <stdio.h>

/* Alphabets */

/**
  * main - Display alphabets in lower letter and upper letters
  *
  * Description: displays lower and upper case letters
  * Return: Always equals 0
  */
int main(void)
{
	int c;

	for (c = 'a' ; c <= 'z' ; c++)
		putchar(c);

	for (c = 'A' ; c <= 'Z' ; c++)
		putchar(c);

	putchar('\n');
	return (0);
}
