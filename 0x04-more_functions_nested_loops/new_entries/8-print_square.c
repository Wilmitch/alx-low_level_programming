#include "main.h"

/**
 * print_square - prints a square followed by new line, only using putchar
 * function using the character # to print the square.
 * @size: the size of the square.
 * Return: void
 */
void print_square(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
