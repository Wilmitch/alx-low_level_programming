#include "main.h"

/**
 * factorial - returns the factorial of a given number.
 * @n: the given number
 * Return: factorial result
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
		n *= factorial(n - 1);
	return (n);
}
