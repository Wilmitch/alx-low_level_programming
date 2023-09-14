#include "main.h"

/**
 * print_most_numbers - prints numbers from 0 to 9 followed by new line
 * except 2 and 4
 * This using only _putchar twice
 * Return: void
 */
void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if (i != 2 && i != 4)
		{
			_putchar(i + '0');
		}
	}
	_putchar('\n');
}
