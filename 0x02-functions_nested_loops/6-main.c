#include <stdio.h>
#include "main.h"

/**
 * main - Absolute values
 *
 * Description: prints absolute values
 * Return: Always equals 0
 */
int main(void)
{
	int r;

	r = _abs(-1);
	printf("%d\n", r);
	r = _abs(0);
	printf("%d\n", r);
	r = _abs(1);
	printf("%d\n", r);
	r = _abs(-98);
	printf("%d\n", r);
	return (0);

}
