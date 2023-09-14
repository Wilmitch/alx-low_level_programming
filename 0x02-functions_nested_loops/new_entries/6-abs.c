#include <stdio.h>
#include "main.h"

/**
 * _abs - is a function that prints the
 * absolute value of an integer
 * @n: the integer
 *
 * Return: the absolute value.
 */
int _abs(int n)
{
	if (n >= 0)
		return (n);
	else
		return (-n);
}
