#include <stdio.h>

/* Numbers */

/**
  * main - Display single digit numbers in base 10
  *
  * Description: displays numbers 0 to 9
  * Return: Always equals 0
  */
int main(void)
{
	int n;

	for (n = 0 ; n < 10 ; n++)
		putchar((n % 10) + '0');

	putchar('\n');

	return (0);
}
