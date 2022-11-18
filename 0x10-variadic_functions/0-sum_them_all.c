#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - Function that returns the sum of all its parameters.
 * @n: Number of arguments.
 * Return: Sum of arguments.
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum_args, s;
	unsigned int i;
	va_list args;

	va_start(args, n);

	if (n == 0)
		return (0);

	sum_args = 0;
	for (i = 0 ; i < n ; i++)
	{
		s = va_arg(args, int);
		sum_args += s;
	}
	va_end(args);

	return (sum_args);
}

