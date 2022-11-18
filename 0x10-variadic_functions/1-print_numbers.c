#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - Function that returns the sum of all its parameters.
 * @separator: String to be printed between numbers
 * @n: Number of arguments.
 * Return: None
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);

	if (n == 0)
		return;

	for (i = 0 ; i < n; i++)
	{
		printf("%d", va_arg(args, int));

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);

	}

	va_end(args);

	printf("\n");

}

