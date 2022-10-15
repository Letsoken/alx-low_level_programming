#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* Last Digit */

/**
 * main - Prints the last digit of a random number
 *
 * Description: The function wll display the last digit and whetther it is
 * greater than 5, less than 6 or equals to 0
 * Return: Always 0 (Success)
 */
int main(void)

{
	int n;
	int d;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/* your code goes there */
	d = n % 10;

	if (d != 0)
	{
		if (d > 5)
			printf("Last digit of %d is %d and is greater than 5\n", n, d);
		else
			printf("Last digit of %d is %d and is less than 6 and not 0\n",
					n, d);
	} else
		printf("Last digit of %d is %d and is 0\n", n, d);

	return (0);
}
