#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"

/* Positive or negative */

/**
 * main - Displays if a number is positive or negative.
 *
 * Description: Displays if a number is positive of negative and less than
 * 6 or greater than 5
 * Return: Always equals 0
 */
void positive_or_negative(int i)

{

	/* your code goes there */
	if (i > 0)
		printf("%d is positive\n", i);
	else if (i < 0)
		printf("%d is negative\n", i);
	else
		printf("%d is zero\n", i);



}
