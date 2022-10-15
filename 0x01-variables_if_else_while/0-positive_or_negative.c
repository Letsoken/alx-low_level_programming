#include <stdlib.h>
#include <time.h>

/* Positive or negative - Displays if a random number is positive or negative */

/* betty style doc for function main goes there */

int main(void)

{

	int n;

	rand(time(0));
	n = rand() - RAND_MAX / 2;

	/* your code goes there */	
	if (n > 0)
		printf("%d is positive\n", n);	
	else if (n < 0)
		printf("%d is negative\n", n);
	}else
		printf("%d is 0\n", n);

	return (0);

}
