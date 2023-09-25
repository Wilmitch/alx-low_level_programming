#include "main.h"

/**
 * puts_half - prints half a string followed by new line
 * @str: the string
 * Return: void
 */
void puts_half(char *str)
{
	int i, len;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	len = i;
	if (i % 2 == 0)
	{
		for (i = len / 2; i <= len - 1; i++)
		{
			_putchar(str[i]);
		}
	}
	else
	{
		for (i = (len - 1) / 2; i <= len - 1; i++)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
