#include "main.h"

/**
  * _pow_recursion - raises x to power 5
  *
  * @x: a given number
  * @y: the number x is raised to
  * Return: x to power y
  */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);

	return (x *_pow_recursion(x, y - 1));
}
