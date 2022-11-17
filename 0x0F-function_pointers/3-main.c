#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>
/**
  * main - check the code
  * @argc: Argument count
  * @argv: Argument vector
  * Return: Always 0.
  */
int main(int argc, char *argv[])
{
	int num1, num2, res;
	char *s;

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	s = argv[2];
	if (get_op_func(s) == NULL || *(s + 1) != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if (num2 == 0 && (*s == '/' || *s == '%'))
	{
		printf("Error\n");
		exit(100);
	}

	res = (get_op_func(s))(num1, num2);
	printf("%d\n", res);
	return (0);
}
