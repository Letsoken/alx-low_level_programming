#include <stdio.h>

/* Numbers */

/**
  * main - Display all possible different combinations of
  * 2 two digit numbers
  *
  * Description: displays all possible different combination
  * of 2 two digits separated by commas
  * Return: Always equals 0
  */
int main(void)
{
	int i;
	int j;

	for (i = 0 ; i < 99 ; i++)
	{
		for (j = i + 1 ; j < 100 ; j++)
		{
			putchar((i / 10) + '0');
			putchar((i % 10) + '0');
			putchar(' ');
			putchar((j / 10) + '0');
			putchar((j % 10) + '0');
			if (i == 98 && j == 99)
				break;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
