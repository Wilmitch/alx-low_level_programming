#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 on success. Error code otherwise
 */

int main(void)
{
	char ch = 'a';
	int i = 0;
	/*your code goes here*/

	while (i < 26)
	{
		if (ch != 'e' && ch != 'q')
			putchar(ch);
		ch++;
		i++;

	}
	putchar('\n');
	return (0);
}
