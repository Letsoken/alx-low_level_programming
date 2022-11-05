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
	int i;

	sum = 0;
	if (argc == 1)
		printf("%d\n", sum);

	if (argc > 1)
	for (i = 1; i < argc ; i++)
	{
		if (isdigit(atoi(argv[i])))
			sum += atoi(argv[i]);
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum);
	return (0);
}
