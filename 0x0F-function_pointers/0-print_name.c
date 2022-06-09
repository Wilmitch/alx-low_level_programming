#include "function_pointers.h"

/**
 * print_name - this will print a name.
 * @name: string name to be printed.
 * @f: pointer to the printing function.
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
