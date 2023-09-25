#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @str: the string to print
 * Return: void
 */
void puts2(char *str)
{
	int i, len;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	len = i;
	for (i = 0; i < len; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
