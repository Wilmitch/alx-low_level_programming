#include "main.h"

/**
 * print_triangle - prints a triangle followed by new line, and if size is
 * less than or zero only print a new line
 * @size: size of triangle
 * Return: void
 */
void print_triangle(int size)
{
	int i, j;

	for (i = 1; i <= size; i++)
	{
		for (j = i; j< size; j++)
		{
			_putchar(' ');
		}
		for (j = 1; j <= i; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
