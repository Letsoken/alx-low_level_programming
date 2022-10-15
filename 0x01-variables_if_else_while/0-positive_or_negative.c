#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* Positive or negative */

/**
 * main - Displays if a number is positive or negative.
 *
 * Description: Displays if a number is positive of negative and less than
 * 6 or greater than 5
 * Return: Always equals 0
 */
int main(void)

{

	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/* your code goes there */
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("%d is zero\n", n);

	return (0);

}
