#include "function_pointers.h"
#include <stdlib.h>

/**
  * print_name - Function that prints a name
  * @name: Name to be printed
  * @f: Pointer to function that prints name
  * Return: Nothing.
  */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
