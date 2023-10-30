#include "main.h"

/**
 * _pow_recursion - a function that calculates and returns the value
 * of x raised to the power of y
 * @x: the number to be raised
 * @y: the power
 * Return: Value of x raised to the power of y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		x *= _pow_recursion(x, y - 1);
	return (x);
}
