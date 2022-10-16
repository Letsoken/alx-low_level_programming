#include <stdio.h>

/* Numbers */

/**
  * main - Display all possible different combinations of two digits
  *
  * Description: displays numbersall possible different combination
  * of two digits separated by commas
  * Return: Always equals 0
  */
int main(void)
{
	int i;
	int j;

	for (i = 0 ; i < 10 ; i++)
	{
		for (j = 1 ; j < 10 ; j++)
		{
			if (i < j)
			{
				putchar((i % 10) + '0');
				putchar((j % 10) + '0');
				if (i == 8 && j == 9)
					break;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
