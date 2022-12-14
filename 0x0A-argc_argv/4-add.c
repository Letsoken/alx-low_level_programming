#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
  * main - check the code
  * @argc: argument count
  * @argv: argument vector or array
  *
  * Return: 0 with success
  */
int main(int argc, char *argv[])
{
	int sum;
	int i, j;

	sum = 0;

	for (i = 1; i < argc ; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
