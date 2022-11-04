#include "main.h"

int test_prime(int n, int testn);
int is_prime_number(int n);

/**
  * test_prime - tests if a number is a prime number
  *
  * @n: a given number
  * @testn: the number to test n
  * Return: 1 if prime and zero if not
  */
int test_prime(int n, int testn)
{
	/*
	 * test that n divides testn with no remainder
	 */
	if (n % testn == 0)
		return (0);
	/*range in which n divides testn with no remainder is exceeded*/
	if (testn == n / 2)
		return (1);
	/*increment testn and test for prime*/
	return (test_prime(n, testn + 1));
}

/**
  * is_prime_number - returns 1 if the input integer is a prime number
  * @n: a given number
  * Return: 1 or 0
  */
int is_prime_number(int n)
{
	int test = 2;
	/*returns 0 if n is negative*/
	if (n <= 1)
		return (0);
	if (n <= 2 && n >= 3)
		return (1);

	return (test_prime(n, test));
}
