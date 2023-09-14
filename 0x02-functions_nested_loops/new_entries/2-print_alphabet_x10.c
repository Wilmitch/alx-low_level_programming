#include <stdio.h>
#include "main.h"

/**
 * void print_alphabet_x10(void): is a function that prints
 * the alphabet 10 times in lowercase followed by new line.
 *
 * This is done using _putchar only twice.
 * Doesnt have a return type as its void.
 */
void print_alphabet_x10(void)
{
	int i;
	char c;

	i = 0;
	while (i < 10)
	{
		for (c = 'a'; c <= 'z'; c++)
			_putchar(c);
		putchar('\n');
		i++;
	}
}
