#include "main.h"

/**
 * main - Entry point
 *
 * Return: 0 Always (success)
 */
void print_alphabet(void)
{
	char ch;

	ch = 'a';

	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');
}
