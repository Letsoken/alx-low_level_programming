#include "main.h"

int get_sqrt(int n, int root);
int _sqrt_recursion(int n);

/**
  * get_sqrt - tests and returns the square root of n
  *
  * @n: a given number
  * @root: the root to be tested
  * Return: the natural square root of a number
  */
int get_sqrt(int n, int root)
{
	/*test for square root*/
	if ((root * root) == n)
		return (root);
	/*the natural square root can't be found at this range*/
	if (root == n / 2)
		return (-1);
	/*increment root and test for squareroot*/
	return (get_sqrt(n, root + 1));
}

/**
  * _sqrt_recursion - returns the square root of a number
  * @n: a given number
  * Return: the natural square root of a number
  */
int _sqrt_recursion(int n)
{
	int root = 0;
	/*returns -1 if n is negative*/
	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);

	return (get_sqrt(n, root));
}
