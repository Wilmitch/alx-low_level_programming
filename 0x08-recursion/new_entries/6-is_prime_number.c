#include "main.h"

/**
 * is_divisible - checks if a number is divisible
 * @num: the number to be checked
 * @div: the divisor
 * Return: if the number is divisible - 0
 * if the number is not divisible  - 1
 */
int is_divisible(int num, int div)
{
	if (num % div == 0)
		return (0);
	if (div == num / 2)
		return (1);
	return (is_divisible(num, div + 1));
}
/**
 * is_prime_number - checks if a number is prime
 * @n: the number to be checked
 *
 * Return: if the int is not prime - 0
 * if the int is prime - 1.
 */
int is_prime_number(int n)
{
	int div;

	div = 2;
	if (n <= 1)
		return (0);
	if (n >= 2 && n <= 3)
		return (1);
	return (is_divisible(n, div));
}
