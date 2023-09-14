#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 * @n: given number and i is the last digit.
 *
 * Return: The last digit.
 */
int print_last_digit(int n)
{
	int i;

	i = n % 10;
	if (n < 0)
		i = -i;
	_putchar(i + '0');
	return (i);
}
