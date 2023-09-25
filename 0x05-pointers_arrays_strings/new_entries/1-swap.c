#include "main.h"

/**
 * swap_int - swaps the values of the two integers
 * @*a: address of integer a
 * @*b: address of integer b
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
