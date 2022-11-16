#include "function_pointers.h"

/**
  * print_name - Function that prints a name
  * @name: name of the person
  *
  * Return: Nothing.
  */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}

