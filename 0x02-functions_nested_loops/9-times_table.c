#include "main.h"

/**
 * times_table - prints 9 times table
 *
 * Description:Prints 9 times table
 */
void times_table(void)
{
	int row;
	int col;
	int ans;

	for (row = 0 ; row <= 9 ; row++)
	{
		for (col = 0 ; col <= 9 ; col++)
		{
			ans = row * col;
			if (ans < 10)
			{
				if (col == 0)
				{
					_putchar(ans % 10 + '0');
				}
				else
				{
					_putchar(' ');
					_putchar(ans % 10 + '0');
				}
			}
			else
			{
				_putchar((ans / 10) % 10 + '0');
				_putchar(ans % 10 + '0');
			}
			if (col == 9)
			{
				_putchar('\n');
			}
			else
			{	_putchar(',');
				_putchar(' ');
			}
		}
	}

}
