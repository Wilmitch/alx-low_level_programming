#include <stdio.h>

/**
 * main - Entry poiny
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char ch = '0';
	int i = 0;

	/*your code goes there*/
	while (i < 10)
	{
		putchar(ch);
		ch++;
		i++;
	}
	putchar('\n');
	return (0);
}
