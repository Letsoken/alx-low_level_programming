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
	int mul;
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	mul = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", mul);
	return (0);
}
