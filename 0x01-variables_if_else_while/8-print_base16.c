#include <stdio.h>

/* Hex Numbers */

/**
  * main - Display numbers in base 16
  *
  * Description: displays numbers 0 to f in base 16
  * Return: Always equals 0
  */
int main(void)
{
	int n;

	for (n = 0 ; n < 10 ; n++)
		putchar((n % 10) + '0');
	for (n = 'a' ; n <= 'f'; n++)
		putchar(n);

	printf("\n");

	return (0);
}
