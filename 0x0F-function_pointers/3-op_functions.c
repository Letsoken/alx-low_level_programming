#include "3-calc.h"
#include <stdlib.h>

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
  * op_add - Function that adds.
  * @a: Integer
  * @b: Integer
  * Return: Result of operation
  */
int op_add(int a, int b)
{
	return (a + b);
}


/**
  * op_sub - Function that suntracts.
  * @a: Integer
  * @b: Integer
  * Return: Result of operation
  */
int op_sub(int a, int b)
{
	return (a - b);
}


/**
  * op_mul - Function that multiplies.
  * @a: Integer
  * @b: Integer
  * Return: Result of operation
  */
int op_mul(int a, int b)
{
	return (a * b);
}


/**
  * op_div - Function that divides.
  * @a: Integer
  * @b: Integer
  * Return: Result of operation
  */
int op_div(int a, int b)
{
	return (a / b);
}


/**
  * op_mod - Function that find modulus.
  * @a: Integer
  * @b: Integer
  * Return: Result of operation
  */
int op_mod(int a, int b)
{
	return (a % b);
}
