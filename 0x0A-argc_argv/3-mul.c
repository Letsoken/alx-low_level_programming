#include <stdio.h>
#include <stdlib.h>
/**
  * main - check the code
  * @argc: argument count
  * @argv: argument vector or array
  *
  * Return: 0 with success
  */
int main(int argc, char *argv[])
{
	int mul, n1, n2;
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	n1 = atoi(argv[1]);	
	n2 = atoi(argv[2]);
	mul = n1 * n2;
	printf("%d\n", mul);
	return (0);
}
