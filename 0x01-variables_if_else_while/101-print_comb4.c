#include <stdio.h>

/* Numbers */

/**
  * main - Display all possible different combinations of 3 digits
  *
  * Description: displays numbersall possible different combination
  * of 3 digits separated by commas
  * Return: Always equals 0
  */
int main(void)
{
	int i;
	int j;
	int k;

	for (i = 0 ; i < 10 ; i++)
	{
		for (j = 1 ; j < 10 ; j++)
		{
			for (k = 2 ; k < 10 ; k++)
			{
				if (i < j && j < k)
				{
					putchar((i % 10) + '0');
					putchar((j % 10) + '0');
					putchar((k % 10) + '0');
					if (i == 7 && j == 8 && k == 9)
						break;
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
