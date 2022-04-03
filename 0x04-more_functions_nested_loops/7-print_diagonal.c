#include "main.h"

/**
 * prin_diagonal - draws a diagonal line on the terminal
 * @n: number times character \ should be printed
 * Return: diagonal line
 */
void print_diagonal(int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
			_putchar(' ');
		_putchar('\\');
		_putchar('\n');
	}
	if (i == 0)
		_putchar('\n');
}
