#include "main.h"

/**
  * _strstr - displays a chess board
  *
  * @haystack: Pointer to 2d array
  * Return: nothing
  */
void print_chessboard(char (*a)[8])
{
	int i;
	int j;

	for (i = 0 ; i < 8 ; i++)
	{
		for (j = 0 ; j < 8 ; j++)
		{
			_putchar(a[i][j]);
			if (j == 7)
				_putchar('\n');
		}
	}
}
