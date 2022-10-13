#include <stdio.h>

/**
 * main - Finds the size of datatypes
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char char_type;
	int int_type;
	long int long_int_type;
	long long int long_long_int_type;
	float float_type;

	printf("Size of a char: %zu byte(s)\n", sizeof(char_type));
	printf("Size of an int: %zu byte(s)\n", sizeof(int_type));
	printf("Size of a long int: %zu byte(s)\n", sizeof(long_int_type));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(long_long_int_type));
	printf("Size of a float: %zu byte(s)\n", sizeof(float_type));
	return (0);
}
