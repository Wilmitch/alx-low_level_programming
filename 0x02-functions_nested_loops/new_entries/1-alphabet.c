#include "main.h"

/**
 * main - entry point
 * print_alphabet prints alphabet in lowercase
 * followed by a new line.
 * This is done using _putchar twice.
 * Return: 0 always on success.
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		_putchar(c);
	_putchar('\n');
}
